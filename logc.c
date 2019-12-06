//read the input as a number and print the output in following mannber
// test cases:
// 1889--5,666--3,4756---3,1591--1
#include<stdio.h>
int main()
{
	int n,r,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r==8)
		{
			s=s+2;
		}
		else if(r==0||r==6||r==9)
		{
			s=s+1;
		}
		else if(r==4)
		{
			s=s+2;
		}
		n=n/10;
	
	}
	printf("%d",s);
	return 0;

}
