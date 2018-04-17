const int numReadings = 10;
int readings[numReadings];
int readIndex = 0;
int total = 0;
int voltage_average;

float filter_avg(int sensorVal){
  total = total - readings[readIndex];
  readings[readIndex] = sensorVal;
  total = total + readings[readIndex];
  readIndex = readIndex + 1;
  if(readIndex >= numReadings){
    readIndex = 0;
  }
  voltage_average = total / numReadings;
  return voltage_average;
}

