
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
<img width="974" height="611" alt="image" src="https://github.com/user-attachments/assets/318329dc-3c69-4c6f-a244-29c3057bb721" />

---
<img width="703" height="703" alt="image" src="https://github.com/user-attachments/assets/7b6a6e14-6d8e-4e9d-a32f-438981003862" />

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
<img width="974" height="689" alt="image" src="https://github.com/user-attachments/assets/c4e1c96e-86c7-46ec-9d82-1b8269fabb30" />

 **Результат:** Пинг работает, пользователь создан, в группе sudo.
<img width="974" height="529" alt="image" src="https://github.com/user-attachments/assets/f7162722-0e5d-4d83-a373-ee01fb10aa03" />

---

## Задание 3 – Git репозиторий


**Файлы в репозитории:**
- `ard2.ino` / `ard1.ino`
- `README.md`

Результат:** Локальный репозиторий создан, коммит выполнен.

