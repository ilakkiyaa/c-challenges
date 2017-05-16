#include<stdio.h>
int main()
{
int n,sum,i=0;
printf("enter the integer ");
scanf("%d",&n);
sum=n;
while(sum!=0)
{
sum=sum/10;
++i;
}
printf("number og digits in integer %d",i);
}
