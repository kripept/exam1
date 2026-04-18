// Плата Uno #2
// Принимает сообщение от первой платы и отправляет ответ

void setup() {
  Serial.begin(9600);   // инициализация UART
}

void loop() {
  // Проверяем, пришли ли данные от первой платы
  if (Serial.available() > 0) {
    String received = Serial.readStringUntil('\n');
    Serial.print("Uno #2 received: ");
    Serial.println(received);
    
    // Отправляем ответ на первую плату
    Serial.println("Hello from Uno #2!");
  }
}
