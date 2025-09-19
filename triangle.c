#include <stdio.h>
int main()
{

    int n, g, a, d;

    printf("enter gross salary:");
    scanf(" %d", &g);
    a = g * 10 / 100;
    d = g * 3 / 100;

    n = g + a - d;
    printf(" net salary= %d\n", n);

    return 0;
}
