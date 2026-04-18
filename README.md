Хорошо, вот сокращённая версия всех трёх заданий для коммита в Git.

---

# ОТЧЁТ 

## Задание 1 – Duplex UART (Arduino Uno + Nano)

**Схема:**
```
Uno GND  → Nano GND
Uno TX(1) → Nano RX(D0)
Uno RX(0) → Nano TX(D1)
```

**Код Uno:**
```cpp
void setup() { Serial.begin(9600); }
void loop() {
  Serial.println("Hello from Uno!");
  if(Serial.available()) Serial.println(Serial.readStringUntil('\n'));
  delay(1000);
}
```

**Код Nano:**
```cpp
void setup() { Serial.begin(9600); }
void loop() {
  if(Serial.available()) {
    Serial.print("Nano got: ");
    Serial.println(Serial.readStringUntil('\n'));
    Serial.println("Hello from Nano!");
  }
}
```

 **Результат:** Данные идут в обе стороны.

---

## Задание 2 – VirtualBox (Windows 10 + Ubuntu Server)

**Сеть:** Internal Network `isolated_net`

**IP:**
- Windows: `192.168.100.10/24`
- Ubuntu: `192.168.100.20/24`

**Настройка Ubuntu (/etc/netplan/01-netcfg.yaml):**
```yaml
network:
  version: 2
  ethernets:
    enp0s3:
      dhcp4: false
      addresses: [192.168.100.20/24]
```

**Пинг:**
```bash
# Ubuntu → Windows
ping 192.168.100.10   # 

# Windows → Ubuntu  
ping 192.168.100.20   # 
```

**Пользователь engineer:**
```bash
sudo useradd -m engineer
sudo passwd engineer
sudo usermod -aG sudo engineer
```
 **Результат:** Пинг работает, пользователь создан, в группе sudo.

---

## Задание 3 – Git репозиторий

```bash
mkdir arduino_project && cd arduino_project
git init
git add .
git commit -m "Initial commit: UART duplex sketches, VM network setup, engineer user"
```

**Файлы в репозитории:**
- `uno.ino` / `nano.ino`
- `REPORT.md`
- `ping_result.png` / `user_engineer.png`

Результат:** Локальный репозиторий создан, коммит выполнен.



 Итог

| Задание | Статус |
| №1 UART duplex |  
| №2 VirtualBox сеть + ping + engineer | 
| №3 Git репозиторий + коммит | 

**ВСЕ ЗАДАНИЯ ВЫПОЛНЕНЫ.**
