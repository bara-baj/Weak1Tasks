#include <Stepper.h>
Stepper stepper(25, 10, 9, 4, 3);

int button =  2; 
int pot    = A0;
int di     = 1;
void setup() {
  // put your setup code here, to run once:
stepper.setSpeed(4);
analogWrite(5,255);
analogWrite(6,255);
}

void loop() {
  // put your main code here, to run repeatedly:
stepper.step(di);

if (digitalRead(button)==true){
 di=-1;
  
  }
if (digitalRead(button)==false){di=1;}
}
