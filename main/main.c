 /*
 * JoBa1 ESP32 Blink example
 */

#include <unistd.h>
#include "driver/gpio.h"

void app_main()
{
  gpio_num_t led_pin = GPIO_NUM_2;
  gpio_pad_select_gpio(led_pin); // not needed for all pins
  gpio_set_direction(led_pin, GPIO_MODE_OUTPUT);

  while( true ) {
    gpio_set_level(led_pin, 1) ;  
    usleep(100*1000);
    gpio_set_level(led_pin, 0);  
    usleep(900*1000);
  }
}

