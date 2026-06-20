#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <Servo.h>
#include <DHT.h>

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

// DHT11
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// PIR Sensor
#define PIR_PIN A0

// Servo
#define SERVO_PIN A2
Servo doorServo;

// Fan
#define FAN_PIN A3

// Buzzer
#define BUZZER_PIN 12

// LEDs
#define GREEN_LED 10
#define RED_LED 11
#define STATUS_LED 13

// Password
String password = "1234";
String inputPassword = "";

// Keypad
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3,2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void lockDoor()
{
  doorServo.write(0);

  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);

  lcd.clear();
  lcd.print("Door Locked");
}

void unlockDoor()
{
  doorServo.write(90);

  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);

  lcd.clear();
  lcd.print("Door Open");

  delay(5000);

  lockDoor();
}

void setup()
{
  pinMode(PIR_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(STATUS_LED, OUTPUT);

  pinMode(FAN_PIN, OUTPUT);

  doorServo.attach(SERVO_PIN);

  lcd.init();
  lcd.backlight();

  dht.begin();

  lockDoor();

  lcd.setCursor(0,1);
  lcd.print("System Ready");

  delay(2000);
}

void loop()
{
  // PIR Motion Detection
  if(digitalRead(PIR_PIN))
  {
    digitalWrite(STATUS_LED, HIGH);

    tone(BUZZER_PIN, 1000, 500);

    lcd.clear();
    lcd.print("Motion Found");

    delay(1000);
  }
  else
  {
    digitalWrite(STATUS_LED, LOW);
  }

  // DHT11 Reading
  float temp = dht.readTemperature();

  if(temp > 30)
  {
    digitalWrite(FAN_PIN, HIGH);
  }
  else
  {
    digitalWrite(FAN_PIN, LOW);
  }

  // Display Temperature
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temp);
  lcd.print("C ");

  // Keypad Password
  char key = keypad.getKey();

  if(key)
  {
    if(key == '#')
    {
      lcd.clear();

      if(inputPassword == password)
      {
        lcd.print("Access Granted");
        unlockDoor();
      }
      else
      {
        lcd.print("Wrong Pass");

        for(int i=0;i<3;i++)
        {
          tone(BUZZER_PIN, 1500);
          delay(200);
          noTone(BUZZER_PIN);
          delay(200);
        }
      }

      inputPassword = "";
    }

    else if(key == '*')
    {
      inputPassword = "";

      lcd.clear();
      lcd.print("Cleared");
    }

    else
    {
      inputPassword += key;

      lcd.setCursor(0,1);
      lcd.print("Pass: ");

      for(int i=0;i<inputPassword.length();i++)
      {
        lcd.print("*");
      }
    }
  }
}