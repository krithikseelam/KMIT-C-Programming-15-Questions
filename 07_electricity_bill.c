#include <stdio.h>

int main(){
    float no_of_units,bill_amount;
    printf("Enter no of units consumed: ");
    scanf("%f",&no_of_units);
    if(no_of_units<=100){
        bill_amount=no_of_units*2;
    }
    else if(no_of_units>100 && no_of_units<=200){
        bill_amount=100*2+(no_of_units-100)*3;
    }
    else if(no_of_units>200 && no_of_units<=300){
        bill_amount=100*2+100*3+(no_of_units-200)*5;
    }
    else{
        bill_amount=100*2+100*3+100*5+(no_of_units-300)*8;
    }
    printf("Your electricity bill is: ₹%.2f", bill_amount);
    return 0;
}