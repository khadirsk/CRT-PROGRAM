//read the number as input and print the output as digits of number
#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
	}
	return 0;
}
