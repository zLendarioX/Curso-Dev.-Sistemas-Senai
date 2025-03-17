#define pinSensor A3
#define pinRele 2

int Status = 0;
int umidadeMin = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinRele, OUTPUT);
}

void loop() {
  // Comandos bluetooth
  String var_cmd = Serial.readString();
  int var_num_cmd = var_cmd.toInt(); // Faz a conversão de String para inteiro
  Serial.println(var_cmd);
  Serial.println("");
  if(var_cmd == "Online"){
    Status = 1;
  } else if(var_cmd == "Offline"){
    Status = 0;
  } 
  else if(var_num_cmd > 0){
      Serial.println("O valor recebido foi: ");
      Serial.println(var_num_cmd);
      umidadeMin = var_num_cmd;
  }
  // Sistema 
  else if(Status == 1){
    int Porcento = map(analogRead(pinSensor), 1023, 0, 0, 100); // Converter para de 0 a 100
    Serial.println("Umidade do Solo: ");
    Serial.println(map(analogRead(pinSensor), 1023, 0, 0, 100));
    Serial.print("%");
    if (Porcento <= umidadeMin) {
          Serial.println("Irrigando a planta ...");
          digitalWrite(pinRele, LOW); // Ligar Bomba
      }
      else {
          Serial.println("Planta Irrigada ...");
          digitalWrite(pinRele, HIGH); // Desligar Bomba
      }
      delay (1000);
  } else {
    Serial.println("Sistema esta desativado");
  }
  delay(1000);
}
