#include <stdio.h>
void initArray(int *p, int n);
int unionOfArray(int *, int *, int *, int, int);
void display(int *, int);
int intersection(int *, int *, int *, int, int);
int difference(int *, int *, int *, int, int);
int main()
{
    int n, n1, n2, n3;
    printf("Enter Number of Elements in Set 1 : ");
    scanf("%d", &n1);
    int set1[n1];
    initArray(set1, n1);
    printf("Enter Number of Elements in Set 2 : ");
    scanf("%d", &n2);
    int set2[n2];
    initArray(set2, n2);
    int Union[n1 + n2];
    n = unionOfArray(set1, set2, Union, n1, n2);
    int result[n - n1];
    int inter[n1 > n2 ? n2 : n1];
    n3 = intersection(set1, set2, inter, n1, n2);
    n = difference(Union, inter, result, n, n3);
    display(result, n);
    return 0;
}
int unionOfArray(int *a1, int *a2, int *r, int n1, int n2)
{
    int j, n = 0;
    for (int i = 0; i < n1; i++)
    {
        *(r + n++) = *(a1 + i);
    }
    for (int i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (*(a2 + i) == *(a1 + j))
            {
                break;
            }
        }
        if (j == n1)
        {
            *(r + n++) = *(a2 + i);
        }
    }
    return n;
}
void initArray(int *p, int n)
{
    puts("Enter Elements of Array :-");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", p + i);
    }
    puts("");
}
void display(int *p, int n)
{
    printf("\nElements of Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    puts("\n");
}
int intersection(int *a1, int *a2, int *r, int n1, int n2)
{
    int j, n = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (*(a1 + i) == *(a2 + j))
            {
                *(r + n++) = *(a1 + i);
            }
        }
    }
    return n;
}
int difference(int *a1, int *a2, int *r, int n1, int n2)
{
    int n = 0, j;
    for (int i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (*(a1 + i) == *(a2 + j))
            {
                break;
            }
        }
        if (j == n2)
        {
            *(r + n++) = *(a1 + i);
        }
    }
    return 0;
}