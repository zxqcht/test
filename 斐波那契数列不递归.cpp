#include <stdio.h>
int fib(int n)
{
	int a=1;
	int b=1;
	int c=0;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
 } 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("%d",fib(n));
 }
