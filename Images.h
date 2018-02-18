#ifndef __IMAGES_H__
#define __IMAGES_H__
#endif

#include "ece210_api.h"

extern const uint8_t FROG_BITMAP_UP[];
#define FROG_BITMAP_UP_WIDTH 24
#define FROG_BITMAP_UP_HEIGHT 18
extern const uint8_t FROG_BITMAP_RIGHT[];
#define FROG_BITMAP_RIGHT_WIDTH 18
#define FROG_BITMAP_RIGHT_HEIGHT 24
extern const uint8_t FROG_BITMAP_LEFT[];
#define FROG_BITMAP_LEFT_WIDTH 18
#define FROG_BITMAP_LEFT_HEIGHT 24
extern const uint8_t FROG_BITMAP_DOWN[];
#define FROG_BITMAP_DOWN_WIDTH 24
#define FROG_BITMAP_DOWN_HEIGHT 18

#define FROG_FOREGROUND_COLOR LCD_COLOR_GREEN
#define FROG_BACKGROUND_COLOR LCD_COLOR_GREEN2

#define FROG2_FOREGROUND_COLOR LCD_COLOR_RED
#define FROG2_BACKGROUND_COLOR LCD_COLOR_GREEN2

extern const uint8_t CAR1_BITMAP[];
#define CAR1_BITMAP_WIDTH 24
#define CAR1_BITMAP_HEIGHT 13
#define CAR1_FOREGROUND_COLOR LCD_COLOR_BLUE
#define CAR1_BACKGROUND_COLOR LCD_COLOR_BLACK

extern const uint8_t RACECAR_BITMAP[];
#define RACECAR_BITMAP_WIDTH 24
#define RACECAR_BITMAP_HEIGHT 18
#define RACECAR_FOREGROUND_COLOR LCD_COLOR_RED
#define RACECAR_BACKGROUND_COLOR LCD_COLOR_BLACK

extern const uint8_t TRUCK_BITMAP[];
#define TRUCK_BITMAP_WIDTH 24
#define TRUCK_BITMAP_HEIGHT 13
#define TRUCK_FOREGROUND_COLOR LCD_COLOR_WHITE
#define TRUCK_BACKGROUND_COLOR LCD_COLOR_BLACK

extern const uint8_t LOG_BITMAP[];
#define LOG_BITMAP_WIDTH 60
#define LOG_BITMAP_HEIGHT 25
#define LOG_FOREGROUND_COLOR LCD_COLOR_BROWN
#define LOG_BACKGROUND_COLOR LCD_COLOR_BLUE