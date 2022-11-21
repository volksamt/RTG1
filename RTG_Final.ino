int sensorPin = 0; // select the input pin for the potentiometer
int ledPin = 11; // select the pin for the LED
int sensorValue = 3; // variable to store the value coming from the sensor
int newVal = 0;
int speakerPin = 9;
int length = 25; // the number of notes
char notes[] = "cdefgabCDEABZYXFGHJKLMNOPR";
int beats[] = {1, 1, 1, 1, 1, 1, 1, 1};
long randomNo;
void playTone(int tone, int duration ) {
  
  for (long i = 0; i < duration * 1000L; i += tone*2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
 
char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C','D','E', 'A', 'B', 'Z', 'Y', 'X', 'F', 'G', 'H', 'J', 'L', 'M', 'N','O','P', 'R', };
int tones[] = { 261*2, 293*2, 329*2, 349*2, 392*2, 440*2, 493*2, 523*2, 587*2, 659*2, 698*2, 783*2, 880*2, 987*2, 1046*2, 1174*2, 1318*2, 1396*2, 1567*2, 1760*2, 1975*2, 2093*2, 2349*2, 2637*2, 2793*2 };

  for (int i = 0; i < 25; i++) {
  if (names[i] == note) {
    playTone(tones[i], duration);
    }
  }
}

void setup() {
pinMode(ledPin, OUTPUT); //declare the ledPin as an OUTPUT:
pinMode(speakerPin, OUTPUT);
 pinMode(13, OUTPUT); //LED Pin to indicate >511 input value
 pinMode(12, OUTPUT);  //LED Pin to indicate 0 input value
Serial.begin(9600);
}

void loop() {
int sensorValue = analogRead(sensorPin);// read the value from the sensor:

newVal = map(sensorValue, 0, 1023, 0, 255); //adjust the value 0 to 900 to
analogWrite(11 , newVal );

Serial.println(sensorValue);

for (int i = 0; i < length; i++) {
randomNo = random (0,24);
      Serial.println(randomNo);
      int l = randomNo;
      if(l==0){
        playNote(notes[0], beats[0] * newVal+1);
        }
      else if(l==1){
        playNote(notes[1], beats[0] * newVal+1);
        }
      else if(l==2){
        playNote(notes[2], beats[0]* newVal+1);
        }
      else if(l==3){
        playNote(notes[3], beats[0] * newVal+1);
        }
      if(l==4){playNote(notes[4], beats[0]* newVal+1);}
      if(l==5){playNote(notes[5], beats[0] * newVal+1);}
      if(l==6){playNote(notes[6], beats[0]* newVal+1);}
      if(l==7){playNote(notes[7], beats[0]* newVal+1);}
      if(l==8){playNote(notes[8], beats[0]* newVal+1);}
      if(l==9){playNote(notes[9], beats[0]* newVal+1);}
      if(l==10){playNote(notes[10], beats[0] * newVal+1);}
      if(l==11){playNote(notes[11], beats[0] * newVal+1);}
      if(l==12){playNote(notes[12], beats[0]* newVal+1);}
      if(l==13){playNote(notes[13], beats[0] * newVal+1);}
      if(l==14){playNote(notes[14], beats[0]* newVal+1);}
      if(l==15){playNote(notes[15], beats[0] * newVal+1);}
      if(l==16){playNote(notes[16], beats[0]* newVal+1);}
      if(l==17){playNote(notes[17], beats[0]* newVal+1);}
      if(l==18){playNote(notes[18], beats[0]* newVal+1);}
      if(l==19){playNote(notes[19], beats[0]* newVal+1);}
      if(l==20){playNote(notes[20], beats[0] * newVal+1);}
      if(l==21){playNote(notes[20], beats[0] * newVal+1);}
      if(l==22){playNote(notes[22], beats[0]* newVal+1);}
      if(l==23){playNote(notes[23], beats[0] * newVal+1);}
      if(l==24){playNote(notes[24], beats[0]* newVal+1);}
     
}
delay(10);{
}
}



