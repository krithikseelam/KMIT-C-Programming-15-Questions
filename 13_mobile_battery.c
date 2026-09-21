#include <stdio.h>

int main(){
    int battery;
    printf("Enter battery level (0-100): ");
    scanf("%d", &battery);
    if (battery < 0 || battery > 100) {
        printf("Invalid battery level is this a joke?\n");
    }

    else if (battery <= 10 && battery >= 0) {
        printf("Critical - Charge immediately.\n");
    } 
    else if (battery <= 25 ){
        printf("Low Battery.\n");
    } 
    else if (battery <= 50) {
        printf("Battery Medium.\n");
    } 
    else if (battery <= 80) {
        printf("Battery Good.\n");
    }
    else if (battery <= 100) {
        printf("Battery Excellent.\n");
    } 
    return 0;
}