// 
// 
// 

#include "chan.h"

void ChanClass::init(int _pinI, int _pinV, float _r1, float _r2, double _ri, float _rf, float _rs, float _gI) {
	pinI = _pinI;
	pinV = _pinV;
	r1 = _r1;
	r2 = _r2;
	ri = _ri;
	rf = _rf;
	rs = _rs;
	gI = _gI;

	gV = (float) (r2 / (r1 + r2)) * (1 + (rf / rs)) * (1023.0f / 5.0f);
}

void ChanClass::init() {
	pinI = 99;
	pinV = 99;
	r1 = 1;
	r2 = 1;
	ri = 1;
	rf = 1;
	rs = 1;
	gI = 1;
}

void ChanClass::update() {
	vOut = analogReadE(pinV) / gV;
	iOut = analogReadE(pinI) * 5.0 / (gI * ri * 1023.0);
	pOut = vOut * iOut;
}

float ChanClass::analogReadE(int pin) {
	long res = 0;

	for (int i = 0; i < nReading; i++)
		res += analogRead(pin);

	return (float)res / nReading;
}

void ChanClass::setReading(int n) {
	nReading = n;
}


ChanClass Chan;

