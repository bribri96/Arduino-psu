#include "chan.h"



void setup(){
	Chan.init(A0, A1, 1,1,1,1,1);
	Chan.setReading(10000);
	Serial.begin(115200);
}

void loop(){
	Serial.print(Chan.nReading);
	Serial.print("\t");
	Serial.println(Chan.analogReadE(A0));
  /* add main program code here */

}
