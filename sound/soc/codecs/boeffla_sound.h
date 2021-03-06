/*
 * Author: andip71
 * 
 * Version 1.2.1
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/module.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/device.h>
#include <linux/miscdevice.h>
#include <linux/printk.h>

/*****************************************/
// Function declarations
/*****************************************/

// wcd9335 exported functions for Boeffla Sound engine
int get_headphone_gain_l(void);
int get_headphone_gain_r(void);

void set_headphone_gain_l(int gain);
void set_headphone_gain_r(int gain);

int get_mic_gain_general(void);
void set_mic_gain_general(int gain);


// tfa98xx.c exported functions for Boeffla Sound engine
int get_speaker_gain(void);
void set_speaker_gain(int gain);


/*****************************************/
// Definitions
/*****************************************/

// Boeffla sound general
#define BOEFFLA_SOUND_DEFAULT 	0
#define BOEFFLA_SOUND_VERSION 	"1.2.1"
#define DEBUG_DEFAULT 			0

// headphone levels
#define HEADPHONE_DEFAULT		0
#define HEADPHONE_MIN 			-30
#define HEADPHONE_MAX 			30

// speaker levels (0 is normal, 255 is lowest)
#define SPEAKER_DEFAULT		0
#define SPEAKER_MIN 			-255
#define SPEAKER_MAX 			0

// Microphone control
#define MICLEVEL_DEFAULT_GENERAL		0
#define MICLEVEL_MIN_GENERAL			-10
#define MICLEVEL_MAX_GENERAL			20

