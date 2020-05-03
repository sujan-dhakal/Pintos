#include <stdint.h>

#define F 16384

int tofxpt(int a);
int tointfloor(int a);
int addin(int a, int b);
int addfx(int a, int b);
int subin(int a, int b);
int subfx(int a, int b);
int mulfx(int a, int b);
int divin(int a, int b);
int divfx(int a, int b);
int tointround(int a);

/* Function Implementations */
int tofxpt(int a) { return a * F; }
int tointfloor(int a) { return a / F; }
int addin(int a, int b) { return a + (b * F); }
int addfx(int a, int b) { return a + b; }
int subin(int a, int b) { return a - (b * F); }
int subfx(int a, int b) { return a - b; }
int mulfx(int a, int b) { return ((int64_t) a) * b / F; }
int divin(int a, int b) { return a / b; }
int divfx(int a, int b) { return ((int64_t) a) * F / b; }

int tointround(int a) {
	if (a>=0)
		return (a + F/2) / F;
	else
		return (a - F/2) / F;
}

