#define umidadeAnalogica A0 // Atribui o pino A0 à variável umidadeAnalogica - leitura analógica do sensor
#define LedVermelho 5 
#define LedVerde 6
#define rele 8

int valorumidade; 

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial com uma taxa de 9600 bauds
  pinMode(umidadeAnalogica, INPUT); // Configura o pino A0 como entrada
  pinMode(LedVermelho, OUTPUT); // Configura o pino 5 como saída
  pinMode(LedVerde, OUTPUT); // Configura o pino 6 como saída
  pinMode(rele, OUTPUT); // Configura o pino 8 como saída
}

void loop() {

  valorumidade = analogRead(umidadeAnalogica); // Lê o valor analógico do sensor de umidade
  valorumidade = map(valorumidade, 0, 1023, 100, 0); // Converte o valor lido para uma escala de 0 a 100%]
  Serial.print("Umidade encontrada: ");
  Serial.print(valorumidade); 
  Serial.println(" %");

  if (valorumidade >= 40) { 
    Serial.println("Status: Solo úmido");
    digitalWrite(LedVermelho, LOW); // Desliga o LED vermelho
    digitalWrite(LedVerde, HIGH); // Liga o LED verde
    digitalWrite(rele, LOW); // Desliga o relé (considerando que o relé é ativo em LOW)
  }
  else { 
    Serial.println("Status: Solo seco");
    digitalWrite(LedVermelho, HIGH); // Liga o LED vermelho
    digitalWrite(LedVerde, LOW); // Desliga o LED verde
    digitalWrite(rele, HIGH); // Liga o relé (considerando que o relé é ativo em LOW)
  }
  delay(1000); // Atraso de 3 segundos
}