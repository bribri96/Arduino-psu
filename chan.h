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
	 int r1, r2;
	 double ri;
	 float gV, gI;

 public:
	void init(int _pinI, int _pinV, int _r1, int _r2, double _ri, float _gV, float _gI);
	void init();

	void update();
	float analogReadE(int );
	void setReading(int n);

	float vOut, iOut;
	float pOut;

	int nReading = 100;
};

extern ChanClass Chan;

#endif

