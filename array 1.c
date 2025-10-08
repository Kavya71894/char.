#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the 4th,7th and 9th number\n");
    printf("%d\n",a[3]);
    printf("%d\n",a[6]);
    printf("%d\n",a[8]);
    
    return 0;
}