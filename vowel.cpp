//read the input as character and print the output as whether it is vowel or consonant
#include<stdio.h>
int main ()
{
	char x;scanf("%c",&x);
	if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u')
	{
		printf("vowels");
	}
	else
	{
		printf("consonants");
		
	}
	return 0;
}

