/*
 * lock.c
 * 
 * Danica Fujiwara & Spencer Shaw
 * 
 * CPE 329-17/18 Spring 2019
 */

#include "lock.h"
#include "keypad.h"
#include "lcd.h"

void lock(const uint8_t pass1,
          const uint8_t pass2,
          const uint8_t pass3,
          const uint8_t pass4){

    lock_message();
}

void lock_message(){
    lcd_cursor_off();
    
    // lcd_home();  // ?
    lcd_write('L');
    lcd_write('O');
    lcd_write('C');
    lcd_write('K');
    lcd_write('E');
    lcd_write('D');
    lcd_line_2();
    lcd_write('E');
    lcd_write('n');
    lcd_write('t');
    lcd_write('e');
    lcd_write('r');
    lcd_write(' ');
    lcd_write('k');
    lcd_write('e');
    lcd_write('y');
    lcd_write(':');
    lcd_write(' ');

    lcd_blink_on();

}
