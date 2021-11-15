// Silnik X
  const int stepPin = 2; //X.STEP
  const int dirPin = 5; // X.DIR

// Silnik Y
  const int stepPin2 = 3; //y step pin
  const int dirPin2 = 6; // y direction pin

// Silnik Z
  const int stepPinZ = 4; //z step pin
  const int dirPinZ = 7; // z direction pin

// Endstop X
  const int EndX = 9;
  int Endenable = 0;

 // joystick
  int vrx = A0; // ABORT PIN
  int vry = A1; // HOLD PIN
  int vrx_data = 0; 
  int vry_data = 0; 
  int x = 0; 
  int y = 0;
  int SMSpeed = 500; // Stepper Motor Speed 

  // joystick2
  int vrz = A3; // COO EN PIN
  int vrz_data = 0;
  int z;
  int SMSpeed2 = 500;


void setup() {
     Serial.begin(9600); 
     
     pinMode(stepPin,OUTPUT); 
     pinMode(dirPin,OUTPUT);

     pinMode(stepPin2,OUTPUT); 
     pinMode(dirPin2,OUTPUT);

     pinMode(stepPinZ, OUTPUT);
     pinMode(dirPinZ, OUTPUT);

     pinMode(EndX , INPUT_PULLUP);
     pinMode(vrz , INPUT);
     pinMode(vrx , INPUT); 
     pinMode(vry , INPUT); 
 }


void joystick() {
    vrx_data = analogRead(vrx);
    vry_data = analogRead(vry);
    vrz_data = analogRead(vrz);
    Endenable = digitalRead(EndX);
    
    Serial.print("Vrx: "); 
    Serial.println(vrx_data);

    Serial.print("Vry: ");
    Serial.println(vry_data); 

    Serial.print("Vrz: ");
    Serial.println(vrz_data);

    Serial.print("ENDSTOP STATUS: ");
    Serial.println(Endenable);

// to stop the stepper motor
if ( (vrx_data > 490)  &&   (vrx_data < 510)   ){
  digitalWrite(dirPin, LOW);
  digitalWrite(stepPin, LOW);
}


if ( vrx_data > 700){
   digitalWrite(dirPin,HIGH);
   x = x + 1; 
   digitalWrite(stepPin,HIGH); 
   delayMicroseconds(SMSpeed); 
   digitalWrite(stepPin,LOW); 
   delayMicroseconds(SMSpeed); 
}

if ( vrx_data < 300) {
  digitalWrite(dirPin,LOW);
  x = x - 1; 
  digitalWrite(stepPin,HIGH); 
  delayMicroseconds(SMSpeed); 
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(SMSpeed);  
}

if ( (vrx_data > 490) && (vrx_data < 510)){
;

}

/*
if( Endenable == HIGH) {
    digitalWrite(dirPin,LOW);
    digitalWrite(stepPin,LOW); 
}
*/

if ( vrx_data > 700  ) {
    digitalWrite(dirPin,HIGH);
    x = x + 1; 
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(SMSpeed); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(SMSpeed);
}



// vry 
if ( (vry_data > 490)  &&   (vry_data < 510)   ){
;
}

if ( vry_data > 700){
   digitalWrite(dirPin2,HIGH);
   y = y + 1; 
   digitalWrite(stepPin2,HIGH); 
   delayMicroseconds(SMSpeed); 
   digitalWrite(stepPin2,LOW); 
   delayMicroseconds(SMSpeed); 
}

if ( vry_data < 300) {
  digitalWrite(dirPin2,LOW);
  y = y - 1;
  digitalWrite(stepPin2,HIGH); 
  delayMicroseconds(SMSpeed); 
  digitalWrite(stepPin2,LOW); 
  delayMicroseconds(SMSpeed);  
}

if ( (vry_data > 490) && (vry_data < 510)){
;
}

if ( vry_data > 700  ) {
    digitalWrite(dirPin2,HIGH);
    y = y + 1;
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(SMSpeed); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(SMSpeed);
}

}


// joystick2 do osi Z i grippera

void joystick2() {
    vrz_data = analogRead(vrz);
    Serial.print("Vrz:"); 
    Serial.println(vrz_data);

// to stop the stepper motor
if ( (vrz_data > 490)  &&   (vrz_data < 510)   ){
;
}

if ( vrz_data > 700){
   digitalWrite(dirPinZ,HIGH);
   z = z + 1; 
   digitalWrite(stepPinZ,HIGH); 
   delayMicroseconds(SMSpeed2); 
   digitalWrite(stepPinZ,LOW); 
   delayMicroseconds(SMSpeed2); 
}

if ( vrz_data < 300) {
  digitalWrite(dirPinZ,LOW);
  z = z - 1; 
  digitalWrite(stepPinZ,HIGH); 
  delayMicroseconds(SMSpeed2); 
  digitalWrite(stepPinZ,LOW); 
  delayMicroseconds(SMSpeed2);  
}

if ( (vrz_data > 490) && (vrz_data < 510)){
;
 }
if ( vrz_data > 700  ) {
    digitalWrite(dirPinZ,HIGH);
    z = z + 1; 
    digitalWrite(stepPinZ,HIGH); 
    delayMicroseconds(SMSpeed2); 
    digitalWrite(stepPinZ,LOW); 
    delayMicroseconds(SMSpeed2);
 }
}

void loop()  {
    joystick(); 
    joystick2();
    
 }
