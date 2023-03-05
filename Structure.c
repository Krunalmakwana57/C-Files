#include<stdio.h>
//Structure
int main(){
	struct Cars{
		int car_value;
		char car_name[20];
		char car_model[10];
		float horse_power;
	};
	struct Cars car1;
	car1.car_value=100000;
	car1.car_name[20]="BMW";
	car1.car_model[10]="X1";
	car1.horse_power=500.25;
	printf("Enter Car value : ");
	scanf("%d",&car1.car_value);
	printf("You entered : %d",car1.car_value);
	printf("%f",car1.horse_power);
	
	
		
	return 0;
}