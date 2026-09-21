#include<stdio.h>

int main(){
	int number;	
	printf("give me a number\n");
	scanf("%d",&number);
	if (number == 0){
		printf("your number is 0");
	}
	else if(number < 0 ){
		printf("%d is a negative number",number);
	}	
	else{
		printf("%d is a positive number",number);
	}

}

