#include<stdio.h>
int main()
{
	double s,h,w;
	printf("Please enter your height (in meters):\n");
	scanf("%lf",&h);
	printf("Please enter your weight (in kilograms):\n");
	scanf("%lf",&w);
	s=w/(h*h);
	printf("Your BMI is %.2lf\n",s);
	printf("\n");
	printf("BMI VALUES \n");
	printf("Underweight:    less than 18.5\n");
	printf("Normal:         between 18.5 and 24.9\n");
	printf("Overweight:     between 25 and 29.9\n");
	printf("Obese:          30 or greater\n");
	return 0;
}
