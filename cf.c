#include<stdio.h>
int main()
{
    int celcius;
    printf("Please Enter celcius");
    scanf("%d", &celcius);
    int fahrenheit=(9/5*celcius)+32;
    printf("%d fahrenheit",fahrenheit);
    return 0;

}