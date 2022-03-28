 
const int ledVermelho = 13;


unsigned long anteriorVermelho;
boolean ligaVermelho = 0; 

void setup() { 
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  unsigned long atual = millis();
  
  if (atual - anteriorVermelho > 600) {
    digitalWrite(ledVermelho, ligaVermelho);
    ligaVermelho = !ligaVermelho;
    anteriorVermelho = atual;
  }  
}

