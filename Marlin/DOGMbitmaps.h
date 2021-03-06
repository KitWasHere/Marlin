
#if MOTHERBOARD == 7         //Splash screen for Ultimaker
#define START_BMP_UM_WIDTH 	128	//Width in pixels
#define START_BMP_UM_HEIGHT 	64	//Height in pixels
#define START_BMP_UM_BYTEWIDTH 	16	//Width in bytes
const unsigned char start_bmp_um[1024] PROGMEM = { 
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xf0,0x00,0x07,0xc0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x78,0x00,0x1e,0x07,0xff,0xf8,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xe8,0x00,0x7a,0x07,0xff,0xf8,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xc8,0x00,0x72,0x03,0xff,0xf8,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xc8,0x00,0x72,0x00,0x03,0xf8,0x00,0x0f,0xe0,0x7f,0xf8,0x00,0xfc,0x00,
0x00,0x01,0xff,0xff,0xff,0x00,0x03,0xf8,0x00,0x0f,0xe0,0xff,0xfc,0x01,0xfe,0x00,
0x00,0x01,0xff,0xff,0xff,0xc0,0x03,0xf8,0x00,0x0f,0xe0,0xff,0xfc,0x01,0xfe,0x00,
0x00,0x03,0xf0,0x00,0x01,0xe0,0x03,0xf8,0x00,0x0f,0xe0,0x7f,0xfe,0x03,0xff,0x00,
0x00,0x07,0xe0,0x00,0x00,0xf0,0x03,0xf8,0x00,0x0f,0xe0,0x07,0xfe,0x03,0xff,0x00,
0x00,0x0f,0xc0,0x00,0x00,0x70,0x03,0xf8,0x00,0x0f,0xe0,0x0f,0xfe,0x03,0xff,0x80,
0x00,0x0f,0xc3,0xc0,0x38,0x70,0x03,0xf8,0x00,0x0f,0xe0,0x0f,0xff,0x07,0xff,0x80,
0x00,0x3f,0xc7,0xe0,0x7c,0x70,0x03,0xf8,0x00,0x0f,0xe0,0x0f,0xff,0x07,0xff,0x80,
0x01,0xff,0xc7,0xe0,0x7c,0x70,0x03,0xf8,0x00,0x0f,0xe0,0x1f,0xff,0x8f,0xff,0xc0,
0x03,0xe3,0xc7,0xe0,0x7c,0x78,0x03,0xf8,0x00,0x0f,0xe0,0x1f,0xff,0x8f,0xff,0xc0,
0x07,0xc1,0xc3,0xc0,0x38,0x7c,0x03,0xf8,0x00,0x0f,0xe0,0x3f,0xff,0x8f,0xff,0xe0,
0x07,0xc0,0xc0,0x00,0x00,0x7e,0x03,0xf8,0x00,0x0f,0xe0,0x3f,0xff,0xdf,0xff,0xe0,
0x07,0xe0,0xc0,0x00,0x00,0x7e,0x03,0xf8,0x00,0x0f,0xe0,0x3f,0x9f,0xff,0xcf,0xe0,
0x07,0xe0,0xc0,0x00,0x00,0x7e,0x03,0xf8,0x00,0x0f,0xe0,0x7f,0x9f,0xff,0xcf,0xf0,
0x07,0xe8,0xc0,0x00,0x00,0x7e,0x03,0xf8,0x00,0x0f,0xe0,0x7f,0x8f,0xff,0x8f,0xf0,
0x07,0xcc,0xc0,0x00,0x00,0x7e,0x03,0xf8,0x00,0x0f,0xe0,0x7f,0x0f,0xff,0x87,0xf0,
0x07,0xdc,0xc3,0xff,0xfc,0x7c,0x03,0xf8,0x00,0x0f,0xe0,0xff,0x0f,0xff,0x87,0xf8,
0x07,0xd9,0xc0,0x00,0x00,0x78,0x03,0xf8,0x00,0x0f,0xe0,0xff,0x07,0xff,0x07,0xf8,
0x03,0xc3,0xc0,0x00,0x00,0x70,0x03,0xf8,0x00,0x0f,0xe0,0xfe,0x07,0xff,0x03,0xf8,
0x03,0xff,0xc0,0x00,0x00,0x70,0x03,0xf8,0x00,0x0f,0xe1,0xfe,0x07,0xfe,0x03,0xfc,
0x01,0xff,0xe0,0x00,0x00,0x70,0x03,0xf8,0x00,0x0f,0xe1,0xfc,0x03,0xfe,0x01,0xfc,
0x00,0x1f,0xf0,0x00,0x00,0xe0,0x03,0xf8,0x00,0x0f,0xe1,0xfc,0x03,0xfe,0x01,0xfc,
0x00,0x0f,0xff,0xff,0xff,0xfe,0x03,0xfc,0x00,0x1f,0xe1,0xfc,0x01,0xfc,0x01,0xfc,
0x0f,0xff,0xff,0xff,0xff,0xff,0xc3,0xfc,0x00,0x1f,0xe1,0xf8,0x01,0xfc,0x00,0xfc,
0x7f,0xfc,0x00,0x00,0x00,0x07,0xf3,0xfe,0x00,0x3f,0xe0,0xf8,0x00,0xf8,0x00,0xf8,
0xff,0xf0,0x00,0x00,0x00,0x01,0xf9,0xff,0x80,0xff,0xe0,0x00,0x00,0x00,0x00,0x00,
0x83,0xc0,0x00,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,0xe0,0x00,0x00,0x00,0x00,0x00,
0xbb,0x80,0x00,0x00,0x00,0x00,0x3c,0xff,0xff,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,
0x7b,0x87,0xff,0xff,0xff,0xfc,0x3e,0x7f,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,
0xf3,0x8f,0xff,0xff,0xff,0xfe,0x36,0x3f,0xff,0xff,0xfc,0x00,0x00,0x00,0x00,0x00,
0xf3,0x8f,0xff,0xff,0xff,0xfe,0x33,0x0f,0xff,0xf9,0xfc,0x00,0x00,0x00,0x40,0x00,
0xc3,0x8f,0xff,0xff,0xff,0xfe,0x33,0x01,0xff,0xc0,0xf8,0x00,0x00,0x00,0x00,0x00,
0x83,0x8f,0xff,0xf8,0xff,0xfe,0x33,0x00,0x00,0x00,0x01,0xc8,0x9e,0x3c,0x4f,0x1e,
0x83,0x8f,0xff,0xc0,0x1f,0xfe,0x33,0x00,0x00,0x00,0x03,0x11,0x22,0x44,0x91,0x22,
0x07,0x8f,0xff,0xfd,0xff,0xfe,0x3f,0x00,0x00,0x00,0x02,0x11,0x22,0x44,0x91,0x22,
0xff,0x8f,0xf8,0xfc,0x07,0xfe,0x3e,0x00,0x00,0x00,0x02,0x11,0x22,0x44,0x91,0x62,
0xff,0x8f,0xff,0xfc,0x1f,0xfe,0x32,0x00,0x00,0x00,0x02,0x11,0x22,0x44,0x91,0x26,
0x07,0x8f,0xff,0xfd,0xff,0xfe,0x3e,0x00,0x00,0x00,0x04,0x1e,0x44,0x89,0x22,0x3c,
0xff,0x8f,0xff,0xb8,0xff,0xfe,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,
0x07,0x8f,0xf0,0x00,0x16,0xfe,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,
0xff,0x8f,0xff,0xb8,0xf7,0xfe,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x8f,0xff,0xfd,0xe7,0xfe,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0x8f,0xf8,0x00,0x00,0x7e,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x8f,0xff,0xfd,0xf3,0xfe,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0x8f,0xfe,0xfd,0xf7,0xfe,0x32,0x00,0xe1,0xc0,0x00,0x33,0x00,0x07,0x9c,0x00,
0x07,0x8f,0xf0,0x01,0xe1,0xfe,0x3e,0x00,0xe1,0xc0,0x00,0x33,0x00,0x03,0x08,0x00,
0xff,0x8f,0xfe,0xfd,0xff,0xfe,0x3f,0x00,0xa2,0xc0,0x00,0x30,0x00,0x01,0x90,0x00,
0xff,0x8f,0xff,0xfd,0xff,0xfe,0x33,0x80,0xb2,0xc7,0x9f,0x37,0x3f,0x81,0x93,0x80,
0xff,0x8f,0xff,0xc0,0x1f,0xfe,0x33,0x80,0xb2,0xc0,0xcd,0x33,0x19,0x81,0x90,0x80,
0xff,0x8f,0xff,0xff,0xff,0xfe,0x31,0xc0,0x9c,0xc1,0xcc,0x33,0x19,0x80,0xe0,0x80,
0x87,0x8f,0xff,0xff,0xff,0xfe,0x31,0xc0,0x9c,0xc6,0xcc,0x33,0x19,0x80,0xe0,0x80,
0x87,0x8f,0xff,0xff,0xff,0xfe,0x39,0xc0,0x88,0xcc,0xcc,0x33,0x19,0x80,0xc0,0x80,
0x07,0x8f,0xff,0xff,0xff,0xfe,0x39,0xc0,0xc9,0xc7,0xcc,0x33,0x19,0x80,0x41,0xc0,
0x03,0x80,0xff,0xf0,0x1f,0xf0,0x31,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x33,0x80,0x3f,0x80,0x07,0x80,0x33,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x33,0x80,0x00,0x00,0x00,0x00,0x37,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0f,0x80,0x00,0x00,0x00,0x00,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0f,0xc0,0x00,0x00,0x00,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
#else                        //Original splash screen
#define START_BMPWIDTH 	60	//Width in pixels
#define START_BMPHEIGHT 	64	//Height in pixels
#define START_BMPBYTEWIDTH 	8	//Width in bytes
const unsigned char start_bmp[574] PROGMEM = { //AVR-GCC, WinAVR
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x80,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x0F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFE,0x00,0x07,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF8,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0x83,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xF0,
0x80,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xF0,
0x88,0x7F,0xFF,0xFE,0x23,0xFF,0xFF,0xF0,
0x8C,0x70,0x38,0x0E,0x71,0x81,0xC0,0x70,
0x8C,0x60,0x38,0x0E,0x63,0x80,0xC0,0x30,
0x80,0xE3,0x19,0xC6,0x07,0xF8,0xC7,0x30,
0x80,0xE0,0x19,0xC6,0x03,0x80,0xC7,0x10,
0x8C,0x62,0x79,0xC6,0x63,0x9C,0xC7,0x30,
0x8C,0x63,0xF8,0xC6,0x71,0x18,0xC6,0x30,
0x8E,0x30,0x18,0x0E,0x71,0x80,0xC0,0x30,
0x9E,0x38,0x39,0x1E,0x79,0xC4,0xC4,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0
};
#endif

#define STATUS_SCREENWIDTH 		115	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0C,0x60,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x0E,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x0F,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x0F,0xA0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x07,0xA0,
0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x5E,0x07,0xA0,
0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x5F,0x0F,0xA0,
0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x4F,0x0F,0x20,
0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x47,0x0E,0x20,
0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x63,0x0C,0x60,
0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
};

#define STATUS_SCREENWIDTH 		115	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	15	//Width in bytes
const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xF8,0x60,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xF8,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xF0,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x01,0xA0,
0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x58,0x01,0xA0,
0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x40,0x60,0x20,
0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x40,0xF0,0x20,
0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x41,0xF8,0x20,
0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x61,0xF8,0x60,
0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00
};


