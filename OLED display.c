#include <U8g2lib.h>

U8G2_SH1106_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ 22, /* data=*/ 21, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB14_tr);
  u8g2.drawStr(0, 20, "Hello!");
  u8g2.setFont(u8g2_font_6x10_tr);
  u8g2.drawStr(0, 40, "I am Rayhan");
  u8g2.sendBuffer();
  delay(1000);
}
