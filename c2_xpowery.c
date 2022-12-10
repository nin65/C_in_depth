//E_6_57
//find value of x raised to power y, x and y both positive integers

#include<stdio.h>
#include<stdint.h>

uint32_t power_cal(uint8_t,uint8_t);

int main(void)
{
	uint8_t x,y;
	printf("Find x raised to the power y\n");

	printf("Enter positive integer x:");
	scanf("%hhd",&x);

	printf("Enter positive integer y:");
	scanf("%hhd",&y);

	printf("%hhd^%hhd=%d\n",x,y,power_cal(x,y));

	
	return 0;

}


uint32_t power_cal(uint8_t a,uint8_t b)
{
	uint32_t final=1;
	for(uint8_t i=1;i<=b;i++)
	{
		final=final*a;
	}
	return final;

}









