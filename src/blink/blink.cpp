/*
 * ARMatura book sample
 * https://github.com/ponyatov/ARMatura
*/

#include <SSAU.h> // используем Wiring-совместимую объектную библиотеку SSAU ASCL

void setup() {
//	STM_LEDoff(LED3);
//	STM_LEDoff(LED4);
  pinMode(WLED, OUTPUT);  // set pin as output
}

void loop() {
//	if (STM_PBget(BUTTON_USER)== SET) {
//		STM_LEDon(LED4);
//	} else {
//		STM_LEDoff(LED4);
//	}
  digitalWrite(WLED, HIGH);  // set the LED on
  delay(1000);               // wait for a second
  digitalWrite(WLED, LOW);   // set the LED off
  delay(1000);               // wait for a second
}
