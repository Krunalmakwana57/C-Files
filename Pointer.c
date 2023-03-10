#include<stdio.h>
#include<stdbool.h>
int main(){
	int a=10;//A pointer is a variable that contains the memory address of another variable
	int *p=&a;
//	bool Ismarried=true;
	
//	printf("%d",Ismarried);
	printf("%x",p);
	
	return 0;
}