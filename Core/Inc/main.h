/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

#include "stm32f4xx_ll_dma.h"
#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"

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
#define M2_ENCA_Pin LL_GPIO_PIN_13
#define M2_ENCA_GPIO_Port GPIOC
#define M4_DIR_Pin LL_GPIO_PIN_14
#define M4_DIR_GPIO_Port GPIOC
#define M4_ENCA_Pin LL_GPIO_PIN_15
#define M4_ENCA_GPIO_Port GPIOC
#define M5_POT_ENCB_Pin LL_GPIO_PIN_0
#define M5_POT_ENCB_GPIO_Port GPIOC
#define M3_POT_ENCB_Pin LL_GPIO_PIN_1
#define M3_POT_ENCB_GPIO_Port GPIOC
#define STW_EN_Pin LL_GPIO_PIN_2
#define STW_EN_GPIO_Port GPIOC
#define M4_POT_ENCB_Pin LL_GPIO_PIN_3
#define M4_POT_ENCB_GPIO_Port GPIOC
#define SHAFT_ENCA_Pin LL_GPIO_PIN_0
#define SHAFT_ENCA_GPIO_Port GPIOA
#define SHAFT_ENCB_Pin LL_GPIO_PIN_1
#define SHAFT_ENCB_GPIO_Port GPIOA
#define PEND_POT_Pin LL_GPIO_PIN_2
#define PEND_POT_GPIO_Port GPIOA
#define BBT_SERVO_Y_Pin LL_GPIO_PIN_3
#define BBT_SERVO_Y_GPIO_Port GPIOA
#define M1_POT_ENCB_Pin LL_GPIO_PIN_4
#define M1_POT_ENCB_GPIO_Port GPIOA
#define M6_POT_ENCB_Pin LL_GPIO_PIN_5
#define M6_POT_ENCB_GPIO_Port GPIOA
#define M2_POT_ENCB_Pin LL_GPIO_PIN_6
#define M2_POT_ENCB_GPIO_Port GPIOA
#define M2_PWM_Pin LL_GPIO_PIN_7
#define M2_PWM_GPIO_Port GPIOA
#define M2_DIR_Pin LL_GPIO_PIN_4
#define M2_DIR_GPIO_Port GPIOC
#define BBT_TS_RX_Pin LL_GPIO_PIN_5
#define BBT_TS_RX_GPIO_Port GPIOC
#define BB_POT_Pin LL_GPIO_PIN_0
#define BB_POT_GPIO_Port GPIOB
#define DEBUG_LED_Pin LL_GPIO_PIN_1
#define DEBUG_LED_GPIO_Port GPIOB
#define M1_ENCA_Pin LL_GPIO_PIN_2
#define M1_ENCA_GPIO_Port GPIOB
#define M3_DIR_Pin LL_GPIO_PIN_10
#define M3_DIR_GPIO_Port GPIOB
#define M6_DIR_Pin LL_GPIO_PIN_12
#define M6_DIR_GPIO_Port GPIOB
#define DOF_DIR_Pin LL_GPIO_PIN_13
#define DOF_DIR_GPIO_Port GPIOB
#define M3_ENCA_Pin LL_GPIO_PIN_14
#define M3_ENCA_GPIO_Port GPIOB
#define DELTA_MGNT_Pin LL_GPIO_PIN_15
#define DELTA_MGNT_GPIO_Port GPIOB
#define DOF_ENC1A_Pin LL_GPIO_PIN_6
#define DOF_ENC1A_GPIO_Port GPIOC
#define DOF_ENC1B_Pin LL_GPIO_PIN_7
#define DOF_ENC1B_GPIO_Port GPIOC
#define M3_DOF_PWM_Pin LL_GPIO_PIN_8
#define M3_DOF_PWM_GPIO_Port GPIOC
#define M4_PWM_Pin LL_GPIO_PIN_9
#define M4_PWM_GPIO_Port GPIOC
#define M5_PWM_Pin LL_GPIO_PIN_8
#define M5_PWM_GPIO_Port GPIOA
#define M6_PWM_Pin LL_GPIO_PIN_9
#define M6_PWM_GPIO_Port GPIOA
#define BBT_SERVO_X_Pin LL_GPIO_PIN_10
#define BBT_SERVO_X_GPIO_Port GPIOA
#define M1_PWM_Pin LL_GPIO_PIN_11
#define M1_PWM_GPIO_Port GPIOA
#define M5_ENCA_Pin LL_GPIO_PIN_12
#define M5_ENCA_GPIO_Port GPIOA
#define BBT_TS_TX_Pin LL_GPIO_PIN_10
#define BBT_TS_TX_GPIO_Port GPIOC
#define M6_ENCA_Pin LL_GPIO_PIN_11
#define M6_ENCA_GPIO_Port GPIOC
#define M1_DIR_Pin LL_GPIO_PIN_12
#define M1_DIR_GPIO_Port GPIOC
#define M5_DIR_Pin LL_GPIO_PIN_2
#define M5_DIR_GPIO_Port GPIOD
#define DOF_EN_Pin LL_GPIO_PIN_5
#define DOF_EN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
