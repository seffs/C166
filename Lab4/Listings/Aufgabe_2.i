
#line 1 "Aufgabe_2.c" 
  
#line 1 "hardware.h" 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
#line 1 "Aufgabe_2.c" 
 
 
 void portInit(){
 
  (*((volatile unsigned short *) 0xFFC2)) = 0x0;
  (*((volatile unsigned short *) 0xFFC2)) |= (1<<4);
  (*((volatile unsigned short *) 0xFFC2)) |= (1<<5);
  (*((volatile unsigned short *) 0xFFC2)) |= (1<<6);
 
 }
 
 void main(void) 
 {
 portInit();
 
 while(1) {
  (*((volatile unsigned short *) 0xFFC0)) = (((*((volatile unsigned short *) 0xFFC0))&(1<<0))<<(4-0))|((*((volatile unsigned short *) 0xFFC0))&~(1<<4));
  (*((volatile unsigned short *) 0xFFC0)) = (((*((volatile unsigned short *) 0xFFC0))&(1<<1))<<(5-1))|((*((volatile unsigned short *) 0xFFC0))&~(1<<5));
 
 
 
 }
 }
