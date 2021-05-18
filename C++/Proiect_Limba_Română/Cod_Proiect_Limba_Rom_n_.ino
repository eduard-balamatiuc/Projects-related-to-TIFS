#define button_left 7
#define button_right 8
#define red_led_left 5
#define green_led_left 6
#define red_led_right 2
#define green_led_right 3
#define buzzer 4
void setup() {
  Serial.begin(9600);
  pinMode(button_left, OUTPUT);
  pinMode(button_right, OUTPUT);
  pinMode(red_led_left, OUTPUT);
  pinMode(green_led_left, OUTPUT);
  pinMode(red_led_right, OUTPUT);
  pinMode(green_led_right, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (button_left == 1) {
    digitalWrite(red_led_left, LOW);
    digitalWrite(red_led_right, HIGH);
    digitalWrite(green_led_left, HIGH);
    digitalWrite(green_led_right, LOW);
    digitalWrite(buzzer, HIGH);
    delay(5000);
    digitalWrite(red_led_left, LOW);
    digitalWrite(red_led_right, LOW);
    digitalWrite(green_led_left, LOW);
    digitalWrite(green_led_right, LOW);
    digitalWrite(buzzer, LOW);
  }
  if (button_right == 1) {
    digitalWrite(red_led_left, HIGH);
    digitalWrite(red_led_right, LOW);
    digitalWrite(green_led_left, LOW);
    digitalWrite(green_led_right, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(5000);
    digitalWrite(red_led_left, LOW);
    digitalWrite(red_led_right, LOW);
    digitalWrite(green_led_left, LOW);
    digitalWrite(green_led_right, LOW);
    digitalWrite(buzzer, LOW);
  }
}
