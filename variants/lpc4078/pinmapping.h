/**
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

using pin_t = int16_t;

#define P_NC -1

#define PIN0_00 0x0
#define PIN0_01 0x1
#define PIN0_02 0x2
#define PIN0_03 0x3
#define PIN0_04 0x4
#define PIN0_05 0x5
#define PIN0_06 0x6
#define PIN0_07 0x7
#define PIN0_08 0x8
#define PIN0_09 0x9
#define PIN0_10 0xa
#define PIN0_11 0xb
#define PIN0_12 0xc
#define PIN0_13 0xd
#define PIN0_14 0xe
#define PIN0_15 0xf
#define PIN0_16 0x10
#define PIN0_17 0x11
#define PIN0_18 0x12
#define PIN0_19 0x13
#define PIN0_20 0x14
#define PIN0_21 0x15
#define PIN0_22 0x16
#define PIN0_23 0x17
#define PIN0_24 0x18
#define PIN0_25 0x19
#define PIN0_26 0x1a
#define PIN0_27 0x1b
#define PIN0_28 0x1c
#define PIN0_29 0x1d
#define PIN0_30 0x1e
#define PIN0_31 0x1f

#define PIN1_00 0x20
#define PIN1_01 0x21
#define PIN1_02 0x22
#define PIN1_03 0x23
#define PIN1_04 0x24
#define PIN1_05 0x25
#define PIN1_06 0x26
#define PIN1_07 0x27
#define PIN1_08 0x28
#define PIN1_09 0x29
#define PIN1_10 0x2a
#define PIN1_11 0x2b
#define PIN1_12 0x2c
#define PIN1_13 0x2d
#define PIN1_14 0x2e
#define PIN1_15 0x2f
#define PIN1_16 0x30
#define PIN1_17 0x31
#define PIN1_18 0x32
#define PIN1_19 0x33
#define PIN1_20 0x34
#define PIN1_21 0x35
#define PIN1_22 0x36
#define PIN1_23 0x37
#define PIN1_24 0x38
#define PIN1_25 0x39
#define PIN1_26 0x3a
#define PIN1_27 0x3b
#define PIN1_28 0x3c
#define PIN1_29 0x3d
#define PIN1_30 0x3e
#define PIN1_31 0x3f

#define PIN2_00 0x40
#define PIN2_01 0x41
#define PIN2_02 0x42
#define PIN2_03 0x43
#define PIN2_04 0x44
#define PIN2_05 0x45
#define PIN2_06 0x46
#define PIN2_07 0x47
#define PIN2_08 0x48
#define PIN2_09 0x49
#define PIN2_10 0x4a
#define PIN2_11 0x4b
#define PIN2_12 0x4c
#define PIN2_13 0x4d
#define PIN2_14 0x4e
#define PIN2_15 0x4f
#define PIN2_16 0x50
#define PIN2_17 0x51
#define PIN2_18 0x52
#define PIN2_19 0x53
#define PIN2_20 0x54
#define PIN2_21 0x55
#define PIN2_22 0x56
#define PIN2_23 0x57
#define PIN2_24 0x58
#define PIN2_25 0x59
#define PIN2_26 0x5a
#define PIN2_27 0x5b
#define PIN2_28 0x5c
#define PIN2_29 0x5d
#define PIN2_30 0x5e
#define PIN2_31 0x5f

#define PIN3_00 0x60
#define PIN3_01 0x61
#define PIN3_02 0x62
#define PIN3_03 0x63
#define PIN3_04 0x64
#define PIN3_05 0x65
#define PIN3_06 0x66
#define PIN3_07 0x67
#define PIN3_08 0x68
#define PIN3_09 0x69
#define PIN3_10 0x6a
#define PIN3_11 0x6b
#define PIN3_12 0x6c
#define PIN3_13 0x6d
#define PIN3_14 0x6e
#define PIN3_15 0x6f
#define PIN3_16 0x70
#define PIN3_17 0x71
#define PIN3_18 0x72
#define PIN3_19 0x73
#define PIN3_20 0x74
#define PIN3_21 0x75
#define PIN3_22 0x76
#define PIN3_23 0x77
#define PIN3_24 0x78
#define PIN3_25 0x79
#define PIN3_26 0x7a
#define PIN3_27 0x7b
#define PIN3_28 0x7c
#define PIN3_29 0x7d
#define PIN3_30 0x7e
#define PIN3_31 0x7f

#define PIN4_00 0x80
#define PIN4_01 0x81
#define PIN4_02 0x82
#define PIN4_03 0x83
#define PIN4_04 0x84
#define PIN4_05 0x85
#define PIN4_06 0x86
#define PIN4_07 0x87
#define PIN4_08 0x88
#define PIN4_09 0x89
#define PIN4_10 0x8a
#define PIN4_11 0x8b
#define PIN4_12 0x8c
#define PIN4_13 0x8d
#define PIN4_14 0x8e
#define PIN4_15 0x8f
#define PIN4_16 0x90
#define PIN4_17 0x91
#define PIN4_18 0x92
#define PIN4_19 0x93
#define PIN4_20 0x94
#define PIN4_21 0x95
#define PIN4_22 0x96
#define PIN4_23 0x97
#define PIN4_24 0x98
#define PIN4_25 0x99
#define PIN4_26 0x9a
#define PIN4_27 0x9b
#define PIN4_28 0x9c
#define PIN4_29 0x9d
#define PIN4_30 0x9e
#define PIN4_31 0x9f

#define PIN5_00 0xa0
#define PIN5_01 0xa1
#define PIN5_02 0xa2
#define PIN5_03 0xa3
#define PIN5_04 0xa4
