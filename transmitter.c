#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'D','#','0','*'},
  {'C','9','8','7'},
  {'B','6','5','4'},
  {'A','3','2','1'}
};
byte rowPins[ROWS] = {8,9,10,11}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {4,5,6,7}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
char customKey=0;

void setup() {

  Serial.begin(4800);

}

void loop() {

   char key1 = customKeypad.getKey();
     if(key1){
    Serial.println(key1);
     delay(1000);
  }

}
 ///TRANSMITTER
