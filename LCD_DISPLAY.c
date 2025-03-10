#include<reg51.h>
#define LCD_DATA P2
sbit rs=P3^7;
sbit rw=P3^6;
sbit en=P3^5;
void main()
{
void lcdcmd(unsigned char value); /* function call for command */
void lcddata (unsigned char value); /* function call for data */
void delay(unsigned int d); /* function call for delay */
lcdcmd(0x3C); /* Activate second line */
delay(250);
lcdcmd(0x0E); /* cursor blinking off ,display on
delay(250);
lcdcmd(0x06); /* increment cursor*/
delay(250);
lcdcmd(0x01); /*clear display*/
delay(250);
lcddata('N');
delay(250);
lcddata('M');
delay(250);
lcddata('A');
delay(250);
lcddata('M');
delay(250);
lcddata('I');
delay(250);
lcddata('T');
delay(250);
}
void lcdcmd(unsigned char value)
{
LCD_DATA=value;
rs=0;
rw=0;
en=1;
delay(1);
en=0;
}
void lcddata(unsigned char value)
{
LCD_DATA=value;
rs=1;
rw=0;
en=1;
delay(1);
en=0;
}
void delay(unsigned int d)
{
unsigned int i, j;
for(i=0;i<d;i++)
for(j=0;j<1275;j++);
}