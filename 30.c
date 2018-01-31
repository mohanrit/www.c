#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter the hours");
    scanf("%d",&a);
    printf("enter the minute");
    scanf("%d",&b);
    printf("enter the hour ");
    scanf("%d",&c);
    printf("enter minute:");
    scanf("%d",&d);
    e=a*60+b;
    f=c*60+d;
    if(e<f)
    {
        a=f-e;
        printf("%d",a);
    }
    else
    {
        a=e-f;
        printf("%d",a);
    }
}
