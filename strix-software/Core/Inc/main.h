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
#include "stm32l4xx_hal.h"

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
#define Altimeter_Int_Pin GPIO_PIN_2
#define Altimeter_Int_GPIO_Port GPIOE
#define CS_Altimeter_Pin GPIO_PIN_3
#define CS_Altimeter_GPIO_Port GPIOE
#define Pyro_A_Voltage_Pin GPIO_PIN_0
#define Pyro_A_Voltage_GPIO_Port GPIOA
#define Pyro_B_Voltage_Pin GPIO_PIN_1
#define Pyro_B_Voltage_GPIO_Port GPIOA
#define Pyro_C_Voltage_Pin GPIO_PIN_2
#define Pyro_C_Voltage_GPIO_Port GPIOA
#define Pyro_D_Voltage_Pin GPIO_PIN_3
#define Pyro_D_Voltage_GPIO_Port GPIOA
#define Pyro_F_Voltage_Pin GPIO_PIN_4
#define Pyro_F_Voltage_GPIO_Port GPIOA
#define Pyro_E_Voltage_Pin GPIO_PIN_5
#define Pyro_E_Voltage_GPIO_Port GPIOA
#define Ignition_Battery_Voltage_Pin GPIO_PIN_4
#define Ignition_Battery_Voltage_GPIO_Port GPIOC
#define Pyro_A_Trigger_Pin GPIO_PIN_2
#define Pyro_A_Trigger_GPIO_Port GPIOB
#define Pyro_B_Trigger_Pin GPIO_PIN_7
#define Pyro_B_Trigger_GPIO_Port GPIOE
#define Pyro_C_Trigger_Pin GPIO_PIN_8
#define Pyro_C_Trigger_GPIO_Port GPIOE
#define Pyro_D_Trigger_Pin GPIO_PIN_9
#define Pyro_D_Trigger_GPIO_Port GPIOE
#define Pyro_F_Trigger_Pin GPIO_PIN_12
#define Pyro_F_Trigger_GPIO_Port GPIOE
#define Pyro_E_Trigger_Pin GPIO_PIN_13
#define Pyro_E_Trigger_GPIO_Port GPIOE
#define Buzzer_Pin GPIO_PIN_12
#define Buzzer_GPIO_Port GPIOB
#define Pyro_D_Cont_LED_Pin GPIO_PIN_14
#define Pyro_D_Cont_LED_GPIO_Port GPIOB
#define Pyro_C_Cont_LED_Pin GPIO_PIN_15
#define Pyro_C_Cont_LED_GPIO_Port GPIOB
#define Pyro_B_Cont_LED_Pin GPIO_PIN_10
#define Pyro_B_Cont_LED_GPIO_Port GPIOD
#define Pyro_A_Cont_LED_Pin GPIO_PIN_11
#define Pyro_A_Cont_LED_GPIO_Port GPIOD
#define Pyro_E_Cont_LED_Pin GPIO_PIN_12
#define Pyro_E_Cont_LED_GPIO_Port GPIOD
#define Pyro_F_Cont_LED_Pin GPIO_PIN_13
#define Pyro_F_Cont_LED_GPIO_Port GPIOD
#define Status_LED_Pin GPIO_PIN_14
#define Status_LED_GPIO_Port GPIOD
#define SD_Card_Detect_Pin GPIO_PIN_0
#define SD_Card_Detect_GPIO_Port GPIOD
#define GPS_ExtInt_Pin GPIO_PIN_3
#define GPS_ExtInt_GPIO_Port GPIOD
#define GPS_Reset_Pin GPIO_PIN_4
#define GPS_Reset_GPIO_Port GPIOD
#define CS_High_G_Pin GPIO_PIN_6
#define CS_High_G_GPIO_Port GPIOB
#define Low_G_Gyro_Int_Pin GPIO_PIN_9
#define Low_G_Gyro_Int_GPIO_Port GPIOB
#define Low_G_Accel_Int_Pin GPIO_PIN_1
#define Low_G_Accel_Int_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
