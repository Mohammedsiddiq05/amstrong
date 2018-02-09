#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number:");
scanf("%d",&a);
a=b;
while(b!=0)
{
c=b%10;
d+=c*c*c;
b/=10;
}
if(d==a)
{
printf("the number %d is amstrong",a);
}
else
{
printf("\n the number %d is not an amstrong number");
}
return 0;
}
