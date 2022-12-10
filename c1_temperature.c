//converts celsius into fahrenheit
#include<stdio.h>
int main(void)
{
	float celsius,fahrenheit;

	printf("Celsius to Fahrenheit conversion\n");
	
	printf("Enter temperature in degree celsius:");
	scanf("%f",&celsius);

	fahrenheit=((celsius*9)/5.0)+32;

	printf("Temperature in fahrenheit is:%.2f\n",fahrenheit);

	return 0;

}


	


