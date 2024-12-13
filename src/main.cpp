#include <Arduino.h>
int LG1 = 23;
int LG2 = 19;
int LG3 = 18;
int LG4 = 5;
int LG5 = 17;
int LG6 = 16;
int LG7 = 4;
int LG8 = 0;
int potPin = 36;
void setup(){
    pinMode (LG1,OUTPUT);
    pinMode (LG2,OUTPUT);
    pinMode (LG3,OUTPUT);
    pinMode (LG4,OUTPUT);
    pinMode (LG5,OUTPUT);
    pinMode (LG6,OUTPUT);
    pinMode (LG7,OUTPUT);
    pinMode (LG8,OUTPUT);
}
void loop() {
    int potValue = analogRead(potPin); 
    int range = map(potValue, 0, 4095, 0, 4000); 

    digitalWrite(LG1, LOW);
    digitalWrite(LG2, LOW);
    digitalWrite(LG3, LOW);
    digitalWrite(LG4, LOW);
    digitalWrite(LG5, LOW);
    digitalWrite(LG6, LOW);
    digitalWrite(LG7, LOW);
    digitalWrite(LG8, LOW);

    if (range >= 0 && range < 500) {
        digitalWrite(LG1, HIGH);
    }
    else if (range >= 500 && range < 1000) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
    }
    else if (range >= 1000 && range < 1500) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
    }
    else if (range >= 1500 && range < 2000) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
        digitalWrite(LG4, HIGH);
    }
    else if (range >= 2000 && range < 2500) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
        digitalWrite(LG4, HIGH);
        digitalWrite(LG5, HIGH);
    }
    else if (range >= 2500 && range < 3000) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
        digitalWrite(LG4, HIGH);
        digitalWrite(LG5, HIGH);
        digitalWrite(LG6, HIGH);
    }
    else if (range >= 3000 && range < 3500) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
        digitalWrite(LG4, HIGH);
        digitalWrite(LG5, HIGH);
        digitalWrite(LG6, HIGH);
        digitalWrite(LG7, HIGH);
    }
    else if (range >= 3500 && range <= 4000) {
        digitalWrite(LG1, HIGH);
        digitalWrite(LG2, HIGH);
        digitalWrite(LG3, HIGH);
        digitalWrite(LG4, HIGH);
        digitalWrite(LG5, HIGH);
        digitalWrite(LG6, HIGH);
        digitalWrite(LG7, HIGH);
        digitalWrite(LG8, HIGH);
    }
    delay(10); 
}