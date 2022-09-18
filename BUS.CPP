#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
  int a,i,d,e,f,g,h,j,l,k=176;
  char b[20],c[20];
  clrscr();
  textbackground(YELLOW);
  for(i=24;i>8;i--)
{
  clrscr();
  gotoxy(30,i);
  printf("Welcome To Indian Bus");
  delay(150);
}
  for(i=28;i>18;i--)
{
  gotoxy(i,9);
  printf("%c",k);
  delay(150);
}
  for(i=52;i<62;i++)
{
  gotoxy(i,9);
  printf("%c",k);
  delay(150);
}
  printf("\n\n\n1.Bus Booking\n");
  delay(250);
  printf("2.Bus Cancel\n");
  delay(250);
  printf("3.Problem\n");
  scanf("%d",&a);
  clrscr();
  gotoxy(34,13);
  switch(a)
{
   case 1:
{
    printf("Enter Your Name\n");
    scanf("%s",&b);
    gotoxy(34,15);
    printf("Enter Your Destine\n");
    scanf("%s",&c);
    gotoxy(34,17);
    printf("Enter Your Date\n");
    scanf("%d%d%d",&d,&j,&l);
    clrscr();
    gotoxy(1,14);
    printf("1.For AC\n");
    delay(250);
    printf("2.Sleeper\n");
    scanf("%d",&e);
    switch(e)
{
     case 1:
{
      clrscr();
      gotoxy(2,14);
      printf("Ticket=2500\nNumber of person=");
      scanf("%d",&f);
      g=f*2500;
      delay(1000);
      clrscr();
      gotoxy(34,13);
      printf("Your Bill\n");
      printf("Hello %s\n\nTicket Rate=2500\nYour Date=%d-%d-%d\nNumber of Person=%d\n\nTotal bill=%d",b,j,l,d,f,g);
}
     case 2:
{
      clrscr();
      gotoxy(2,14);
      printf("Ticket=1000\nNumber of person=");
      scanf("%d",&f);
      g=f*1000;
      clrscr();
      gotoxy(34,13);
      printf("Your Bill\n");
      printf("Hello %s\n\nTicket Rate=1000\nYour Date=%d-%d-%d\nNumber of Person=%d\n\nTotal bill=%d",b,j,l,d,f,g);
      delay(2000);
}}}
     case 2:
{
      clrscr();
      gotoxy(34,13);
      printf("Bus Cancel\n");
      printf("Enter ID\n");
      scanf("%d",&h);
      if (1234==h)
{
      clrscr();
      gotoxy(30,14);
      printf("Sucessfull Refund");
}
     else
{
      clrscr();
      gotoxy(30,14);
      printf("Wrong ID");
}}}
      getch();
}