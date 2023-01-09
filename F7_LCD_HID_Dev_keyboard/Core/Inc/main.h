/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under Ultimate Liberty license
 * SLA0044, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0044
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

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

  void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

  /* Exported functions prototypes ---------------------------------------------*/
  void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_B0_Pin GPIO_PIN_4
#define LCD_B0_GPIO_Port GPIOE
#define OTG_HS_OverCurrent_Pin GPIO_PIN_3
#define OTG_HS_OverCurrent_GPIO_Port GPIOE
#define QSPI_D2_Pin GPIO_PIN_2
#define QSPI_D2_GPIO_Port GPIOE
#define RMII_TXD1_Pin GPIO_PIN_14
#define RMII_TXD1_GPIO_Port GPIOG
#define FMC_NBL1_Pin GPIO_PIN_1
#define FMC_NBL1_GPIO_Port GPIOE
#define FMC_NBL0_Pin GPIO_PIN_0
#define FMC_NBL0_GPIO_Port GPIOE
#define ARDUINO_SCL_D15_Pin GPIO_PIN_8
#define ARDUINO_SCL_D15_GPIO_Port GPIOB
#define ULPI_D7_Pin GPIO_PIN_5
#define ULPI_D7_GPIO_Port GPIOB
#define ARDUINO_PWM_D3_Pin GPIO_PIN_4
#define ARDUINO_PWM_D3_GPIO_Port GPIOB
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define SPDIF_RX0_Pin GPIO_PIN_7
#define SPDIF_RX0_GPIO_Port GPIOD
#define SDMMC_CK_Pin GPIO_PIN_12
#define SDMMC_CK_GPIO_Port GPIOC
#define ARDUINO_PWM_D9_Pin GPIO_PIN_15
#define ARDUINO_PWM_D9_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define DCMI_D6_Pin GPIO_PIN_5
#define DCMI_D6_GPIO_Port GPIOE
#define DCMI_D7_Pin GPIO_PIN_6
#define DCMI_D7_GPIO_Port GPIOE
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
#define ARDUINO_SDA_D14_Pin GPIO_PIN_9
#define ARDUINO_SDA_D14_GPIO_Port GPIOB
#define VCP_RX_Pin GPIO_PIN_7
#define VCP_RX_GPIO_Port GPIOB
#define QSPI_NCS_Pin GPIO_PIN_6
#define QSPI_NCS_GPIO_Port GPIOB
#define FMC_SDNCAS_Pin GPIO_PIN_15
#define FMC_SDNCAS_GPIO_Port GPIOG
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define LCD_B1_Pin GPIO_PIN_13
#define LCD_B1_GPIO_Port GPIOJ
#define OTG_FS_VBUS_Pin GPIO_PIN_12
#define OTG_FS_VBUS_GPIO_Port GPIOJ
#define Audio_INT_Pin GPIO_PIN_6
#define Audio_INT_GPIO_Port GPIOD
#define FMC_D2_Pin GPIO_PIN_0
#define FMC_D2_GPIO_Port GPIOD
#define SDMMC_D3_Pin GPIO_PIN_11
#define SDMMC_D3_GPIO_Port GPIOC
#define SDMMC_D2_Pin GPIO_PIN_10
#define SDMMC_D2_GPIO_Port GPIOC
#define OTG_FS_P_Pin GPIO_PIN_12
#define OTG_FS_P_GPIO_Port GPIOA
#define NC1_Pin GPIO_PIN_8
#define NC1_GPIO_Port GPIOI
#define SAI2_MCLKA_Pin GPIO_PIN_4
#define SAI2_MCLKA_GPIO_Port GPIOI
#define LCD_DE_Pin GPIO_PIN_7
#define LCD_DE_GPIO_Port GPIOK
#define LCD_B7_Pin GPIO_PIN_6
#define LCD_B7_GPIO_Port GPIOK
#define LCD_B6_Pin GPIO_PIN_5
#define LCD_B6_GPIO_Port GPIOK
#define LCD_B4_Pin GPIO_PIN_12
#define LCD_B4_GPIO_Port GPIOG
#define SAI2_SDB_Pin GPIO_PIN_10
#define SAI2_SDB_GPIO_Port GPIOG
#define LCD_B2_Pin GPIO_PIN_14
#define LCD_B2_GPIO_Port GPIOJ
#define OTG_FS_PowerSwitchOn_Pin GPIO_PIN_5
#define OTG_FS_PowerSwitchOn_GPIO_Port GPIOD
#define DCMI_D5_Pin GPIO_PIN_3
#define DCMI_D5_GPIO_Port GPIOD
#define FMC_D3_Pin GPIO_PIN_1
#define FMC_D3_GPIO_Port GPIOD
#define OW2_Pin GPIO_PIN_3
#define OW2_GPIO_Port GPIOI
#define ARDUINO_D8_Pin GPIO_PIN_2
#define ARDUINO_D8_GPIO_Port GPIOI
#define OTG_FS_N_Pin GPIO_PIN_11
#define OTG_FS_N_GPIO_Port GPIOA
#define uSD_Detect_Pin GPIO_PIN_13
#define uSD_Detect_GPIO_Port GPIOC
#define FMC_A0_Pin GPIO_PIN_0
#define FMC_A0_GPIO_Port GPIOF
#define SAI2_SCKA_Pin GPIO_PIN_5
#define SAI2_SCKA_GPIO_Port GPIOI
#define SAI2_FSA_Pin GPIO_PIN_7
#define SAI2_FSA_GPIO_Port GPIOI
#define LCD_HSYNC_Pin GPIO_PIN_10
#define LCD_HSYNC_GPIO_Port GPIOI
#define SAI2_SDA_Pin GPIO_PIN_6
#define SAI2_SDA_GPIO_Port GPIOI
#define LCD_B5_Pin GPIO_PIN_4
#define LCD_B5_GPIO_Port GPIOK
#define LCD_BL_CTRL_Pin GPIO_PIN_3
#define LCD_BL_CTRL_GPIO_Port GPIOK
#define DCMI_VSYNC_Pin GPIO_PIN_9
#define DCMI_VSYNC_GPIO_Port GPIOG
#define LCD_B3_Pin GPIO_PIN_15
#define LCD_B3_GPIO_Port GPIOJ
#define OTG_FS_OverCurrent_Pin GPIO_PIN_4
#define OTG_FS_OverCurrent_GPIO_Port GPIOD
#define SDMMC_CMD_Pin GPIO_PIN_2
#define SDMMC_CMD_GPIO_Port GPIOD
#define TP3_Pin GPIO_PIN_15
#define TP3_GPIO_Port GPIOH
#define ARDUINO_SCK_D13_Pin GPIO_PIN_1
#define ARDUINO_SCK_D13_GPIO_Port GPIOI
#define OTG_FS_ID_Pin GPIO_PIN_10
#define OTG_FS_ID_GPIO_Port GPIOA
#define RCC_OSC32_IN_Pin GPIO_PIN_14
#define RCC_OSC32_IN_GPIO_Port GPIOC
#define FMC_A1_Pin GPIO_PIN_1
#define FMC_A1_GPIO_Port GPIOF
#define LCD_DISP_Pin GPIO_PIN_12
#define LCD_DISP_GPIO_Port GPIOI
#define LCD_VSYNC_Pin GPIO_PIN_9
#define LCD_VSYNC_GPIO_Port GPIOI
#define DCMI_PWR_EN_Pin GPIO_PIN_13
#define DCMI_PWR_EN_GPIO_Port GPIOH
#define DCMI_D4_Pin GPIO_PIN_14
#define DCMI_D4_GPIO_Port GPIOH
#define OW1_Pin GPIO_PIN_0
#define OW1_GPIO_Port GPIOI
#define VCP_TX_Pin GPIO_PIN_9
#define VCP_TX_GPIO_Port GPIOA
#define RCC_OSC32_OUT_Pin GPIO_PIN_15
#define RCC_OSC32_OUT_GPIO_Port GPIOC
#define LCD_G6_Pin GPIO_PIN_1
#define LCD_G6_GPIO_Port GPIOK
#define LCD_G7_Pin GPIO_PIN_2
#define LCD_G7_GPIO_Port GPIOK
#define ARDUINO_PWM_D10_Pin GPIO_PIN_8
#define ARDUINO_PWM_D10_GPIO_Port GPIOA
#define OSC_25M_Pin GPIO_PIN_0
#define OSC_25M_GPIO_Port GPIOH
#define FMC_A2_Pin GPIO_PIN_2
#define FMC_A2_GPIO_Port GPIOF
#define LCD_INT_Pin GPIO_PIN_13
#define LCD_INT_GPIO_Port GPIOI
#define LCD_R0_Pin GPIO_PIN_15
#define LCD_R0_GPIO_Port GPIOI
#define LCD_G4_Pin GPIO_PIN_11
#define LCD_G4_GPIO_Port GPIOJ
#define LCD_G5_Pin GPIO_PIN_0
#define LCD_G5_GPIO_Port GPIOK
#define ARDUINO_RX_D0_Pin GPIO_PIN_7
#define ARDUINO_RX_D0_GPIO_Port GPIOC
#define FMC_A3_Pin GPIO_PIN_3
#define FMC_A3_GPIO_Port GPIOF
#define LCD_CLK_Pin GPIO_PIN_14
#define LCD_CLK_GPIO_Port GPIOI
#define ULPI_NXT_Pin GPIO_PIN_4
#define ULPI_NXT_GPIO_Port GPIOH
#define LCD_G1_Pin GPIO_PIN_8
#define LCD_G1_GPIO_Port GPIOJ
#define LCD_G3_Pin GPIO_PIN_10
#define LCD_G3_GPIO_Port GPIOJ
#define FMC_SDCLK_Pin GPIO_PIN_8
#define FMC_SDCLK_GPIO_Port GPIOG
#define ARDUINO_TX_D1_Pin GPIO_PIN_6
#define ARDUINO_TX_D1_GPIO_Port GPIOC
#define FMC_A4_Pin GPIO_PIN_4
#define FMC_A4_GPIO_Port GPIOF
#define FMC_SDNME_Pin GPIO_PIN_5
#define FMC_SDNME_GPIO_Port GPIOH
#define FMC_SDNE0_Pin GPIO_PIN_3
#define FMC_SDNE0_GPIO_Port GPIOH
#define LCD_G0_Pin GPIO_PIN_7
#define LCD_G0_GPIO_Port GPIOJ
#define LCD_G2_Pin GPIO_PIN_9
#define LCD_G2_GPIO_Port GPIOJ
#define BUZZ_Pin GPIO_PIN_7
#define BUZZ_GPIO_Port GPIOG
#define RS485_DIR_Pin GPIO_PIN_6
#define RS485_DIR_GPIO_Port GPIOG
#define ARDUINO_A4_Pin GPIO_PIN_7
#define ARDUINO_A4_GPIO_Port GPIOF
#define ARDUINO_A5_Pin GPIO_PIN_6
#define ARDUINO_A5_GPIO_Port GPIOF
#define FMC_A5_Pin GPIO_PIN_5
#define FMC_A5_GPIO_Port GPIOF
#define NC2_Pin GPIO_PIN_2
#define NC2_GPIO_Port GPIOH
#define LCD_R7_Pin GPIO_PIN_6
#define LCD_R7_GPIO_Port GPIOJ
#define FMC_D1_Pin GPIO_PIN_15
#define FMC_D1_GPIO_Port GPIOD
#define ULPI_D6_Pin GPIO_PIN_13
#define ULPI_D6_GPIO_Port GPIOB
#define FMC_D15_Pin GPIO_PIN_10
#define FMC_D15_GPIO_Port GPIOD
#define ARDUINO_A1_Pin GPIO_PIN_10
#define ARDUINO_A1_GPIO_Port GPIOF
#define ARDUINO_A2_Pin GPIO_PIN_9
#define ARDUINO_A2_GPIO_Port GPIOF
#define ARDUINO_A3_Pin GPIO_PIN_8
#define ARDUINO_A3_GPIO_Port GPIOF
#define FMC_SDCKE0_Pin GPIO_PIN_3
#define FMC_SDCKE0_GPIO_Port GPIOC
#define FMC_D0_Pin GPIO_PIN_14
#define FMC_D0_GPIO_Port GPIOD
#define ULPI_D5_Pin GPIO_PIN_12
#define ULPI_D5_GPIO_Port GPIOB
#define FMC_D14_Pin GPIO_PIN_9
#define FMC_D14_GPIO_Port GPIOD
#define FMC_D13_Pin GPIO_PIN_8
#define FMC_D13_GPIO_Port GPIOD
#define ULPI_STP_Pin GPIO_PIN_0
#define ULPI_STP_GPIO_Port GPIOC
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define ULPI_DIR_Pin GPIO_PIN_2
#define ULPI_DIR_GPIO_Port GPIOC
#define FMC_A6_Pin GPIO_PIN_12
#define FMC_A6_GPIO_Port GPIOF
#define FMC_A11_Pin GPIO_PIN_1
#define FMC_A11_GPIO_Port GPIOG
#define FMC_A9_Pin GPIO_PIN_15
#define FMC_A9_GPIO_Port GPIOF
#define LCD_R5_Pin GPIO_PIN_4
#define LCD_R5_GPIO_Port GPIOJ
#define QSPI_D1_Pin GPIO_PIN_12
#define QSPI_D1_GPIO_Port GPIOD
#define QSPI_D3_Pin GPIO_PIN_13
#define QSPI_D3_GPIO_Port GPIOD
#define EXT_RST_Pin GPIO_PIN_3
#define EXT_RST_GPIO_Port GPIOG
#define RMII_RXER_Pin GPIO_PIN_2
#define RMII_RXER_GPIO_Port GPIOG
#define LCD_R6_Pin GPIO_PIN_5
#define LCD_R6_GPIO_Port GPIOJ
#define DCMI_D3_Pin GPIO_PIN_12
#define DCMI_D3_GPIO_Port GPIOH
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define ARDUINO_A0_Pin GPIO_PIN_0
#define ARDUINO_A0_GPIO_Port GPIOA
#define DCMI_HSYNC_Pin GPIO_PIN_4
#define DCMI_HSYNC_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define FMC_A7_Pin GPIO_PIN_13
#define FMC_A7_GPIO_Port GPIOF
#define FMC_A10_Pin GPIO_PIN_0
#define FMC_A10_GPIO_Port GPIOG
#define LCD_R4_Pin GPIO_PIN_3
#define LCD_R4_GPIO_Port GPIOJ
#define FMC_D5_Pin GPIO_PIN_8
#define FMC_D5_GPIO_Port GPIOE
#define QSPI_D0_Pin GPIO_PIN_11
#define QSPI_D0_GPIO_Port GPIOD
#define FMC_BA1_Pin GPIO_PIN_5
#define FMC_BA1_GPIO_Port GPIOG
#define FMC_BA0_Pin GPIO_PIN_4
#define FMC_BA0_GPIO_Port GPIOG
#define LCD_SCL_Pin GPIO_PIN_7
#define LCD_SCL_GPIO_Port GPIOH
#define DCMI_D0_Pin GPIO_PIN_9
#define DCMI_D0_GPIO_Port GPIOH
#define DCMI_D2_Pin GPIO_PIN_11
#define DCMI_D2_GPIO_Port GPIOH
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define ULPI_CLK_Pin GPIO_PIN_5
#define ULPI_CLK_GPIO_Port GPIOA
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define FMC_A8_Pin GPIO_PIN_14
#define FMC_A8_GPIO_Port GPIOF
#define LCD_R3_Pin GPIO_PIN_2
#define LCD_R3_GPIO_Port GPIOJ
#define FMC_SDNRAS_Pin GPIO_PIN_11
#define FMC_SDNRAS_GPIO_Port GPIOF
#define FMC_D6_Pin GPIO_PIN_9
#define FMC_D6_GPIO_Port GPIOE
#define FMC_D8_Pin GPIO_PIN_11
#define FMC_D8_GPIO_Port GPIOE
#define FMC_D11_Pin GPIO_PIN_14
#define FMC_D11_GPIO_Port GPIOE
#define ULPI_D3_Pin GPIO_PIN_10
#define ULPI_D3_GPIO_Port GPIOB
#define ARDUINO_PWM_D6_Pin GPIO_PIN_6
#define ARDUINO_PWM_D6_GPIO_Port GPIOH
#define LCD_SDA_Pin GPIO_PIN_8
#define LCD_SDA_GPIO_Port GPIOH
#define DCMI_D1_Pin GPIO_PIN_10
#define DCMI_D1_GPIO_Port GPIOH
#define ULPI_D0_Pin GPIO_PIN_3
#define ULPI_D0_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define ULPI_D2_Pin GPIO_PIN_1
#define ULPI_D2_GPIO_Port GPIOB
#define ULPI_D1_Pin GPIO_PIN_0
#define ULPI_D1_GPIO_Port GPIOB
#define LCD_R1_Pin GPIO_PIN_0
#define LCD_R1_GPIO_Port GPIOJ
#define LCD_R2_Pin GPIO_PIN_1
#define LCD_R2_GPIO_Port GPIOJ
#define FMC_D4_Pin GPIO_PIN_7
#define FMC_D4_GPIO_Port GPIOE
#define FMC_D7_Pin GPIO_PIN_10
#define FMC_D7_GPIO_Port GPIOE
#define FMC_D9_Pin GPIO_PIN_12
#define FMC_D9_GPIO_Port GPIOE
#define FMC_D12_Pin GPIO_PIN_15
#define FMC_D12_GPIO_Port GPIOE
#define FMC_D10_Pin GPIO_PIN_13
#define FMC_D10_GPIO_Port GPIOE
#define ULPI_D4_Pin GPIO_PIN_11
#define ULPI_D4_GPIO_Port GPIOB
#define ARDUINO_MISO_D12_Pin GPIO_PIN_14
#define ARDUINO_MISO_D12_GPIO_Port GPIOB
#define ARDUINO_MOSI_PWM_D11_Pin GPIO_PIN_15
#define ARDUINO_MOSI_PWM_D11_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
// USB media codes
#define USB_HID_SCAN_NEXT 0x01
#define USB_HID_SCAN_PREV 0x02
#define USB_HID_STOP 0x04
#define USB_HID_EJECT 0x08
#define USB_HID_PAUSE 0x10
#define USB_HID_MUTE 0x20
#define USB_HID_VOL_UP 0x40
#define USB_HID_VOL_DEC 0x80

// USB keyboard codes
#define USB_HID_MODIFIER_LEFT_CTRL 0x01
#define USB_HID_MODIFIER_LEFT_SHIFT 0x02
#define USB_HID_MODIFIER_LEFT_ALT 0x04
#define USB_HID_MODIFIER_LEFT_GUI 0x08 // (Win/Apple/Meta)
#define USB_HID_MODIFIER_RIGHT_CTRL 0x10
#define USB_HID_MODIFIER_RIGHT_SHIFT 0x20
#define USB_HID_MODIFIER_RIGHT_ALT 0x40
#define USB_HID_MODIFIER_RIGHT_GUI 0x80
#define USB_HID_KEY_A 0x04          // Keyboard a and A
#define USB_HID_KEY_B 0x05          // Keyboard b and B
#define USB_HID_KEY_C 0x06          // Keyboard c and C
#define USB_HID_KEY_D 0x07          // Keyboard d and D
#define USB_HID_KEY_E 0x08          // Keyboard e and E
#define USB_HID_KEY_F 0x09          // Keyboard f and F
#define USB_HID_KEY_G 0x0a          // Keyboard g and G
#define USB_HID_KEY_H 0x0b          // Keyboard h and H
#define USB_HID_KEY_I 0x0c          // Keyboard i and I
#define USB_HID_KEY_J 0x0d          // Keyboard j and J
#define USB_HID_KEY_K 0x0e          // Keyboard k and K
#define USB_HID_KEY_L 0x0f          // Keyboard l and L
#define USB_HID_KEY_M 0x10          // Keyboard m and M
#define USB_HID_KEY_N 0x11          // Keyboard n and N
#define USB_HID_KEY_O 0x12          // Keyboard o and O
#define USB_HID_KEY_P 0x13          // Keyboard p and P
#define USB_HID_KEY_Q 0x14          // Keyboard q and Q
#define USB_HID_KEY_R 0x15          // Keyboard r and R
#define USB_HID_KEY_S 0x16          // Keyboard s and S
#define USB_HID_KEY_T 0x17          // Keyboard t and T
#define USB_HID_KEY_U 0x18          // Keyboard u and U
#define USB_HID_KEY_V 0x19          // Keyboard v and V
#define USB_HID_KEY_W 0x1a          // Keyboard w and W
#define USB_HID_KEY_X 0x1b          // Keyboard x and X
#define USB_HID_KEY_Y 0x1c          // Keyboard y and Y
#define USB_HID_KEY_Z 0x1d          // Keyboard z and Z
#define USB_HID_KEY_1 0x1e          // Keyboard 1 and !
#define USB_HID_KEY_2 0x1f          // Keyboard 2 and @
#define USB_HID_KEY_3 0x20          // Keyboard 3 and #
#define USB_HID_KEY_4 0x21          // Keyboard 4 and $
#define USB_HID_KEY_5 0x22          // Keyboard 5 and %
#define USB_HID_KEY_6 0x23          // Keyboard 6 and ^
#define USB_HID_KEY_7 0x24          // Keyboard 7 and &
#define USB_HID_KEY_8 0x25          // Keyboard 8 and *
#define USB_HID_KEY_9 0x26          // Keyboard 9 and (
#define USB_HID_KEY_0 0x27          // Keyboard 0 and )
#define USB_HID_KEY_ENTER 0x28      // Keyboard Return (ENTER)
#define USB_HID_KEY_ESC 0x29        // Keyboard ESCAPE
#define USB_HID_KEY_BACKSPACE 0x2a  // Keyboard DELETE (Backspace)
#define USB_HID_KEY_TAB 0x2b        // Keyboard Tab
#define USB_HID_KEY_SPACE 0x2c      // Keyboard Spacebar
#define USB_HID_KEY_MINUS 0x2d      // Keyboard - and _
#define USB_HID_KEY_EQUAL 0x2e      // Keyboard = and +
#define USB_HID_KEY_LEFTBRACE 0x2f  // Keyboard [ and {
#define USB_HID_KEY_RIGHTBRACE 0x30 // Keyboard ] and }
#define USB_HID_KEY_BACKSLASH 0x31  // Keyboard \ and |
#define USB_HID_KEY_HASHTILDE 0x32  // Keyboard Non-US # and ~
#define USB_HID_KEY_SEMICOLON 0x33  // Keyboard ; and :
#define USB_HID_KEY_APOSTROPHE 0x34 // Keyboard ' and "
#define USB_HID_KEY_GRAVE 0x35      // Keyboard ` and ~
#define USB_HID_KEY_COMMA 0x36      // Keyboard , and <
#define USB_HID_KEY_DOT 0x37        // Keyboard . and >
#define USB_HID_KEY_SLASH 0x38      // Keyboard / and ?
#define USB_HID_KEY_CAPSLOCK 0x39   // Keyboard Caps Lock
#define USB_HID_KEY_F1 0x3a         // Keyboard F1
#define USB_HID_KEY_F2 0x3b         // Keyboard F2
#define USB_HID_KEY_F3 0x3c         // Keyboard F3
#define USB_HID_KEY_F4 0x3d         // Keyboard F4
#define USB_HID_KEY_F5 0x3e         // Keyboard F5
#define USB_HID_KEY_F6 0x3f         // Keyboard F6
#define USB_HID_KEY_F7 0x40         // Keyboard F7
#define USB_HID_KEY_F8 0x41         // Keyboard F8
#define USB_HID_KEY_F9 0x42         // Keyboard F9
#define USB_HID_KEY_F10 0x43        // Keyboard F10
#define USB_HID_KEY_F11 0x44        // Keyboard F11
#define USB_HID_KEY_F12 0x45        // Keyboard F12
#define USB_HID_KEY_SYSRQ 0x46      // Keyboard Print Screen
#define USB_HID_KEY_SCROLLLOCK 0x47 // Keyboard Scroll Lock
#define USB_HID_KEY_PAUSE 0x48      // Keyboard Pause
#define USB_HID_KEY_INSERT 0x49     // Keyboard Insert
#define USB_HID_KEY_HOME 0x4a       // Keyboard Home
#define USB_HID_KEY_PAGEUP 0x4b     // Keyboard Page Up
#define USB_HID_KEY_DELETE 0x4c     // Keyboard Delete Forward
#define USB_HID_KEY_END 0x4d        // Keyboard End
#define USB_HID_KEY_PAGEDOWN 0x4e   // Keyboard Page Down
#define USB_HID_KEY_RIGHT 0x4f      // Keyboard Right Arrow
#define USB_HID_KEY_LEFT 0x50       // Keyboard Left Arrow
#define USB_HID_KEY_DOWN 0x51       // Keyboard Down Arrow
#define USB_HID_KEY_UP 0x52         // Keyboard Up Arrow
/*
as the macro's name says:
the clock initialization in LCD BSP overrides & destroys
working CubeMX clock set-up for USB
by setting it to nonzero we rely on CubeMX clock settings for LCD
*/
#define HACK_DO_NOT_INITIALIZE_LCD_CLK_IN_BSP 1

// The LED - it's on the bottom side of the board
#define LD1_ON HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_SET);
#define LD1_OFF HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET);
#define LD1_TOGGLE HAL_GPIO_TogglePin(GPIOI, GPIO_PIN_1);

// do not start LwIP - takes more time to initialize
#define CFG_DISABLE_LWIP 1

  /* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
