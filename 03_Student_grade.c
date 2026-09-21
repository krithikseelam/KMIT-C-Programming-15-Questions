#include<stdio.h>
int main(){
	int marks;
	printf("enter your marks\n");
	scanf("%d",&marks);
        if (marks > 100 || marks <0){
                printf("give a valid marks");
        }

	else if (marks >= 90){
		printf("Grade A+");
	}
	else if (marks < 90 && marks >=80){
		printf("Grade A");
	}
	else if (marks < 80 && marks >= 70){
		printf("Grade B");
	}
	else if (marks < 70 && marks >= 60){
        printf("Grade C");
    }	
    else if (marks < 60 && marks >= 50){
        printf("Grade D");
    }
    else if (marks < 50 && marks >= 40){
        printf("Grade E");
    }
	else{
		printf("FAILED!!");
	}


	return 0;
}
