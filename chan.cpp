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

}

void ChanClass::update() {
	vOut = analogRead(pinV) * 5.0 * (r2 + r1) / ( r2 * gV * 1023.0);
	iOut = analogRead(pinI) * 5.0 / ( gI * ri * 1023.0);
	pOut = vOut * iOut;
}


ChanClass Chan;

