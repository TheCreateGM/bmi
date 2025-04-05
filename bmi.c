/*
made by AxoGM
*/

#include <stdio.h>

// calculate bmi
int main()
{
	// input
	double w; // weight (kg)
	double h; // height (m)
	double bmi;

	printf("enter weight (kg): ");
	scanf("%lf", &w); // input weight

	printf("enter height (m): ");
	scanf("%lf", &h); // input height

	// process
	bmi = (w / (h * h));

	// output
	printf("%lf", bmi);

	return 0;
}
