#include<stdio.h>
int main()
{
	int choice;
	char alp;
	printf("We'll check the entered alphabet is vowel or consonent\n");
	printf("Please Enter An Alphabet : ");
	scanf("%c",&alp);
	if(alp>='A' && alp<='Z' || alp>='a' && alp<='z')
	{
		switch(alp)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':printf("%c is vowel",alp);
			break;
			default:printf("%c is consonant",alp);	
		}
	}
	else{
		printf("%c is not an alphabet",alp);
	}
	
	
	
	return 0;
}