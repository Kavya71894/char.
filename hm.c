#include<stdio.h>
int main()
{
    int hours;
    printf("Please Enter Hours");
    scanf("%d", &hours);
    int minutes=hours*60;
    printf("%d Minutes",minutes);
    return 0;
}