//make variables to use them more easily in the later code
int led1 = D6;
int led2 = D7;

//a procedure for long blink in the Morse code
void longBlink() {
    //Turn on 
    digitalWrite(led1, HIGH);
    delay(2000);
    
    //Turn off
    digitalWrite(led1, LOW);
    delay(1000);
}

//a procedure for long blink in the Morse code
void shortBlink() {
    //Turn on
    digitalWrite(led1, HIGH);
    delay(800);
    //Turn off
    digitalWrite(led1, LOW);
    delay(1000);
}

//Set up to put led1 as output
void setup() {
    pinMode(led1, OUTPUT);
}

//code to create the blink in Morse code (name BOB)
void loop() {
    //leter B
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    //leter O
    longBlink();
    longBlink();
    longBlink();
    //leter B
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    //and the code will repeat again
}