//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap:%d%d",a,b);
	return 0;
}
