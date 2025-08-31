//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
	int a,b,sum,sub,mul;
	double div;
	printf("enter number a");
	scanf("%d",&a);
	printf("enter number b");
	scanf("%d",&b);
	div=(float) a/b;
	printf("sum of two no are%d\n",sum=a+b);
	printf("sub of two no are%\n",sub=a-b);
	printf("mul of two no are %d\n",mul=a*b);
	printf("div of two no are%lf\n",div);
	return 0; 
	
}

