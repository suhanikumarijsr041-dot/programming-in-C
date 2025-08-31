//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
int main(){
	float length,breadth,area,perimeter;
	printf("enter length of rectangle:");
	scanf("%f",&length);
	printf("enter breadth of rectangle:");
	scanf("%f",&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("\narea of rectangle=%.2f",area);
	printf("\nperimeter of rectangle=%.2f",perimeter);
	return 0;
}
