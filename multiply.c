#include <stdio.h>
int main()
{
int n, term, i;
printf("Enter a number to print multiplication table\n");
scanf("%d",&n);
printf("Enter number of terms in table\n");
scanf("%d",&term);
for(i = 1; i <= term; ++i)
{
printf("%d X %d = %d\n", n, i, n*i);
}
}
