#include <Servo.h>

Servo servoP;
Servo servoV;
Servo servoB;
Servo servoH;

// pin5 es la base servo 3
// pin4 es extension vertical
//pin3 es pinza servo 1
//pin6 es extension horizontal
  
void setup() {
  // put your setup code here, to run once:
 
 
}

void loop() {

             
}

void mover_Base(int angulo){
    servoB.attach(5);
    servoB.write(angulo);
    delay(1000);
    servoB.detach();
  }
  
void mover_Vertical(int angulo){
    servoV.attach(4);
    servoV.write(angulo);
    delay(1000);
    servoV.detach();
  }
  
void mover_Horizontal(int angulo){
    servoH.attach(6);
    servoH.write(angulo);
    delay(1000);
    servoH.detach();
  }
  
void mover_Pinza(int angulo){
    servoP.attach(3);
    servoP.write(angulo);
    delay(1000);
    servoP.detach();
  }
