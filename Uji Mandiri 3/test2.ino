//menyatakan input
int ldr = A0;
int lm35 = A1;
int load = A2;

//menyatakan nilai awal dari variabel hasil membaca nilai analog
int LDR = 0;
int LM35 = 0;
int LOAD = 0;

//mendefinisikan output
#define led1 2
#define led2 3
#define led3 4

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // mengambil hasil bacaan nilai analog
  LDR = analogRead(ldr);
  LM35 = analogRead(lm35);
  LOAD = analogRead(load);
  
  if ((LDR < 558) && (LM35 < 53) ){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if ((LDR > 511.5) && (LOAD <= 217)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if ( (LM35 > 53)&&(LOAD > 217)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  

}
