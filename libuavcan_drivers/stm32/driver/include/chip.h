// #include "stm32f4xx.h"  // HAL hjeader file
// #include <stm32f405xx.h>
#include <stm32f4xx.h>
#include <stm32f4xx_hal.h>

#define STM32F4XX
#define STM32_PCLK1           (42000000ul)          // 42 MHz
// #define STM32_PCLK1           (48000000ul)          // 48 MHz
// #define STM32_PCLK1           HAL_RCC_GetPCLK1Freq()          // 48 MHz
#define STM32_TIMCLK1         (84000000ul)          // 84 MHz
#define CAN1_TX_IRQHandler    CAN1_TX_IRQHandler
#define CAN1_RX0_IRQHandler   CAN1_RX0_IRQHandler
#define CAN1_RX1_IRQHandler   CAN1_RX1_IRQHandler

// #define UAVCAN_STM32_NUM_IFACES 1
// #define DUAVCAN_STM32_FREERTOS 1
// #define DUAVCAN_STM32_TIMER_NUMBER 2
