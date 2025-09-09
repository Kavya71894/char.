#include<stdio.h>
float main()
{
    float minutes;
    printf("Please Enter Hours");
    scanf("%f", &minutes);
    float hours=minutes/60;
    printf("%f Minutes",hours);
    return 0;
}