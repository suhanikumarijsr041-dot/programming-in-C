//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
	int n,sum;
	printf("enter n:");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("sum=%d",sum);
	return 0;
}

