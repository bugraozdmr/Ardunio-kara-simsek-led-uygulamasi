int dizi[]={2,3,4,5};
int a=0,b;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  //100.seferde dursun
  
  for(int i=0;i<4;i++){
    if(b==dizi[i]) continue;
    Serial.println(a);
    digitalWrite(dizi[i],HIGH);
    delay(300);   //beklesin az
    a++;
    digitalWrite(dizi[i],LOW);
    b=dizi[i];
  }
  for(int i=3;i>=0;i--){
    if(b==dizi[i]) continue;  //yakti sondurdu bekleme olmadigi icin direkt tekrar yakti bunu boylece onledik
    Serial.println(a);
    digitalWrite(dizi[i],HIGH);
    delay(300);   //beklesin az
    a++;
    digitalWrite(dizi[i],LOW);
    b=dizi[i];
  }
  if(a>100) exit(0);
}
