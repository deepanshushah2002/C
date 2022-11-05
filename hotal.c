#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int a=177,n,g,h,j,b,e,f,c,d,i;
char x[20];
clrscr();
gotoxy(35,13);
printf("Loading...");
gotoxy(31,14);
for(i=0;i<16;i++)
{
delay(100);
printf("%c",a);
}
clrscr();
gotoxy(27,13);
printf("Welcome to INDIAN Hotal");
delay(2000);
clrscr();
gotoxy(35,13);
printf("Customer Name\n");
scanf("%s",x);
gotoxy(35,15);
printf("Enter Your ID\n");
scanf("%d",&b);
if(1234==b)
{
clrscr();
gotoxy(35,13);
printf("Food Menu\n\n");
printf("1.Tea=50\n2.Bread=40\n3.Sandwich=50\n4.Samosa=20\n");
scanf("%d",&c);
switch(c)
{
case 1:
printf("Enter Your Quantity\n");
scanf("%d",&d);
e=d*50;
break;
case 2:
printf("Enter Your Quantity\n");
scanf("%d",&g);
e=g*40;
break;
case 3:
printf("Enter Your Quantity\n");
scanf("%d",&h);
e=h*50;
break;
case 4:
printf("Enter Your Quantity\n");
scanf("%d",&j);
e=j*20;
break;
}
clrscr();
gotoxy(34,13);
printf("Your Bill\n");
printf("Hello %s\n",x);
f=2500+e;
printf("Your Order=%d\nRoom Bill=2500\n\nTotal Amount=%d",e,f);
}
else
{
clrscr();
gotoxy(34,13);
printf("Wrong Id");
}
getch();
}