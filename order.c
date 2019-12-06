//read the input as  number and print the output in the following order
//test cases:
//1889-nine eight eight one
#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
	switch(r)
	{
		case 0: printf("zer0 ");
		break;
		case 1: printf("one ");
		break;
		case 2: printf("two ");
		break;
		case 3: printf("three ");
		break;
		case 4: printf("four ");
		break;
		case 5: printf("five ");
		break;
		case 6: printf("six ");
		break;
		case 7: printf("seven ");
		break;
		case 8: printf("eight ");
		break;
		case 9: printf("nine ");
		break;
	}
		n=n/10;
			}
	return 0;
}
