// ARMatura book sample
// ������ ������ ������

#include <SSAU.h> // ���������� Wiring-�����������
                  // ��������� ���������� SSAU ASCL

#ifdef SAMPLE_BUTTON

void tick1s() {
	XLED.toggle();
}

void setup() {
	pinMode(WLED, OUTPUT); // set pin LD3 as output
	pinMode(XLED, OUTPUT); // set pin LD4 as output
}

void loop() {
	while (1)
		if (UBUTTON.pressed())
			digitalWrite(WLED, HIGH);
		else
			digitalWrite(WLED, LOW);
}

#endif
