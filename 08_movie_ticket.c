#include <stdio.h>

int main(){
    int age, price;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 5){
        price = 0;
    }
    else if (age >= 5 && age <= 12){
        price = 100;
    }
    else if (age >= 13 && age <= 59){
        price = 200;
    }
    else{
        price = 120;
    }
    printf("Your movie ticket price is: ₹%d", price);
    return 0;
}