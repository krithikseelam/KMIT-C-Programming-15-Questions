#include <stdio.h>

int main(){
    float speed;
    printf("Enter your speed in km/h: ");
    scanf("%f", &speed);
    if (speed <= 60) {
        printf("No fine. You are within the speed limit.\n");
    } else if (speed > 60 && speed <= 80) {
        printf("You are fined ₹500 for exceeding the speed limit.\n");
    } else if (speed > 80 && speed <= 100) {
        printf("You are fined ₹1000 for exceeding the speed limit.\n");
    } else {
        printf("You are fined ₹2000 for exceeding the speed limit.\n");
    }
    return 0;
}