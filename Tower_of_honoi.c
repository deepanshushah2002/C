#include <stdio.h>
void tower(int, char, char, char);
void main()
{
    int n;
    printf("\n how many disk");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    getch();
}
void tower(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        printf("\n shift disk 1 form %c to %c", from, to);
        return;
    }
    tower(n - 1, from, to, aux);
    printf("\n shift disk %d form %c to %c", n - 1, from, to);
    tower(n - 1, aux, from, to);
}