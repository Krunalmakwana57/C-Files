#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Value of a is : %d value of b is : %d\n",a,b);
	a=a+b;//5+10=15
	b=a-b;//15-10=5
	a=a-b;//15-5=10
	printf("After swaping\nvalue of a is : %d value of b is : %d",a,b);
	return 0;
}