
// Notify the client over serial when a temperature reading changes

static int8_t temp = 0;
AccelerationReading accel = {0, 0, 0};

// the setup routine runs once when you press reset:
void setup()
{
  Serial.begin(57600);
}

void loop()
{
  accel = Bean.getAcceleration();
  Serial.print("[");
  Serial.print(accel.xAxis);
  Serial.print(",");
  Serial.print(accel.yAxis);
  Serial.print(",");
  Serial.print(accel.zAxis);
  Serial.print("]");
  Serial.println("");
  Bean.sleep(50);
}
