# Bluetooth-Module-HC-05-Interfacing-with-Arduino-
Here we are basically Interfacing Bluetooth Module with Arduino.
Through Bluetooth Module we are going connect Android phone to Arduino through an Android application. 

## Components Required
>1.Bluethooth Module HC-05 

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Bluethooth%20Module%20HC-05.png" >

>2.Arduino UNO

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Arduino%20UNO.png" >

>3.Resisters(220 ohm - 9 pieces)

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Resisters%20220%20ohm.jpg" >

>4.Red LEDs(9 pieces)

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Red%20LED.jpg" >

>5.Jumper Wires

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Jumper%20Wires.jpg" >

>6.Laptop or computer 

<img src = "https://raw.githubusercontent.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/main/assets/Images/Laptop%20or%20computer%20.webp" >

>7.Android phone

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Android%20phone.jpg" >

## Circuit Diagram

<img src = "https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Connections.png" >

<img src ="https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/Circuit%20Diagram.png">

## My Circuit

<img src ="https://github.com/DhruvJain666/Bluetooth-Module-HC-05-Interfacing-with-Arduino-/blob/main/assets/Images/My%20Circuit.jpeg">

## Code
```c
int val;
String msg1="Enter a number from 1 to 9 to on the LED and a to i or A to I to off the LED";
String msg2="The Pin is already HIGH"; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=10;i>1;i--){
    pinMode(i,OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println(msg1);
   while(Serial.available()==0){
    
   }
    
    val=Serial.read();
    Serial.println(val-48);
    int val1=val-48;
    for(int i=0 , a=10;i<=10 && a>1;i++ && a--){
      if(val1==i){
        digitalWrite(a, HIGH);
      } 
    }   
    int val2=val-96;      //(a,b,c...)
    int val3=val-64;      //(A,B,C...)
    
    for(int i=0 , a=10;i<=10 && a>1;i++ && a--){
      if(val2==i){
        digitalWrite(a, LOW);
      } 
    }
      for(int i=0 , a=10;i<=10 && a>1;i++ && a--){
        if(val3==i){
          digitalWrite(a, LOW);
        } 
      }
}
```
## Precautions
- Remember to disconnect pin no 0 and 1 before uploding the code on Arduino or else the the code will not uplode. After Arduino is done uploding reconnect pin 0 and 1 to Arduino before giving commands from mobile app.
- Remember to connect Bluethooth Module HC-05 rx and tx with Arduino's tx and rx (pin 1 and 0) respectively or commands given by Moblie will not reach Arduino and Laptop and code will not be exicuted.
