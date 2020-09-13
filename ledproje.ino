#define buton1 3
#define led1 2
#define buton2 5
#define led2 4
int buton_durumu1 = 0;
int buton_durumu2 = 0;
void setup() {
  pinMode(3,INPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);

}

void loop() {
  buton_durumu1 = digitalRead(buton1);
  buton_durumu2 = digitalRead(buton2);
  
  if(buton_durumu1 == 1){
    digitalWrite(led2,LOW);
    digitalWrite(led1,HIGH);
    
  }
 if(buton_durumu2 == 1){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }


}
