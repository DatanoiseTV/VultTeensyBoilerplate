/// This Header is just used to stay as compatible as possible
/// with the *duino IDE. It makes setup() and loop() work properly
/// when compiled with A C/C++ compiler.

#ifndef _ARDUINO_GIMMICKS_H_
#define _ARDUINO_GIMMICKS_H_
#include "WProgram.h"
extern "C" int main(void)
{
	setup();
	while (1) {
		loop();
		yield();
	}
}
#endif
