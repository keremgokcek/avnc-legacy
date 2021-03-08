/*
 * Copyright (c) 2021  Gaurav Ujjwal.
 *
 * SPDX-License-Identifier:  GPL-3.0-or-later
 *
 * See COPYING.txt for more details.
 */

package com.gaurav.avnc.ui.home

import android.os.Bundle
import android.view.Window
import androidx.appcompat.app.AppCompatActivity
import androidx.databinding.DataBindingUtil
import com.gaurav.avnc.R
import com.gaurav.avnc.databinding.ActivityUrlBinding
import com.gaurav.avnc.ui.vnc.startVncActivity
import com.gaurav.avnc.util.layoutBehindStatusBar
import com.gaurav.avnc.vnc.VncUri

/**
 * Activity allowing user to directly connect to a server.
 *
 * Possible future improvements:
 * - Keep history of recent entries
 * - Show suggestions from saved profiles
 * - Show suggestions from discovered servers.
 */
class UrlBarActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        window.requestFeature(Window.FEATURE_ACTIVITY_TRANSITIONS)

        val binding = DataBindingUtil.setContentView<ActivityUrlBinding>(this, R.layout.activity_url)

        binding.back.setOnClickListener { onBackPressed() }
        binding.clear.setOnClickListener { binding.url.setText("") }
        binding.url.setOnEditorActionListener { _, _, _ -> go(binding.url.text.toString()) }
    }

    override fun onResume() {
        super.onResume()
        layoutBehindStatusBar(window.decorView)
    }

    private fun go(url: String): Boolean {
        if (url.isBlank())
            return false

        startVncActivity(this, VncUri(processIPv6(url)))

        finish()
        return true
    }

    /**
     * For IPv6, [VncUri] expects host address to be wrapped in square brackets.
     * We apply some heuristics to detect IPv6 address and add brackets if they
     * are missing.
     */
    private fun processIPv6(url: String): String {
        //we only want to process IP address literals without path/query
        if (url.contains('/') || url.contains('?') || url.contains('#'))
            return url

        //might already contain brackets
        if (url.contains('[') || url.contains(']'))
            return url

        //handle most common cases
        if (url.contains("::") || url.count { it == ':' } > 2)
            return "[$url]"

        return url
    }
}