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
// put your main code here, to run repeatedly:
        // send data only when you receive data:
        /* 1 y 2: aumentar y disminuir 5 grados base 
         * 3 y 4: aumentar y disminuir 5 grados vertical 
         * 5 y 6: aumentar y disminuir 5 grados horizontal
         * 7 y 8: aumentar y disminuir 5 grados pinza 
        */
        base = servoB.read();
        hori = servoH.read();
        verti = servoV.read();
        pinz = servoP.read();
        if (Serial.available() >0) {
                // read the incoming byte:
                entrada = Serial.read();                
                
                if (entrada == 49) {
                // mas 5 base
                mover_Base(base+10);
                Serial.print("B: ");
                Serial.println(servoB.read());
              }
              
                if (entrada == 50) {
                // mover mas 5 grados base
                mover_Base(base-10);
                Serial.print("B: ");
                Serial.println(servoB.read());
              }
              
                if (entrada == 52) {
                // mas 5 vertical
                mover_Vertical(verti+15);
                Serial.print("V: ");
                Serial.println(servoV.read());
              }
                if (entrada == 51) {
                // -5  vertical
                mover_Vertical(verti-15);
                Serial.print("V: ");
                Serial.println(servoV.read());
              }
                if (entrada == 53) {
                // +5 horizontal
                mover_Horizontal(hori+10);
                Serial.print("H: ");
                Serial.println(servoH.read());
              }
                if (entrada == 54) {
                // -5 horizontal
                mover_Horizontal(hori-10);
                Serial.print("H: ");
                Serial.println(servoH.read());
              }
                if (entrada == 55) {
                //+5 pinza
                mover_Pinza(pinz+10);
                Serial.print("P: ");
                Serial.println(servoP.read());
              }
                if (entrada == 56) {
                // -5 pinza
                mover_Pinza(pinz-10);
                Serial.print("P: ");
                Serial.println(servoP.read());
              }
              
        }
             
             
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
