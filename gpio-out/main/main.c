#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED 2

void app_main()
{
    gpio_set_direction(LED, GPIO_MODE_DEF_OUTPUT);

    while(1) {
        gpio_set_level(LED, 1);
        vTaskDelay(1000/portTICK_RATE_MS);
        gpio_set_level(LED, 0);
        vTaskDelay(1000/portTICK_RATE_MS);
    }
}
