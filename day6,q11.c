//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
	int a;
	printf("enter an integer:");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d is even.\n",a);
		
	}else{
		printf("%d is odd.\n",a);
	}
	return 0;
	
}

