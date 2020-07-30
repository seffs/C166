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
		P2 = (((((P2&Schalter_1)^Schalter_1)>>(S1_PORT-T1_PORT))|(P2&Taster_1)) <<(LED1_PORT-T1_PORT)) | (P2&~LED_1);
		P2 = (((((P2&Schalter_2)^Schalter_2)>>(S2_PORT-T2_PORT))|(P2&Taster_1)) <<(LED2_PORT-T2_PORT)) | (P2&~LED_2);
		// 1. Prüfen, ob Schalter aktiv ist 
		// 2. (ACHTUNG: High Active) Bit muss umgeschaltet (XOR toggle) werden
		// 3.	Ereignis zur Bitposition vom Taster schieben
		// 4. Prüfen, ob Taster aktiv ist. LED darf an, falls die zugehoerige Taste auch aktiv (Low Active!) ist
		// 5.	Ereignis nach der Bitposition vom LED schieben
		// 6. Alte LED Bit löschen und neues Ereignis einsetzen
		// 7. Profit
	}
}