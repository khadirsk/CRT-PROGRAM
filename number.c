//read  the two numbers as input and print the output as square of second number if first number is greater and vice versa
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		
		printf("%d",b*b);
    }else{
		
		printf("%d",a*a);
	}	
}

