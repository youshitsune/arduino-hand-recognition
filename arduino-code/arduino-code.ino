void setup(){
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int val = Serial.readString().toInt();
    if (val == 1){
        digitalWrite(8, HIGH);
    }
    else if (val == 2){
        digitalWrite(8, LOW);
    }
}
