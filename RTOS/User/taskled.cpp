#include "tx_api.h"
#include "main.h"

TX_THREAD led_thread;
uint8_t led_thread_stack[1024];

[[noreturn]] void led_thread_entry(ULONG thread_input)
{
    UNUSED(thread_input);//传入的这个没用
    
    //在这里你可以做一些复杂任务的初始化，比如说电机的init，etc.

    /* Enter into a forever loop. */
    while(1)
    {
        HAL_GPIO_TogglePin(GPIOH, GPIO_PIN_11);
        /* Sleep for 1 tick. */
        tx_thread_sleep(1000);
    }
}