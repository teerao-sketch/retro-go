#pragma once

#define CONFIG_IDF_TARGET_ESP32S3 1
#define RG_TARGET_NAME "ESP32S3-CUSTOM"

// 📺 1. ตั้งค่าหน้าจอ ILI9341 (บัส SPI ชุดที่ 1)
#define CONFIG_HW_LCD_TYPE_ILI9341      1  // บังคับเลือกชิปหน้าจอเป็น ILI9341
#define CONFIG_HW_LCD_WIDTH             320
#define CONFIG_HW_LCD_HEIGHT            240
#define CONFIG_HW_LCD_SPEED_MHZ         20  // ลดความเร็วเหลือ 20MHz ป้องกันสัญญาณล้มจนจอขาวค้าง
#define CONFIG_HW_LCD_CLK               12
#define CONFIG_HW_LCD_MOSI              11
#define CONFIG_HW_LCD_MISO              -1  
#define CONFIG_HW_LCD_CS                10
#define CONFIG_HW_LCD_DC                13
#define CONFIG_HW_LCD_RESET             14
#define CONFIG_HW_LCD_BL                -1  // ต่อตรงไฟเลี้ยง 3.3V

// 💾 2. ตั้งค่าโมดูล SD Card (แยกพินออกบัส SPI ชุดที่ 2)
#define CONFIG_HW_SD_FS_FAT             1
#define CONFIG_HW_SD_CS                 2
#define CONFIG_HW_SD_MOSI               3
#define CONFIG_HW_SD_MISO               8
#define CONFIG_HW_SD_CLK                9

// 🔊 3. ตั้งค่าระบบเสียง I2S สำหรับ MAX98357A
#define CONFIG_HW_AUDIO_I2S             1
#define CONFIG_HW_AUDIO_I2S_INTERNAL    0  
#define CONFIG_HW_AUDIO_I2S_DAC_MAX98357A 1
#define CONFIG_HW_I2S_BCLK              41
#define CONFIG_HW_I2S_LRCK              40
#define CONFIG_HW_I2S_DATA              42

// 🕹️ 4. ตั้งค่าปุ่มกดควบคุมครบชุด 8 ปุ่ม (Active Low)
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
