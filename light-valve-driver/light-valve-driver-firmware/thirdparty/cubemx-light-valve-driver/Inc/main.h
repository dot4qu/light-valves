/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DEVBOARD_LED_Pin LL_GPIO_PIN_13
#define DEVBOARD_LED_GPIO_Port GPIOC
#define DBG_TX_Pin LL_GPIO_PIN_2
#define DBG_TX_GPIO_Port GPIOA
#define DBG_RX_Pin LL_GPIO_PIN_3
#define DBG_RX_GPIO_Port GPIOA
#define DATA_Pin LL_GPIO_PIN_0
#define DATA_GPIO_Port GPIOB
#define DBG_IO_Pin LL_GPIO_PIN_13
#define DBG_IO_GPIO_Port GPIOB
#define LED1_IO_Pin LL_GPIO_PIN_14
#define LED1_IO_GPIO_Port GPIOB
#define LED2_IO_Pin LL_GPIO_PIN_15
#define LED2_IO_GPIO_Port GPIOB
#define XCVR_DI_Pin LL_GPIO_PIN_9
#define XCVR_DI_GPIO_Port GPIOA
#define XCVR_RO_Pin LL_GPIO_PIN_10
#define XCVR_RO_GPIO_Port GPIOA
#define XCVR_EN_Pin LL_GPIO_PIN_11
#define XCVR_EN_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
