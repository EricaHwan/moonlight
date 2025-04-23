const int potPin = A0;  // 可變電阻接在A0腳位

void setup() {
  Serial.begin(9600);  // 初始化序列埠，設定鮑率為9600
}

void loop() {
  int potValue = analogRead(potPin);  // 讀取可變電阻的值 (0-1023)
  Serial.println(potValue);  // 將值傳送到電腦
  delay(50);  // 稍微延遲一下，避免傳送太快
} 