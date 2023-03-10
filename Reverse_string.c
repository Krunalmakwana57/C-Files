#include<stdio.h>
#include<string.h>

int main(){
	char str[]="HelloWorld!";
	
//	printf("%s",str);
	for(int i=5;i>=0;i--){
		printf("%c",str[i]);
	}
	
	return 0;
}