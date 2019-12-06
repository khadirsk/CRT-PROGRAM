//read the three angles as input and check these anfles can be able to construct triangle or not
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180&&a!=0&&b!=0&&c!=0)
	{
		printf("triangle is possible");
		
	}
	else
	{
		printf("triangle not possible");
	}
	return 0;
}
