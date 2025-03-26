#include <Servo.h>
int a1=3;
int a2=4;
int b1=5;
int b2=6;
//int c1 = 8;
//int c2 = 7;
char c;
//int count=1;
Servo myservo;

void setup() {
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);
//pinMode(c1,OUTPUT);
//pinMode(c2,OUTPUT);
  Serial.begin(9600);
  Serial.println("SERIAL COMMUNICATION");
 /*   digitalWrite(a1,0);
  digitalWrite(a2,0);
  digitalWrite(b1,0);
  digitalWrite(b2,0);*/
  myservo.attach(9);
  myservo.write(90);
}

void loop() {
   if(Serial.available()>0){
    c=Serial.read();
    delay(200);

      Serial.println(c);
  
  if(c=='6'){
  digitalWrite(a1,0);
  digitalWrite(a2,1);
  digitalWrite(b1,1);
  digitalWrite(b2,1);
  Serial.println("LEFT");
  }
 else if(c=='4'){
  digitalWrite(a1,1);
  digitalWrite(a2,1);
  digitalWrite(b1,0);
  digitalWrite(b2,1);
  Serial.println("RIGHT");}
  else if(c=='8'){
  digitalWrite(a1,1);
  digitalWrite(a2,0);
  digitalWrite(b1,1);
  digitalWrite(b2,0);
  Serial.println("reverse");}
  else if(c=='2'){
  digitalWrite(a1,0);
  digitalWrite(a2,1);
  digitalWrite(b1,0);
  digitalWrite(b2,1);
  Serial.println("forward");}
  else if(c=='5'){

    myservo.write(105);
    delay(70);
    myservo.write(120);
    delay(70);
    myservo.write(135);
    delay(70);
    myservo.write(150);
    delay(70);
    myservo.write(165);
    delay(70);
    myservo.write(180);
    delay(70);
    myservo.write(165);
    delay(70);
    myservo.write(150);
    delay(70);
    myservo.write(135);
    delay(70);
    myservo.write(120);
    delay(70);
    myservo.write(105);
    delay(70);
    myservo.write(90);
    delay(70);
    myservo.write(75);
    delay(70);
    myservo.write(60);
    delay(70);
    myservo.write(45);
    delay(70);
    myservo.write(30);
    delay(70);
    myservo.write(15);
    delay(70);
    myservo.write(0);
    delay(70);
    myservo.write(15);
    delay(70);
    myservo.write(30);
    delay(70);
    myservo.write(45);
    delay(70);
    myservo.write(60);
    delay(70);
    myservo.write(75);
    delay(70);
    myservo.write(90);
  }
 else {
  digitalWrite(a1,0);
  digitalWrite(a2,0);
  digitalWrite(b1,0);
  digitalWrite(b2,0);
  Serial.println("INVALID INPUT");}
  }


  delay(500);}
