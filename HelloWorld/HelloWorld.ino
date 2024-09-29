void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); // inicializamos el led incorporado en la propia placa como una salida
  //Serial.begin(9600); // inicializamos el puerto serie como salida para poder ver mensajes en el monitor del mencionado puesto serie a 9600 baudios
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("Hola Mundo.\n");
  digitalWrite(LED_BUILTIN, HIGH); //Encendemos el led
  delay(1000); //Pausamos la ejecucion durante 1 segundo
  digitalWrite(LED_BUILTIN, LOW); // Apagamos el led
  delay(1000);
}
