// chan.h

#ifndef _CHAN_h
#define _CHAN_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ChanClass{
private:
	 int pinI, pinV;
	 float r1, r2, rs, rf;
	 double ri;
	 float gI;

 public:
	void init(int _pinI, int _pinV, float _r1, float _r2, double _ri, float _rf, float _rs, float _gI);
	void init();

	void update();
	float analogReadE(int );
	void setReading(int n);

	float vOut, iOut;
	float pOut;
	float gV;

	int nReading = 100;
};

extern ChanClass Chan;

#endif

