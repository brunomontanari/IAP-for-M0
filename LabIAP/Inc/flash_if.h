/**
  ******************************************************************************
  * @file    IAP_Main/Inc/flash_if.h 
  * @author  MCD Application Team
  * @version 1.0.0
  * @date    8-April-2015
  * @brief   This file provides all the headers of the flash_if functions.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FLASH_IF_H
#define __FLASH_IF_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* Base address of the Flash sectors */
#define ADDR_FLASH_PAGE_0     ((uint32_t)0x08000000) /* Base @ of Page 0, 1 Kbyte*/
#define ADDR_FLASH_PAGE_1     ((uint32_t)ADDR_FLASH_PAGE_0+ FLASH_PAGE_STEP) /* Base @ of Page 1, 1 Kbyte */
#define ADDR_FLASH_PAGE_2     ((uint32_t)ADDR_FLASH_PAGE_1+ FLASH_PAGE_STEP) /* Base @ of Page 2, 1 Kbyte */
#define ADDR_FLASH_PAGE_3     ((uint32_t)ADDR_FLASH_PAGE_2+ FLASH_PAGE_STEP) /* Base @ of Page 3, 1 Kbyte */
#define ADDR_FLASH_PAGE_4     ((uint32_t)ADDR_FLASH_PAGE_3+ FLASH_PAGE_STEP) /* Base @ of Page 4, 1 Kbyte */
#define ADDR_FLASH_PAGE_5     ((uint32_t)ADDR_FLASH_PAGE_4+ FLASH_PAGE_STEP) /* Base @ of Page 5, 1 Kbyte */
#define ADDR_FLASH_PAGE_6     ((uint32_t)ADDR_FLASH_PAGE_5+ FLASH_PAGE_STEP) /* Base @ of Page 6, 1 Kbyte */
#define ADDR_FLASH_PAGE_7     ((uint32_t)ADDR_FLASH_PAGE_6+ FLASH_PAGE_STEP) /* Base @ of Page 7, 1 Kbyte */
#define ADDR_FLASH_PAGE_8     ((uint32_t)ADDR_FLASH_PAGE_7+ FLASH_PAGE_STEP) /* Base @ of Page 8, 1 Kbyte */
#define ADDR_FLASH_PAGE_9     ((uint32_t)ADDR_FLASH_PAGE_8+ FLASH_PAGE_STEP) /* Base @ of Page 9, 1 Kbyte */
#define ADDR_FLASH_PAGE_10    ((uint32_t)ADDR_FLASH_PAGE_9+ FLASH_PAGE_STEP) /* Base @ of Page 10, 1 Kbyte */
#define ADDR_FLASH_PAGE_11    ((uint32_t)ADDR_FLASH_PAGE_10+ FLASH_PAGE_STEP) /* Base @ of Page 11, 1 Kbyte */
#define ADDR_FLASH_PAGE_12    ((uint32_t)ADDR_FLASH_PAGE_11+ FLASH_PAGE_STEP) /* Base @ of Page 12, 1 Kbyte */
#define ADDR_FLASH_PAGE_13    ((uint32_t)ADDR_FLASH_PAGE_12+ FLASH_PAGE_STEP) /* Base @ of Page 13, 1 Kbyte */
#define ADDR_FLASH_PAGE_14    ((uint32_t)ADDR_FLASH_PAGE_13+ FLASH_PAGE_STEP) /* Base @ of Page 14, 1 Kbyte */
#define ADDR_FLASH_PAGE_15    ((uint32_t)ADDR_FLASH_PAGE_14+ FLASH_PAGE_STEP) /* Base @ of Page 15, 1 Kbyte */
#define ADDR_FLASH_PAGE_16    ((uint32_t)ADDR_FLASH_PAGE_15+ FLASH_PAGE_STEP) /* Base @ of Page 16, 1 Kbyte */
#define ADDR_FLASH_PAGE_17    ((uint32_t)ADDR_FLASH_PAGE_16+ FLASH_PAGE_STEP) /* Base @ of Page 17, 1 Kbyte */
#define ADDR_FLASH_PAGE_18    ((uint32_t)ADDR_FLASH_PAGE_17+ FLASH_PAGE_STEP) /* Base @ of Page 18, 1 Kbyte */
#define ADDR_FLASH_PAGE_19    ((uint32_t)ADDR_FLASH_PAGE_18+ FLASH_PAGE_STEP) /* Base @ of Page 19, 1 Kbyte */
#define ADDR_FLASH_PAGE_20    ((uint32_t)ADDR_FLASH_PAGE_19+ FLASH_PAGE_STEP) /* Base @ of Page 20, 1 Kbyte */
#define ADDR_FLASH_PAGE_21    ((uint32_t)ADDR_FLASH_PAGE_20+ FLASH_PAGE_STEP) /* Base @ of Page 21, 1 Kbyte  */
#define ADDR_FLASH_PAGE_22    ((uint32_t)ADDR_FLASH_PAGE_21+ FLASH_PAGE_STEP) /* Base @ of Page 22, 1 Kbyte  */
#define ADDR_FLASH_PAGE_23    ((uint32_t)ADDR_FLASH_PAGE_22+ FLASH_PAGE_STEP) /* Base @ of Page 23, 1 Kbyte */
#define ADDR_FLASH_PAGE_24    ((uint32_t)ADDR_FLASH_PAGE_23+ FLASH_PAGE_STEP) /* Base @ of Page 24, 1 Kbyte */
#define ADDR_FLASH_PAGE_25    ((uint32_t)ADDR_FLASH_PAGE_24+ FLASH_PAGE_STEP) /* Base @ of Page 25, 1 Kbyte */
#define ADDR_FLASH_PAGE_26    ((uint32_t)ADDR_FLASH_PAGE_25+ FLASH_PAGE_STEP) /* Base @ of Page 26, 1 Kbyte */
#define ADDR_FLASH_PAGE_27    ((uint32_t)ADDR_FLASH_PAGE_26+ FLASH_PAGE_STEP) /* Base @ of Page 27, 1 Kbyte */
#define ADDR_FLASH_PAGE_28    ((uint32_t)ADDR_FLASH_PAGE_27+ FLASH_PAGE_STEP) /* Base @ of Page 28, 1 Kbyte */
#define ADDR_FLASH_PAGE_29    ((uint32_t)ADDR_FLASH_PAGE_28+ FLASH_PAGE_STEP) /* Base @ of Page 29, 1 Kbyte */
#define ADDR_FLASH_PAGE_30    ((uint32_t)ADDR_FLASH_PAGE_29+ FLASH_PAGE_STEP) /* Base @ of Page 30, 1 Kbyte */
#define ADDR_FLASH_PAGE_31    ((uint32_t)ADDR_FLASH_PAGE_30+ FLASH_PAGE_STEP) /* Base @ of Page 31, 1 Kbyte */
#define ADDR_FLASH_PAGE_32    ((uint32_t)ADDR_FLASH_PAGE_31+ FLASH_PAGE_STEP) /* Base @ of Page 0, 1 Kbyte*/
#define ADDR_FLASH_PAGE_33    ((uint32_t)ADDR_FLASH_PAGE_32+ FLASH_PAGE_STEP) /* Base @ of Page 1, 1 Kbyte */
#define ADDR_FLASH_PAGE_34    ((uint32_t)ADDR_FLASH_PAGE_33+ FLASH_PAGE_STEP) /* Base @ of Page 2, 1 Kbyte */
#define ADDR_FLASH_PAGE_35    ((uint32_t)ADDR_FLASH_PAGE_34+ FLASH_PAGE_STEP) /* Base @ of Page 3, 1 Kbyte */
#define ADDR_FLASH_PAGE_36     ((uint32_t)ADDR_FLASH_PAGE_35+ FLASH_PAGE_STEP) /* Base @ of Page 4, 1 Kbyte */
#define ADDR_FLASH_PAGE_37     ((uint32_t)ADDR_FLASH_PAGE_36+ FLASH_PAGE_STEP) /* Base @ of Page 5, 1 Kbyte */
#define ADDR_FLASH_PAGE_38     ((uint32_t)ADDR_FLASH_PAGE_37+ FLASH_PAGE_STEP) /* Base @ of Page 6, 1 Kbyte */
#define ADDR_FLASH_PAGE_39     ((uint32_t)ADDR_FLASH_PAGE_38+ FLASH_PAGE_STEP) /* Base @ of Page 7, 1 Kbyte */
#define ADDR_FLASH_PAGE_40     ((uint32_t)ADDR_FLASH_PAGE_39+ FLASH_PAGE_STEP) /* Base @ of Page 8, 1 Kbyte */
#define ADDR_FLASH_PAGE_41     ((uint32_t)ADDR_FLASH_PAGE_40+ FLASH_PAGE_STEP) /* Base @ of Page 9, 1 Kbyte */
#define ADDR_FLASH_PAGE_42    ((uint32_t)ADDR_FLASH_PAGE_41+ FLASH_PAGE_STEP) /* Base @ of Page 10, 1 Kbyte */
#define ADDR_FLASH_PAGE_43    ((uint32_t)ADDR_FLASH_PAGE_42+ FLASH_PAGE_STEP) /* Base @ of Page 11, 1 Kbyte */
#define ADDR_FLASH_PAGE_44    ((uint32_t)ADDR_FLASH_PAGE_43+ FLASH_PAGE_STEP) /* Base @ of Page 12, 1 Kbyte */
#define ADDR_FLASH_PAGE_45    ((uint32_t)ADDR_FLASH_PAGE_44+ FLASH_PAGE_STEP) /* Base @ of Page 13, 1 Kbyte */
#define ADDR_FLASH_PAGE_46    ((uint32_t)ADDR_FLASH_PAGE_45+ FLASH_PAGE_STEP) /* Base @ of Page 14, 1 Kbyte */
#define ADDR_FLASH_PAGE_47    ((uint32_t)ADDR_FLASH_PAGE_46+ FLASH_PAGE_STEP) /* Base @ of Page 15, 1 Kbyte */
#define ADDR_FLASH_PAGE_48    ((uint32_t)ADDR_FLASH_PAGE_47+ FLASH_PAGE_STEP) /* Base @ of Page 16, 1 Kbyte */
#define ADDR_FLASH_PAGE_49    ((uint32_t)ADDR_FLASH_PAGE_48+ FLASH_PAGE_STEP) /* Base @ of Page 17, 1 Kbyte */
#define ADDR_FLASH_PAGE_50    ((uint32_t)ADDR_FLASH_PAGE_49+ FLASH_PAGE_STEP) /* Base @ of Page 18, 1 Kbyte */
#define ADDR_FLASH_PAGE_51    ((uint32_t)ADDR_FLASH_PAGE_50+ FLASH_PAGE_STEP) /* Base @ of Page 19, 1 Kbyte */
#define ADDR_FLASH_PAGE_52    ((uint32_t)ADDR_FLASH_PAGE_51+ FLASH_PAGE_STEP) /* Base @ of Page 20, 1 Kbyte */
#define ADDR_FLASH_PAGE_53    ((uint32_t)ADDR_FLASH_PAGE_52+ FLASH_PAGE_STEP) /* Base @ of Page 21, 1 Kbyte  */
#define ADDR_FLASH_PAGE_54    ((uint32_t)ADDR_FLASH_PAGE_53+ FLASH_PAGE_STEP) /* Base @ of Page 22, 1 Kbyte  */
#define ADDR_FLASH_PAGE_55    ((uint32_t)ADDR_FLASH_PAGE_54+ FLASH_PAGE_STEP) /* Base @ of Page 23, 1 Kbyte */
#define ADDR_FLASH_PAGE_56    ((uint32_t)ADDR_FLASH_PAGE_55+ FLASH_PAGE_STEP) /* Base @ of Page 24, 1 Kbyte */
#define ADDR_FLASH_PAGE_57    ((uint32_t)ADDR_FLASH_PAGE_56+ FLASH_PAGE_STEP) /* Base @ of Page 25, 1 Kbyte */
#define ADDR_FLASH_PAGE_58    ((uint32_t)ADDR_FLASH_PAGE_57+ FLASH_PAGE_STEP) /* Base @ of Page 26, 1 Kbyte */
#define ADDR_FLASH_PAGE_59    ((uint32_t)ADDR_FLASH_PAGE_58+ FLASH_PAGE_STEP) /* Base @ of Page 27, 1 Kbyte */
#define ADDR_FLASH_PAGE_60    ((uint32_t)ADDR_FLASH_PAGE_59+ FLASH_PAGE_STEP) /* Base @ of Page 28, 1 Kbyte */
#define ADDR_FLASH_PAGE_61    ((uint32_t)ADDR_FLASH_PAGE_60+ FLASH_PAGE_STEP) /* Base @ of Page 29, 1 Kbyte */
#define ADDR_FLASH_PAGE_62    ((uint32_t)ADDR_FLASH_PAGE_61+ FLASH_PAGE_STEP) /* Base @ of Page 30, 1 Kbyte */
#define ADDR_FLASH_PAGE_63    ((uint32_t)ADDR_FLASH_PAGE_62+ FLASH_PAGE_STEP) /* Base @ of Page 31, 1 Kbyte */


/* Error code */
enum 
{
  FLASHIF_OK = 0,
  FLASHIF_ERASEKO,
  FLASHIF_WRITINGCTRL_ERROR,
  FLASHIF_WRITING_ERROR,
  FLASHIF_PROTECTION_ERRROR
};

/* protection type */  
enum{
  FLASHIF_PROTECTION_NONE         = 0,
  FLASHIF_PROTECTION_PCROPENABLED = 0x1,
  FLASHIF_PROTECTION_WRPENABLED   = 0x2,
  FLASHIF_PROTECTION_RDPENABLED   = 0x4,
};

/* protection update */
enum {
	FLASHIF_WRP_ENABLE,
	FLASHIF_WRP_DISABLE
};

/* Define the address from where user application will be loaded.
   Note: this area is reserved for the IAP code                  */
#define FLASH_PAGE_STEP         FLASH_PAGE_SIZE           /* Size of page : 1 Kbyte */
#define APPLICATION_ADDRESS     (uint32_t)0x08004000      /* Start user code address: ADDR_FLASH_PAGE_16 */

/* Notable Flash addresses */
#define USER_FLASH_END_ADDRESS        0x08010000

/* Define the user application size */
#define USER_FLASH_SIZE               ((uint32_t)0x00003000) /* Small default template application */

/* Define bitmap representing user flash area that could be write protected (check restricted to pages 8-39). */
#define FLASH_PAGE_TO_BE_PROTECTED (OB_WRP_PAGES8TO11|OB_WRP_PAGES12TO15|\
OB_WRP_PAGES16TO19|OB_WRP_PAGES20TO23|OB_WRP_PAGES24TO27|\
OB_WRP_PAGES28TO31|OB_WRP_PAGES32TO35|OB_WRP_PAGES36TO39|\
OB_WRP_PAGES40TO43|OB_WRP_PAGES56TO59|OB_WRP_PAGES60TO63)  


/* Exported macro ------------------------------------------------------------*/
/* ABSoulute value */
#define ABS_RETURN(x,y)               ((x) < (y)) ? ((y)-(x)) : ((x)-(y))

/* Get the number of sectors from where the user program will be loaded */
#define FLASH_SECTOR_NUMBER           ((uint32_t)(ABS_RETURN(APPLICATION_ADDRESS,FLASH_START_BANK1))>>12)

/* Compute the mask to test if the Flash memory, where the user program will be
  loaded, is write protected */
#define FLASH_PROTECTED_SECTORS       (~(uint32_t)((1 << FLASH_SECTOR_NUMBER) - 1))
/* Exported functions ------------------------------------------------------- */
void FLASH_If_Init(void);
uint32_t FLASH_If_Erase(uint32_t StartSector);
uint32_t FLASH_If_GetWriteProtectionStatus(void);
uint32_t FLASH_If_Write(uint32_t destination, uint32_t *p_source, uint32_t length);
uint32_t FLASH_If_WriteProtectionConfig(uint32_t modifier);

#endif  /* __FLASH_IF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
