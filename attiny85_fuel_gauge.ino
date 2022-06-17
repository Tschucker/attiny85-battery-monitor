
#define MAX_V 1023
#define STEP_V 38

int voltage = 0;

void setup() {
  
    pinMode(0, OUTPUT); //P0
    pinMode(1, OUTPUT); //P1
    pinMode(3, OUTPUT); //P3
    
}

void loop() {

    voltage = 0;
    for (int i=0; i < 10; i++) {
      voltage = voltage + analogRead(1);
      delay(20);
    }
    voltage = voltage/10;
  
    //voltage = analogRead(1); //Read P2
    
    if (voltage >= MAX_V-STEP_V) {
       digitalWrite(0, HIGH);
       digitalWrite(1, HIGH);
       digitalWrite(3, HIGH);
    }
    else if ((voltage < MAX_V-STEP_V) && (voltage >= MAX_V-(2*STEP_V))) {
       digitalWrite(0, LOW);
       digitalWrite(1, HIGH);
       digitalWrite(3, HIGH);
    }
    else if ((voltage < MAX_V-(2*STEP_V)) && (voltage >= MAX_V-(3*STEP_V))) {
       digitalWrite(0, HIGH);
       digitalWrite(1, LOW);
       digitalWrite(3, HIGH);
    }
    else if ((voltage < MAX_V-(3*STEP_V)) && (voltage >= MAX_V-(4*STEP_V))) {
       digitalWrite(0, LOW);
       digitalWrite(1, LOW);
       digitalWrite(3, HIGH);
    }
    else if ((voltage < MAX_V-(4*STEP_V)) && (voltage >= MAX_V-(5*STEP_V))) {
       digitalWrite(0, HIGH);
       digitalWrite(1, HIGH);
       digitalWrite(3, LOW);
    }
    else if ((voltage < MAX_V-(5*STEP_V)) && (voltage >= MAX_V-(6*STEP_V))) {
       digitalWrite(0, LOW);
       digitalWrite(1, HIGH);
       digitalWrite(3, LOW);
    }
    else if ((voltage < MAX_V-(6*STEP_V)) && (voltage >= MAX_V-(7*STEP_V))) {
       digitalWrite(0, HIGH);
       digitalWrite(1, LOW);
       digitalWrite(3, LOW);
    }
    else {
       digitalWrite(0, LOW);
       digitalWrite(1, LOW);
       digitalWrite(3, LOW);
    }
    delay(1000);
    
}
