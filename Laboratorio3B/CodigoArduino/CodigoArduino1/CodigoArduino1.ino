// Práctica encender y apagar un LED a través de botón pulsador 
const int LED1=13;
const int BOTON1=7;
const int LED2=12;
const int BOTON2=6;
const int LED3=11;
const int BOTON3=5;
int val; 
int val2;
int val3 =0;

void setup(){
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(BOTON1,INPUT);
pinMode(LED2,OUTPUT);
pinMode(BOTON2,INPUT);
pinMode(LED3,OUTPUT);
pinMode(BOTON3,INPUT);
}
void loop(){
  val3 =analogRead(3);
  Serial.println(val3);
  delay(100);
val=digitalRead(BOTON1); 
if  (val2==HIGH){
digitalWrite(LED1,HIGH);
} 
val=digitalRead(BOTON2); 
if  (val==HIGH){
digitalWrite(LED2,HIGH);
} 
val=digitalRead(BOTON3); 
if  (val==HIGH){
digitalWrite(LED3,HIGH);
} 

//else{ digitalWrite(LED,LOW);
//}
}
