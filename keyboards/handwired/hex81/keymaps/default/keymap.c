// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *       ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
     *       │ 001 │ 002 │ 003 │ 004 │ 005 │ 006 │ 007 │ 008 │ 009 │ 010 │ 011 │ 012 │ 013 │
     *    ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐
     *    │ 100 │ 101 │ 102 │ 103 │ 104 │ 105 │ 106 │ 108 │ 109 │ 110 │ 111 │ 112 │ 113 │ 114 │
     * ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐
     * │ 200 │ 201 │ 202 │ 203 │ 204 │ 205 │ 206 │ 207 │ 208 │ 209 │ 210 │ 211 │ 212 │ 213 │ 214 │
     * └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘
     *    │ 300 │ 301 │ 302 │ 303 │ 304 │ 305 │ 306 │ 308 │ 309 │ 310 │ 311 │ 312 │ 313 │ 314 │
     *    └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘
     *       │ 401 │ 402 │ 403 │ 404 │ 405 │ 406 │ 407 │ 408 │ 409 │ 410 │ 411 │ 412 │ 413 │
     *       └─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┘
     *                │ 502 │     │ 504 │ 505 │ 506 │ 508 │ 509 │ 510 │     │ 512 │
     *                └─────┘     └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘     └─────┘
     *                               │ 605 │ 606 │     │ 608 │ 609 │
     *                               └─────┴─────┘     └─────┴─────┘
     */
    [0] = LAYOUT(
                 KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
            KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
        KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
            KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
                 KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,
                               KC_SPC,           KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,           KC_SPC,
                                                      KC_SPC,  KC_SPC,           KC_SPC,  KC_SPC
    )
};
