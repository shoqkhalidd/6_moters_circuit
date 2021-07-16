#include <Servo.h>;
//right arm 
Servo ser01;//sholder
Servo ser02;//arm
Servo ser03;//wrist 
//left arm 
Servo ser04;//sholder
Servo ser05;//arm
Servo ser06;//wrist

int inipos=0;


void setup() {
 
  ser01.attach(9);
  ser02.attach(8);
  ser03.attach(10);
  ser04.attach(11);
  ser05.attach(12);
  ser06.attach(13);
 
  ser01.write(inipos);
  ser02.write(inipos);
  ser03.write(inipos);
  ser04.write(inipos);
  ser05.write(inipos);
  ser06.write(inipos);
  
  Serial.begin(9600);
  Serial.println("Please enter the number of the move you want");
  Serial.println("1 'Hello' move");
  Serial.println("2 'Bye' move");
  Serial.println("3 'Hug' move");

}

void loop() {
  
  if (Serial.available() > 0)
  {
    int input = Serial.read();
   
    if (input == '1')
    {
      ser01.write(180);
      ser02.write(0);
      ser03.write(0);
      delay(850);
      ser03.write(45);
      delay(850);
      ser03.write(0);
      delay(2500);
      
      ser01.write(inipos);
 	  ser02.write(inipos);
  	  ser03.write(inipos);
  	  ser04.write(inipos);
  	  ser05.write(inipos);
  	  ser06.write(inipos);
      
    }
    else if (input == '2')
    {
        
      ser01.write(180);
      ser02.write(90);
      ser03.write(40);
      delay(2500);
      
      ser01.write(inipos);
 	  ser02.write(inipos);
  	  ser03.write(inipos);
  	  ser04.write(inipos);
  	  ser05.write(inipos);
  	  ser06.write(inipos);
  
    }

    else if (input == '3')
    {
      
      ser01.write(45);
      ser02.write(180);
      ser03.write(90);
      
      ser04.write(45);
      ser05.write(180);
      ser06.write(90);
      
      delay(2500);
      
      ser01.write(inipos);
      ser02.write(inipos);
      ser03.write(inipos);
      ser04.write(inipos);
      ser05.write(inipos);
      ser06.write(inipos);

    }
  }
}
 
