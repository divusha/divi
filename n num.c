#include<stdio.h>
int main()
{
printf("\n Enter the integer value\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
sum=sum+i;
}
printf("sum of natural numbers=%d",sum);
return 0;
}
