//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter first no:");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping:\n")l;
	printf("first number=%d\n",a);
	printf("second number=%d\n",b);
	return 0;
	
}
