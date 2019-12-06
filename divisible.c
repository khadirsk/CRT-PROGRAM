//read the number as input and check whether it is perfectly divisible by 3 and 5 or not
// test cases : 15--yes
//				12-no
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
	{
		printf("perfectlu divisible");
		
	}
	else{
		printf("not divisible");
	}
	return 0;
}
