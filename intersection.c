#include <stdio.h>
void initArray(int *, int);
void display(int *, int);
int intersection(int *, int *, int *, int, int);
int main()
{
    int n1, n2, n;
    printf("Enter Number of Elements in Set 1 :");
    scanf("%d", &n1);
    int set1[n1];
    initArray(set1, n1);
    printf("Enter Number of Elements in Set 2 :");
    scanf("%d", &n2);
    int set2[n2];
    initArray(set2, n2);
    int common[n1 < n2 ? n1 : n2];
    n = intersection(set1, set2, common, n1, n2);
    display(set1, n1);
    display(set2, n2);
    display(common, n);
    return 0;
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
    printf("Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    puts("");
}
int intersection(int *a1, int *a2, int *r, int n1, int n2)
{
    int j, i, n = 0;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (*(a1 + i) == *(a2 + j))
            {
                *(r + n++) = *(a1 + i);
            }
        }
    }
    return n;
}