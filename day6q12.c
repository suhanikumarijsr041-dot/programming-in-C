//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
	int num;
	printf("enter an integer :");
	scanf("%d",&num);
	if(num>=0){
		if(num==0){
			printf("the first is zero.\n");
			
		}else{
			printf("the number is positive.\n");
		}
		}else{
			printf("the number is negative.\n");
		
	}
	return 0;
	
}


