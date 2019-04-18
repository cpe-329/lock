/*
 * main.c
 * 
 * Danica Fujiwara & Spencer Shaw
 * 
 * CPE 329-17/18 Spring 2019
 */

#include "stdint.h"
#include "msp.h"
#include "my_msp.h"
#include "delay.h"
#include "lcd.h"
#include "led.h"
#include "keypad.h"
#include "lock.h"

#define FREQ FREQ_48_MHZ

void main(void)
{
	passcode_t passcode = passcode_init(4, 4, 6, 7);
	init(FREQ);  // Initialize periphrials
	test_leds();  // Blink LEDs to say hellow
	
	while(1){  // Loop
		if(lock(passcode)){
        	unlock_message();
        	keypad_await_keypress(LOCK_HOLD_MS);
		}
	}
}
