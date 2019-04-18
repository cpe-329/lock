/*
 * lock.h
 * 
 * Danica Fujiwara & Spencer Shaw
 * 
 * CPE 329-17/18 Spring 2019
 */

#ifndef __LOCK_H__
#define __LOCK_H__

#include "stdint.h"

#define LOCK_HOLD_MS (5)

typedef struct passcode_s {
    uint8_t dig1;
    uint8_t dig2;
    uint8_t dig3;
    uint8_t dig4;
} passcode_t;

uint8_t lock(const passcode_t passcode);

void lock_message();
uint8_t check_passcode(passcode_t actual, passcode_t guess);
passcode_t passcode_init(uint8_t dig1, uint8_t dig2, uint8_t dig3, uint8_t dig4);
passcode_t passcode_empty();
void unlock_message();

#endif
