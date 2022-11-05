#include<stdio.h>
#include<conio.h>
void main()
{
int i,max=0,min=0,n;
printf("Enter a Number\n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{
if(max<=arr[i])
max=arr[i];
if(min>=arr[i])
min=arr[i];
}
printf("Maximum=%d & Minimum=%d",max,min);
getch();
}