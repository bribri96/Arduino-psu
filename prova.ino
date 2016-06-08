#include "chan.h"

void setup(){

  /* add setup code here */
	Serial.begin(115200);
}

void loop(){
	
	for (int i = 0; i < 5; i++)
		Serial.println(i);

  /* add main program code here */

}
