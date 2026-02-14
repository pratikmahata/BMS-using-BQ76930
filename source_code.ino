#include <Wire.h>

#define BQ_ADDR 0x08
#define SDA_PIN 21
#define SCL_PIN 22

#define VC_BASE 0x0C
#define TS1 0x2C

uint16_t R(uint8_t reg)
{
  Wire.beginTransmission(BQ_ADDR);
  Wire.write(reg);
  Wire.endTransmission(false);
  Wire.requestFrom(BQ_ADDR, 2);
  return (Wire.read() << 8) | Wire.read();
}

void setup()
{
  Serial.begin(115200);
  Wire.begin(SDA_PIN, SCL_PIN);

  Serial.println("=== 3S BMS Monitor Started ===");
}

void loop()
{
  float pack = 0;

  Serial.println("\nCells:");
  for(int i = 0; i < 3; i++)   // for 3s battery pack
  {
    float v = R(VC_BASE + 2*i) * 0.001;   
    pack += v;
    Serial.printf("C%d: %.3fV  ", i + 1, v);
  }

  float t1 = R(TS1) * 0.1 - 273.15;
  Serial.printf("\nPack: %.2fV | T1: %.1fC\n", pack, t1);
  delay(1000);
}
