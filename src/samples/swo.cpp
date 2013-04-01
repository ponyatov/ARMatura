// ARMatura book sample
// вывод через отладочный интерфейс

#include <SSAU.h> // используем Wiring-совместимую
                  // объектную библиотеку SSAU ASCL

#ifdef SAMPLE_SWO

void tick1s() {
	XLED.toggle();
}

void setup() {
	pinMode(WLED, OUTPUT); // set pin LD3 as output
	pinMode(XLED, OUTPUT); // set pin LD4 as output
}

void loop() {
	itm
}

#endif
