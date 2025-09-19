#include <stdio.h>
int main()
{

    int a, b;

    printf("enter a no");
    scanf(" %d", &a);
    printf("enter a no");
    scanf(" %d", &b);

    a = b;
    b = a;
    printf("a= %d\n", b);
    printf("b= %d\n", a);

    return 0;
}