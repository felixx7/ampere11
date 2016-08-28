#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int pinArray[ ] = {2,3,4,5,6,7};
int count = 0;
int timer = 100;



void setup() {

  for (count=0;count<6;count++){
      pinMode(pinArray[count],OUTPUT);
    }
}

void loop() {

  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight(); 
  lcd.setCursor(0,0);
  lcd.print("Harap");
  lcd.setCursor(1,1);
  lcd.print("Menepi!");
  /*lcd.setCursor(0,2);
  lcd.print("Arduino LCM IIC 2004");
  lcd.setCursor(2,3);
  lcd.print("Power By Ec-yuan!");*/
  
    for (count=0;count<6;count++){
      digitalWrite(pinArray[count],HIGH);
      delay(timer);
      digitalWrite(pinArray[count],LOW);
      delay(timer);
    }
      for (count=5;count>=0;count--){
      digitalWrite(pinArray[count],HIGH);
      delay(timer);
      digitalWrite(pinArray[count],LOW);
      delay(timer);
    }


  

}
