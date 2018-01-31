int x,y;
void setup() {
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  x=analogRead(A0);
  x=x/4;
  y=255/3;
  Serial.println(x);
  delay(500);
  if(x==0){
    digitalWrite(3,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    }
  if (x>20 && x<y){
    digitalWrite(3,1);
  }
  if (x>=y && x<2*y){
    digitalWrite(5,1);
  }
  if (x>=2*y && x<3*y){
    digitalWrite(6,1);
  }
}
