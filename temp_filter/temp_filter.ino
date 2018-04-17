void setup(){
  Serial.begin(9600);
}

void loop(){
  int val = analogRead(A0);
  int filtered_val = filter_avg(val);
  Serial.print(val);
  Serial.print(",");
  Serial.println(filtered_val);
}

