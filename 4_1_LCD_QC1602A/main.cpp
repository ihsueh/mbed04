#include "LCD.h"

int main()
{
      LCD_init();                     // call the initialise function
      display_to_LCD(0x48);           // ‘H’
      display_to_LCD(0x48);           // ‘E’
      display_to_LCD(0x48);           // ‘L’
      display_to_LCD(0x48);           // ‘L’
      display_to_LCD(0x48);           // ‘O’
      for(char x=0x30;x<=0x39;x++)
      {
            display_to_LCD(x);      // display numbers 0-9
      }
}