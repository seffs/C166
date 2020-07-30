#include "hardware.h"

void portInit(){
	
	DP2 = 0x0;
	DP2 |= LED_1;
	DP2 |= LED_2;
	DP2 |= LED_3;
	
}

void main(void) 
{
	portInit();
	
	while(1) {
		P2 = ((P2&Taster_1)<<(LED1_PORT-T1_PORT))|(P2&~LED_1);
		P2 = ((P2&Taster_2)<<(LED2_PORT-T2_PORT))|(P2&~LED_2);
		// 1. Pr�fen, ob Taster eingedr�ckt wird
		// 2.	Ereignis zur Bitposition vom LED schieben
		// 3. Alte LED Bit l�schen und neues Ereignis einsetzen
	}
}