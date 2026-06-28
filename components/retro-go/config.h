#pragma once

#define CONFIG_IDF_TARGET_ESP32S3 1

// 📺 1. หน้าจอ ILI9341 / ST7789 (ปรับลดสปีดลงเหลือ 20MHz เพื่อแก้ปัญหาจอขาวโดยเฉพาะ)
#define CONFIG_HW_LCD_TYPE_ILI9341      1
#define CONFIG_HW_LCD_WIDTH             320
#define CONFIG_HW_LCD_HEIGHT            240
#define CONFIG_HW_LCD_SPEED_MHZ         20   // <--- ล็อกสปีดต่ำเพื่อความเสถียรของสายสัญญาณ
#define CONFIG_HW_LCD_CLK               12
#define CONFIG_HW_LCD_MOSI              11
#define CONFIG_HW_LCD_MISO              -1  
#define CONFIG_HW_LCD_CS                10
#define CONFIG_HW_LCD_DC                13
#define CONFIG_HW_LCD_RESET             14
#define CONFIG_HW_LCD_BL                -1  

// 💾 2. SD Card ภายนอก (แยกพินบัสต่ำปลอดภัยไร้แรมกวน)
#define CONFIG_HW_SD_FS_FAT             1
#define CONFIG_HW_SD_CS                 2
#define CONFIG_HW_SD_MOSI               3
#define CONFIG_HW_SD_MISO               8
#define CONFIG_HW_SD_CLK                9

// 🔊 3. เสียง I2S MAX98357A
#define CONFIG_HW_AUDIO_I2S             1
#define CONFIG_HW_AUDIO_I2S_INTERNAL    0  
#define CONFIG_HW_AUDIO_I2S_DAC_MAX98357A 1
#define CONFIG_HW_I2S_BCLK              41
#define CONFIG_HW_I2S_LRCK              40
#define CONFIG_HW_I2S_DATA              42

// 🕹️ 4. ปุ่มกดควบคุม 8 ปุ่ม (Active Low)
#define CONFIG_HW_BUTTON_GPIO           1
#define CONFIG_HW_BTN_UP                4   
#define CONFIG_HW_BTN_DOWN              5  
#define CONFIG_HW_BTN_LEFT              6
#define CONFIG_HW_BTN_RIGHT             7
#define CONFIG_HW_BTN_A                 15  
#define CONFIG_HW_BTN_B                 16
#define CONFIG_HW_BTN_SELECT            17
#define CONFIG_HW_BTN_START             18

#define CONFIG_HW_BTN_MENU              -1 
#define CONFIG_HW_BTN_VOLUME            -1
