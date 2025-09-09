#include<stdio.h>
int main()
{
    int byte;
    printf("Please Enter byte");
    scanf("%d", &byte);
    int MB=byte*1000000;
    printf("%d MB",MB);
    return 0;

}