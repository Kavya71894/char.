#include<stdio.h>
int main()
{
    int num[5];
    int i,j,m;
printf("Enter any 5 numbers\n");
for(int i=0;i<5;i++)
{
    printf("Enter number %d",i+1);
    scanf("%d",&num[i]);
}
for(i=0;i<4;i++)
{
    for(j=0;j<4-i;j++)
    {
        if(num[j]>num[j+1])
        {
            m=num[j];
            num[j]=num[j+1];
            num[j+1]=m;
        }
    }
}
printf("\nThe number in ascending order are\n");
for(int i=0;i<5;i++)
{
    printf("%d\n",num[i]);
}
return 0;
}