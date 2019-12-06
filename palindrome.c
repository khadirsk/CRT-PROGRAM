//read the number as input and print whether it bis palindrome or not
#include<stdio.h>
int main()
{
	int n,r,i,reverse=0;
	
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
		if(i==reverse)
		{
			printf("plaindrome");
		}
		else
		{
			printf("not a plaindrome");
		}
		
	
}
