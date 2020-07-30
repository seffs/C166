#include "hardware.h"
#include "t3power.c"


void T3Init(void){
	T4CON = 0x27;
	T3CON = 0x82;
	T4 = 62500;
	T3IC = 0X54;
	T3R = 1;
}

int systemzeit;

void T3Interrupt(void) interrupt 0x23 {
		systemzeit += 100;
}

void main(void) 
{
	t3power();
	T3Init();
	PSW_IEN = 1;
	while (1) {
	}
}