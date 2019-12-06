//read the input as number and print the output in the following manner
//98254--<2,9>
//57415--<1,7>
#include<stdio.h>
int main()
{
	int n,r,l=0,s=9;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(l<r)
		{
			l=r;
		}
		if(s>r)
		{
			s=r;		
		}
		n=n/10;
	}
	printf("< %d, %d>",s,l);
	return 0;
}
