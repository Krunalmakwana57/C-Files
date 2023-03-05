#include<stdio.h>
#include<string.h>
#define PI 3.14
//Union
//We can give value to only one variable and print it 
//if we give more than one variable values it will give garbage value
//but in structure we can give every single member value at the same time
int main()
{
	//printf("%f",PI);
	union Cars{
		int Car_amt;
		char Car_name[20];
		int Num_of_gears;
		float Horse_power;
	};	
	
	union Cars Car1;
	
//	Car1.Car_amt=120000;
//	Car1.Car_name[20]="Audi";
	strcpy(Car1.Car_name,"Audi");
//	Car1.Num_of_gears=5;
//	Car1.Horse_power=250.35;
	
	printf("%s",Car1.Car_name);
	
	return 0;
}