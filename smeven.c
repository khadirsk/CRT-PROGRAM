//read the number as input as input and print the output as sum of even digits in the number
#include<stdio.h>
int main()
{
	int n,r,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			s=s+r;
		}
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
