#include <Adafruit_CircuitPlayground.h>

//make noise and the board will respond with sound and lights
//click the left button to make it stop. (it will play a few notes first)
//click the right button to make it go completely silent for a few seconds

bool leftButtonPressed;
bool rightButtonPressed;

float value, sensor;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
leftButtonPressed = CircuitPlayground.leftButton();
rightButtonPressed = CircuitPlayground.rightButton();

//press left button will make it sound 4 notes before going silent for a couple of seconds
 Serial.print("Left Button: ");
 if (leftButtonPressed) {
  CircuitPlayground.setPixelColor(0, 0xf3f8df);
  CircuitPlayground.setPixelColor(1, 0xdff8f3);
  CircuitPlayground.setPixelColor(2, 0xe7f8df);
  CircuitPlayground.setPixelColor(3, 0xf7eee7);
  CircuitPlayground.setPixelColor(4, 0xf9ecf4);
  
  CircuitPlayground.setPixelColor(5, 0xf3f8df);
  CircuitPlayground.setPixelColor(6, 0xdff8f3);
  CircuitPlayground.setPixelColor(7, 0xe7f8df);
  CircuitPlayground.setPixelColor(8, 0xf7eee7);
  CircuitPlayground.setPixelColor(9, 0xf9ecf4);
   delay(50);
   CircuitPlayground.playTone(450, 50);
   delay(10);
   CircuitPlayground.playTone(500, 50);
   delay(10);
   CircuitPlayground.playTone(470, 50);
   delay(10);
   CircuitPlayground.playTone(275, 1000);
   delay(10);
   CircuitPlayground.playTone(0, 1000);
 }

//make it go quiet for a few seconds
 Serial.print("Right Button: ");
 if (rightButtonPressed) {
  CircuitPlayground.setPixelColor(0, 0x282523);
  CircuitPlayground.setPixelColor(1, 0x282523);
  CircuitPlayground.setPixelColor(2, 0x282523);
  CircuitPlayground.setPixelColor(3, 0x282523);
  CircuitPlayground.setPixelColor(4, 0x282523);
  
  CircuitPlayground.setPixelColor(5, 0x282523);
  CircuitPlayground.setPixelColor(6, 0x282523);
  CircuitPlayground.setPixelColor(7, 0x282523);
  CircuitPlayground.setPixelColor(8, 0x282523);
  CircuitPlayground.setPixelColor(9, 0x282523);
  CircuitPlayground.playTone(0, 5000);
 }

 Serial.println();
  delay(100);

  //code for sound sensors below

  sensor = CircuitPlayground.soundSensor();

  sensor = CircuitPlayground.mic.soundPressureLevel(10);

  Serial.print("Sound Sensor SPL: ");
  Serial.println(sensor);

  Serial.print("Light Sensor: ");
  Serial.print("Sound Sensor: ");
  Serial.println(value);


  delay(90);

  //for the colored lights
  CircuitPlayground.clearPixels();

  //reacts to volume
  //in order loudest to quietest

  //purple/pink more than 100
  if (sensor > 100) {
  CircuitPlayground.setPixelColor(0, 0x9400d3);
  CircuitPlayground.setPixelColor(1, 0xc073ed);
  CircuitPlayground.setPixelColor(2, 0xd273ed);
  CircuitPlayground.setPixelColor(3, 0xe298ef);
  CircuitPlayground.setPixelColor(4, 0xef98e2);
  
  CircuitPlayground.setPixelColor(5, 0x9400d3);
  CircuitPlayground.setPixelColor(6, 0xef98c8);
  CircuitPlayground.setPixelColor(7, 0xed30a6);
  CircuitPlayground.setPixelColor(8, 0xed3079);
  CircuitPlayground.setPixelColor(9, 0xed3030);
 
  delay(500);
  
  CircuitPlayground.playTone(500, 50);  
  delay(10);
  CircuitPlayground.playTone(465, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);

  }

  //pink between 90 and 99
  if (sensor > 90) {
  CircuitPlayground.setPixelColor(0, 0xef98ac);
  CircuitPlayground.setPixelColor(1, 0xef98c8);
  CircuitPlayground.setPixelColor(2, 0xed30a6);
  CircuitPlayground.setPixelColor(3, 0xed3079);
  CircuitPlayground.setPixelColor(4, 0xed3030);
  
  CircuitPlayground.setPixelColor(5, 0xef98ac);
  CircuitPlayground.setPixelColor(6, 0xef98c8);
  CircuitPlayground.setPixelColor(7, 0xed30a6);
  CircuitPlayground.setPixelColor(8, 0xed3079);
  CircuitPlayground.setPixelColor(9, 0xed3030);
 
  delay(10);
  
  CircuitPlayground.playTone(375, 50);  
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(285, 50);
  delay(10);
  }

  //red between 83 and 89
  if (sensor > 83) {
  CircuitPlayground.setPixelColor(0, 0xf01818);
  CircuitPlayground.setPixelColor(1, 0xf03018);
  CircuitPlayground.setPixelColor(2, 0xf04a18);
  CircuitPlayground.setPixelColor(3, 0xf05f18);
  CircuitPlayground.setPixelColor(4, 0xf08218);
  
  CircuitPlayground.setPixelColor(5, 0xf01818);
  CircuitPlayground.setPixelColor(6, 0xf03018);
  CircuitPlayground.setPixelColor(7, 0xf04a18);
  CircuitPlayground.setPixelColor(8, 0xf05f18);
  CircuitPlayground.setPixelColor(9, 0xf08218);

  delay(50);

  CircuitPlayground.playTone(445, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(535, 50);
  delay(10);

  }

  //orange between 77 and 82
  if (sensor > 77) {
  CircuitPlayground.setPixelColor(0, 0xfb5314);
  CircuitPlayground.setPixelColor(1, 0xfbc714);
  CircuitPlayground.setPixelColor(2, 0xfbd514);
  CircuitPlayground.setPixelColor(3, 0xf9fac3);
  CircuitPlayground.setPixelColor(4, 0xfaebc3);
  
  CircuitPlayground.setPixelColor(5, 0xfb5314);
  CircuitPlayground.setPixelColor(6, 0xfbc714);
  CircuitPlayground.setPixelColor(7, 0xfbd514);
  CircuitPlayground.setPixelColor(8, 0xf9fac3);
  CircuitPlayground.setPixelColor(9, 0xfaebc3);
 
  delay(10);

  CircuitPlayground.playTone(405, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(485, 50);
  delay(10);
  CircuitPlayground.playTone(335, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  }

  //yellow/green between 72 and 76
  if (sensor > 72) {
  CircuitPlayground.setPixelColor(0, 0xfcf34d);
  CircuitPlayground.setPixelColor(1, 0xe6fb14);
  CircuitPlayground.setPixelColor(2, 0xd7f018);
  CircuitPlayground.setPixelColor(3, 0xbef018);
  CircuitPlayground.setPixelColor(4, 0x60fb14);
  
  CircuitPlayground.setPixelColor(5, 0xfcf34d);
  CircuitPlayground.setPixelColor(6, 0xe6fb14);
  CircuitPlayground.setPixelColor(7, 0xd7f018);
  CircuitPlayground.setPixelColor(8, 0xbef018);
  CircuitPlayground.setPixelColor(9, 0x60fb14);
 
  delay(0);
  
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(375, 50);
  delay(10);
  CircuitPlayground.playTone(365, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(405, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);

  }

  //blue between 68 and 71
  if (sensor > 68) {
  CircuitPlayground.setPixelColor(0, 0xc0eff1);
  CircuitPlayground.setPixelColor(1, 0x2aece3);
  CircuitPlayground.setPixelColor(2, 0x15eff8);
  CircuitPlayground.setPixelColor(3, 0x15acf8);
  CircuitPlayground.setPixelColor(4, 0x0069f6);
  
  CircuitPlayground.setPixelColor(5, 0xc0eff1);
  CircuitPlayground.setPixelColor(6, 0x2aece3);
  CircuitPlayground.setPixelColor(7, 0x15eff8);
  CircuitPlayground.setPixelColor(8, 0x15acf8);
  CircuitPlayground.setPixelColor(9, 0x0069f6);

  delay(0);
 
  CircuitPlayground.playTone(255, 50);
  delay(10);
  CircuitPlayground.playTone(225, 50);
  delay(10);
  CircuitPlayground.playTone(205, 50);
  delay(10);
  CircuitPlayground.playTone(355, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(375, 50);
  delay(10);
  CircuitPlayground.playTone(485, 50);
  
  }

  //other shades of blue between 64 and 67
  if (sensor > 64) {
  CircuitPlayground.setPixelColor(0, 0x2aecbc);
  CircuitPlayground.setPixelColor(1, 0x13c8ce);
  CircuitPlayground.setPixelColor(2, 0x14cfdd);
  CircuitPlayground.setPixelColor(3, 0x2aa8ec);
  CircuitPlayground.setPixelColor(4, 0x2a4bec);
  
  CircuitPlayground.setPixelColor(5, 0x2aecbc);
  CircuitPlayground.setPixelColor(6, 0x13c8ce);
  CircuitPlayground.setPixelColor(7, 0x14cfdd);
  CircuitPlayground.setPixelColor(8, 0x2aa8ec);
  CircuitPlayground.setPixelColor(9, 0x2a4bec);
  
  CircuitPlayground.playTone(285, 50);
  delay(10);
  CircuitPlayground.playTone(205, 50);
  delay(10);
  CircuitPlayground.playTone(405, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(385, 50);
  delay(10);
  CircuitPlayground.playTone(305, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(0);

  }

  //more other shades of blue between 59 and 63
  if (sensor > 59) {
  CircuitPlayground.setPixelColor(0, 0x2aecbc);
  CircuitPlayground.setPixelColor(1, 0x6d399a);
  CircuitPlayground.setPixelColor(2, 0x14cfdd);
  CircuitPlayground.setPixelColor(3, 0x2aa8ec);
  CircuitPlayground.setPixelColor(4, 0x99a78);
  
  CircuitPlayground.setPixelColor(5, 0x2aecbc);
  CircuitPlayground.setPixelColor(6, 0x6d399a);
  CircuitPlayground.setPixelColor(7, 0x14cfdd);
  CircuitPlayground.setPixelColor(8, 0x2aa8ec);
  CircuitPlayground.setPixelColor(9, 0x99a78);
  
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(195, 50);
  delay(10);
  CircuitPlayground.playTone(205, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(235, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(255, 50);
  delay(10);

  }

  //green/blue/purple under 59
  if (sensor < 59) {
  CircuitPlayground.setPixelColor(0, 0x406725);
  CircuitPlayground.setPixelColor(1, 0256742);
  CircuitPlayground.setPixelColor(2, 0x256761);
  CircuitPlayground.setPixelColor(3, 0x272567);
  CircuitPlayground.setPixelColor(4, 0x432567);
  
  CircuitPlayground.setPixelColor(5, 0x406725);
  CircuitPlayground.setPixelColor(6, 0256742);
  CircuitPlayground.setPixelColor(7, 0x256761);
  CircuitPlayground.setPixelColor(8, 0x272567);
  CircuitPlayground.setPixelColor(9, 0x432567);

  delay(0);

  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(165, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(165, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(10);
  CircuitPlayground.playTone(185, 50);
  delay(10);
  CircuitPlayground.playTone(105, 50);
  delay(0);
  }
  
}