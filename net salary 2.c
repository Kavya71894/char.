#include <stdio.h>
int main()
{

    int a, b, c, t, avg;

    printf("first subject");
    scanf(" %d", &a);
    printf("second subject");
    scanf(" %d", &b);

    printf("third subject");
    scanf(" %d", &c);
    t = a + b + c;
    avg = a + b + c / 3;

    printf(" total= %d\n", t);

    return 0;
}
