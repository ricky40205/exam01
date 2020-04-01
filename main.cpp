#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    
    uLCD.background_color(BLACK);
    uLCD.cls();
    uLCD.background_color(DGREY);
    
    uLCD.line(0, 0, 54, 0, WHITE);
    uLCD.line(54, 0, 54, 54, WHITE);
    uLCD.line(54, 54, 0, 54, WHITE);
    uLCD.line(0, 54, 0, 0, WHITE);
   

    uLCD.set_font(FONT_8X8);

    uLCD.text_bold(ON);
    uLCD.text_string("107011229", 1, 4, FONT_7X8, BLUE);
    
    wait(2);
}