#ifndef HARDWARE_H_
#define HARDWARE_H_

#define P2 (*((volatile  unsigned short *) 0xFFC0))
#define DP2 (*((volatile  unsigned short *) 0xFFC2))
	
#define T1_PORT	0
#define T2_PORT	1
#define S1_PORT	2
#define S2_PORT	3
#define LED1_PORT	4
#define LED2_PORT	5
#define LED3_PORT	6

#define Taster_1 (1<<T1_PORT)
#define Taster_2 (1<<T2_PORT)
#define Schalter_1 (1<<S1_PORT)
#define Schalter_2 (1<<S2_PORT)
#define LED_1 (1<<LED1_PORT)
#define LED_2 (1<<LED2_PORT)
#define LED_3 (1<<LED3_PORT)

#endif
