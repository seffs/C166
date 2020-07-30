#include "hardware.h"
#include "t3power.c"

void T3Init(void){
	T4CON = 0x27;
	T3CON = 0x82;
	T4 = 0xF424;
	//T3CON |= (1<<6);
	T3R = 1;

}

int systemzeit;

void main(void) 
{
	t3power();
	T3Init();
	while (1) {
		if (T3CON & (1<<10)) {
			systemzeit += 100;
			T3CON &= ~(1<<10);
		}
	}
}
