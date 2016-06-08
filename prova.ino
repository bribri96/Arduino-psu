#include "chan.h"



void setup() {
	Chan.init(A0, A1, 1, 1, 1, 1, 1, 1);
	Chan.setReading(200);
	Serial.begin(115200);
}

void loop() {
	Chan.update();

	Serial.print(Chan.nReading);
	Serial.print("\t");
	Serial.print(Chan.vOut);
	Serial.print("\t");
	Serial.print(Chan.gV,8);
	Serial.print("\t");
	Serial.print((1.0f / (1.0f + 1.0f)) *(1.0f + (1.0f / 1.0f)) * (5.0f / 1023.0f), 8);
	Serial.print("\t");
	Serial.println(Chan.analogReadE(A0));

	//gV = (float)(r2 / (r1 + r2)) * (1 + (rf / rs)) * (5.0f / 1023.0f);

	/* add main program code here */

}
