#include <stdio.h>
int main()
{

    int a, b;
    printf("enter a no");
    scanf(" %d", &a);
    printf("enter a no");
    scanf(" %d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a= %d\n", a);
    printf("b= %d\n", b);

    return 0;
}
