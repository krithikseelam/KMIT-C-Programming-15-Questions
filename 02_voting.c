#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age <= 0){
		printf("you are not even born man or girl?");
	}
	else if(age >= 18){
		printf("you eligible for voting");
	}
	else{
		printf("you are not eligible for voting");
	}
}
