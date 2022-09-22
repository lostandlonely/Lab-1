#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("a=");
    scanf_s("%d", &a);
    printf("b=");
    scanf_s("%d", &b);
    printf("c=");
    scanf_s("%d", &c);
    if ((a >= b) && (a >= c))
        printf("d = %d", a);
    else if ((b >= a) && (b >= c))
    {
        d = b;
        printf("d = %d", d);
    }
    else
    {
        d = c;
        printf("d = %d", d);
    }
    return 0;
}
