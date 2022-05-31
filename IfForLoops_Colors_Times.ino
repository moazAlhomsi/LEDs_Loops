int redpin = 12;
int yellpin = 7;
int j;
int myans;
String quest = "How many times do you want the LED to light up ?";
String quest2 = "Choose the color of LED (red or yellow) ?";
String color; 
void setup() {
  // put your setup code here, to run once:
pinMode(yellpin,OUTPUT);
pinMode(redpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(quest2);


while (Serial.available()==0){
  
}
color = Serial.readString();
Serial.println(quest);

while (Serial.available()==0){
 
}
myans=Serial.parseInt();



if(color == "red" ||color == "Red" || color == "RED"){
for (j=1;j<=myans;j = j+1){
digitalWrite(redpin,HIGH);
delay(500);
digitalWrite(redpin,LOW);
delay(500);
 }
}
if(color == "yellow" ||color == "Yellow" || color == "YELLOW"){
for (j=1;j<=myans;j = j+1){
digitalWrite(yellpin,HIGH);
delay(500);
digitalWrite(yellpin,LOW);
delay(500);
}
}
}
