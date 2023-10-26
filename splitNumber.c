#include<stdio.h>

void splitNum(double num, int *int_part, double *frac_part){
	*int_part = (int)num;
	*frac_part = num - *int_part;
}

int main(void){
	int integer;
	double number, fraction;
	printf("please enter number: ");
	scanf("%lf", &number);
	splitNum(number, &integer, &fraction);
	printf("integer part is: %d\n", integer);
	printf("fraction part is: %lf", fraction);
}
