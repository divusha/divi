#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
if(n>0)
{
printf("%d is positive",n);
}
else if(n<0)
{
printf("%d is negative",n);
}
else(n==0)
{
printf("%d is zero",n);
}
return 0;
}
