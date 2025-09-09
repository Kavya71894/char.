#include<stdio.h>
int main()
{
    int byte;
    printf("Please Enter byte");
    scanf("%d", &byte);
    int GB=byte*1000000000;
    printf("%d GB",GB);
    return 0;

}