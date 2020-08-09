//system Variables
int lastsystemState = 0;
long unsigned int lastSignal;
int alarmTime = 20000;

//microphone
int toggleState = 1;
int micPin = 2;

//speaker
int speakerPin = 13;
//visual Output
int screenPin =11;

void setup() {
  Serial.begin(9600);
  pinMode(micPin, OUTPUT);
  pinMode(speakerPin, INPUT);
}

void loop(){
  int systemState = analogRead(micPin);

  if((millis() - lastSignal) < alarmTime){
    lastSignal = millis();
    }
  else{
    digitalWrite(speakerPin, HIGH );
  }

  Serial.println("read input");
  Serial.print(systemState);
}
