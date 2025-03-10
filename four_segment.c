#include <reg51.h>
#define LED P0
sbit SW1=P1^0;
sbit SW2=P1^1;
sbit SW3=P1^2;
sbit SW4=P1^3;
void delay(unsigned int);
void main()
{
unsigned char ch[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x7F,0x6F};
while (1){
unsigned int i;
LED=0x00;
for (i=1;i<5;i++){
if (i==1){
SW1=0;
LED=ch[i];
delay (1);
SW1=1;
}
else if (i==2){
SW2=0;
LED=ch[i];
delay (1);
SW2=1;
}
else if (i==3){
SW3=0;
LED=ch[i];
delay (1);
SW3=1;
}
else{
SW4=0;
LED=ch[i];
delay (1);
SW4=1;
}
}
}
}
void delay (unsigned int d)
{
unsigned int i,j;
for (i=0;i<d;i++)
for (j=0;j<1275;j++);
}