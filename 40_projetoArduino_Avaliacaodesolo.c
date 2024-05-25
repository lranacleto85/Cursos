#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_TSL2591.h>  // Sensor de luminosidade
#include <DHT.h>  // Sensor de umidade
#include <OneWire.h>
#include <DallasTemperature.h>  // Sensor de temperatura
#include <LiquidCrystal_I2C.h>  // Display LCD

#define DHT_PIN 2  // Pino do sensor de umidade
#define DHT_TYPE DHT22

#define ONE_WIRE_BUS 3  // Pino do sensor de temperatura

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

Adafruit_TSL2591 tsl = Adafruit_TSL2591(2591);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  tsl.begin();
  sensors.begin();
}

void loop() {
  // Medição de umidade e temperatura
  DHT dht(DHT_PIN, DHT_TYPE);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Medição de luminosidade
  uint16_t light = tsl.getLuminosity(TSL2591_VISIBLE);

  // Medição de temperatura do solo
  sensors.requestTemperatures();
  float soilTemperature = sensors.getTempCByIndex(0);

  // Mostrar as leituras no LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidade: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp Solo: ");
  lcd.print(soilTemperature);
  lcd.print("C");

  delay(2000);
}
