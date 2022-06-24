
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
