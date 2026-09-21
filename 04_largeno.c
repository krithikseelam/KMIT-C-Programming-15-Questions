#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("enter value a,b,c\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b && a>c){
		printf("a is the largest which is %d",a);
	}
	else if (b>c){
		printf("max value is b which is %d",b);
	}
	else{
		printf("max value is c which is %d",c);
	}
    
}
