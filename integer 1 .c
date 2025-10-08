#include<stdio.h>
int main()
{
    int x = 50;
    int * xptr = &x;
    printf("value of x=%d\n",x);
    printf("address of x=%u\n",&x);
    printf("address of x=%u\n",&xptr);
    printf("value of x=%d\n",*xptr);
return 0;
}
