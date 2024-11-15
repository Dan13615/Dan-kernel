//
// Created by dan13615 on 11/15/24.
//

#ifndef PRINT_H
#define PRINT_H

#include <stddef.h>
#include <stdint.h>

void print_clear(void);
void print_set_color(uint8_t foreground, uint8_t background);
void print_char(char character);
void print_str(char* string);
void print_middle_screen(char* string, int length);

enum print_color {
  PRINT_COLOR_BLACK = 0,
  PRINT_COLOR_BLUE = 1,
  PRINT_COLOR_GREEN = 2,
  PRINT_COLOR_CYAN = 3,
  PRINT_COLOR_RED = 4,
  PRINT_COLOR_MAGENTA = 5,
  PRINT_COLOR_BROWN = 6,
  PRINT_COLOR_LIGHT_GREY = 7,
  PRINT_COLOR_DARK_GREY = 8,
  PRINT_COLOR_LIGHT_BLUE = 9,
  PRINT_COLOR_LIGHT_GREEN = 10,
  PRINT_COLOR_LIGHT_CYAN = 11,
  PRINT_COLOR_LIGHT_RED = 12,
  PRINT_COLOR_PINK = 13,
  PRINT_COLOR_YELLOW = 14,
  PRINT_COLOR_WHITE = 15,
};

#endif //PRINT_H
