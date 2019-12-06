//read the two numbers as input and print the output as the numbers which is perfectly divisiblew by 3 and 5
#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	while(n1<=n2)
	{
		if(n1%3==0&&n1%5==0)
		{
			printf("%d  ",n1);
		}
		n1++;
	}
	return 0;
}
