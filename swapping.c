#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Two no's:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The two no's after swapping are:%d%d",a,b);
}
