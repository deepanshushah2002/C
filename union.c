#include<stdio.h>
void initArray(int *p, int n);
int unionOfArray(int *, int *, int *, int, int);
void display(int *, int);
int main()
{
int n, n1, n2;
printf("Enter Number of Elements in 1st Array : ");
scanf("%d", &n1);
int a1[n1];
initArray(a1, n1);
printf("Enter Number of Elements in 2nd Array : ");
scanf("%d", &n2);
int a2[n2];
int result[n1+n2];
initArray(a2, n2);
n = unionOfArray(a1, a2, result, n1, n2);
display(a1, n1);
display(a2, n2);
display(result, n);
return 0;
}
void initArray(int *p, int n)
{
puts("Enter Elements of Array :-");
for (int i = 0; i < n; i++)
{
printf("Enter %d Element : ", i+1);
scanf("%d", p+i);
}
puts("");
}
int unionOfArray(int *a1, int *a2, int *r, int n1, int n2)
{
int j, n = 0;
for (int i = 0; i < n1; i++)
{
*(r+n++) = *(a1+i);
}
for (int i = 0; i < n2; i++)
{
for (j = 0; j < n1; j++)
{
if (*(a2+i) == *(a1+j))
{
break;
} 
}
if (j == n1)
{
*(r+n++) = *(a2+i);
} 
}
return n;
}
void display(int *p, int n)
{
printf("\nElements of Array : ");
for (int i = 0; i < n; i++)
{
printf("%d ", *(p+i));
}
puts("\n");
}