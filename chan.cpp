// 
// 
// 

#include "chan.h"

void ChanClass::init(int _pinI, int _pinV, int _r1, int _r2, double _ri, float _gV, float _gI){
	pinI = _pinI;
	pinV = _pinV;
	r1 = _r1;
	r2 = _r2;
	ri = _ri;
	gV = _gV;
	gI = _gI;
}

void ChanClass::init(){
	pinI = 99;
	pinV = 99;
	r1 = 1;
	r2 = 1;
	ri = 1;
	gV = 1;
	gI = 1;
}

void ChanClass::update() {
	vOut = analogReadE(pinV) * 5.0 * (r2 + r1) / ( r2 * gV * 1023.0);
	iOut = analogReadE(pinI) * 5.0 / ( gI * ri * 1023.0);
	pOut = vOut * iOut;
}

float ChanClass::analogReadE(int pin) {
	long res = 0;

	for (int i = 0; i < nReading; i++)
		res += analogRead(pin);

	return (float) res / nReading;
}

void ChanClass::setReading(int n) {
	nReading = n;
}


ChanClass Chan;

