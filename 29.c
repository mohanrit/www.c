#include<stdio.h>
void main()
{
    int min,a,b;
    printf("enter the time");
    scanf("%d",&min);
    a=min/60;
    //printf("%d",a);
    b=min%60;
    printf("%d %d",a,b);
}
