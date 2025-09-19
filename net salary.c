#include <stdio.h>
int main()
{

    int n, g, d;

    printf("enter gross salary:");
    scanf(" %d", &g);

    d = g * 10 / 100;

    n = g - d;
    printf(" net salary= %d\n", n);

    return 0;
}