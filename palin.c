#include<stdio.h>
int main()
{
int n,a=0,b,c;
printf("Enter the integer");
scanf("%d",&n);
c=n;
while(n!=0)
{
b=n%10;
a=a*10+b;
n/10=0;
}
if(c==a)
printf("%d is palindrome",c);
else
printf("%d is not a palindrome",c);
return 0;
}

