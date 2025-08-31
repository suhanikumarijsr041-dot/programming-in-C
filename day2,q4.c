//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#define PI 3.14
int main(){
	float radius,area,circumference;
	printf("enter radius ");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circumference=2*PI*radius;
	printf("\narea of circle=%.2f",area);
	printf("\ncircumference of circle=%.2f",circumference);
	return 0;
	
}


