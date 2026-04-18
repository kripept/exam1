// Плата Uno #1
// Отправляет сообщение на вторую плату и принимает ответ

void setup() {
  Serial.begin(9600);   // инициализация UART
}

void loop() {
  // Отправляем сообщение на вторую плату
  Serial.println("Hello from Uno #1!");
  
  // Проверяем, пришёл ли ответ от второй платы
  if (Serial.available() > 0) {
    String response = Serial.readStringUntil('\n');
    Serial.print("Uno #1 received: ");
    Serial.println(response);
  }
  
  delay(1000);  // ждём 1 секунду
}
