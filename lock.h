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


void lock(const uint8_t pass1, const uint8_t pass2, const uint8_t pass3, const uint8_t pass4);

void lock_message()

#endif
