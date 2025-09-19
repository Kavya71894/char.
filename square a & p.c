#include <stdio.h>
int main()
{

    int n, c, f;

    printf("side of the square:");
    scanf(" %d", &n);
    c = n * n;
    f = n * 4;
    printf(" area = %d\n", c);

    printf("perimeter = %d\n", f);

    return 0;
}
