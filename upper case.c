#include<stdio.h> 
//A-65 to 90
//a-97 to 122
//48 to 57 -digit character
int main()
{
	char x;
	scanf("%c",&x);
	if(x>=65&&x<=90)
	{
		printf("upper case");
	}
	else if(x>=97&&x<=122)
	{
		printf("lower case");
		
	}
	else{
		printf("digit character");
	}
}
