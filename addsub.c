#include<stdio.h>
int main(){
	int A,B;
	printf("Enter numbers A,B\n");
	scanf("%d,%d",&A,&B);
	printf("%d + %d = %d\n",A,B,A+B);
	printf("%d - %d = %d\n",A,B,A-B);
	printf("%d X %d = %d\n",A,B,A*B);
	printf("The Quotient of %d and %d is %d\n",A,B,A%B);
}
