#include<stdio.h>
int main()
{
int base,exponent,result=1;
printf("Enter the base number");
scanf("%d",&base);
printf("Enter the exponent number");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponet;
}
printf("answer=%d",result);
return 0;
}

