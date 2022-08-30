// the setup function runs once when you press reset or power the board

int pinVermelho = 10;
int pinAmarelo = 9;
int pinVerde = 8; 
 
int pinBotao = 7;

int faseSemaforo;
int estadoBotao;


void setup() {
  pinMode (pinVermelho, OUTPUT);
  pinMode (pinAmarelo, OUTPUT);
  pinMode (pinVerde, OUTPUT);
  pinMode (pinBotao, INPUT);

  faseSemaforo = 1;
}


// the loop function runs over and over again forever
void loop() {

  estadoBotao = digitalRead(pinBotao);
  
  if (estadoBotao == HIGH) {

    }
  if (faseSemaforo <3) {
    faseSemaforo = faseSemaforo + 1;    
} else{
  faseSemaforo = 1;  
}

if (faseSemaforo == 1){
digitalWrite (pinVerde, HIGH);
digitalWrite (pinAmarelo, LOW);
digitalWrite (pinVermelho, LOW);     
}

if (faseSemaforo == 2) { 
  digitalWrite (pinVerde, LOW);
  digitalWrite (pinAmarelo, HIGH);
  digitalWrite (pinVermelho, LOW); 
}
if (faseSemaforo == 3) {
  digitalWrite (pinVerde, LOW);
  digitalWrite (pinAmarelo, LOW);
  digitalWrite (pinVermelho, HIGH);  
}
delay (200);
}
