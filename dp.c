#include<stdio.h>
float main()
{
    float dollar;
    printf("Please Enter dollar");
    scanf("%f", &dollar);
    float pounds=dollar/1.32;
    printf("%f pounds",pounds);
    return 0;
}