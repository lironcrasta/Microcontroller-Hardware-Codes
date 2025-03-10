#include <reg51.h>
#define LED P0
sbit SW1=P1^0;
void delay(unsigned int);
void main()
{
unsigned char ch[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int i;
LED=0x00;
SW1=0;
while(1){
for (i=0;i<10;i++){
LED=ch[i];
delay (250);
}
}
}
void delay (unsigned int d)
{ 
unsigned int i,j;
for (i=0;i<d;i++)
for (j=0;j<1275;j++);
}