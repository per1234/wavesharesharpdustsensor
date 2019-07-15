// WaveshareSharpDustSensor.h

#ifndef _WAVESHARESHARPDUSTSENSOR_h
#define _WAVESHARESHARPDUSTSENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#define        COV_RATIO                       0.2            //ug/mmm / mv
#define        NO_DUST_VOLTAGE                 400            //mv
#define        SYS_VOLTAGE                     5000           
class WaveshareSharpDustSensor{
public:
	WaveshareSharpDustSensor::WaveshareSharpDustSensor();
	float density;
	float voltage;
	int Filter(int m);
	/// Convert raw ADC voltage reading (0-1023) into dust density in ug/m^3
	float Conversion(int rawVoltageADC);
	
};




#endif

