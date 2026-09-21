#include <stdio.h>

int main(){
    int total_bill;
    printf("Enter your bill: ");
    scanf("%d", &total_bill);
    printf("Your original bill is: %d\n", total_bill);
    if (total_bill >= 5000) {
        printf("You have got 20%% discount.\n");
        printf("Your bill after discount is: %d\n", total_bill - (total_bill * 20 / 100));
    } 
    else if (total_bill >= 2000 && total_bill < 5000) {
        printf("You have got 15%% discount.\n");
        printf("Your bill after discount is: %d\n", total_bill - (total_bill * 15 / 100));
    } 
    else if (total_bill >= 1000 && total_bill < 2000) {
        printf("You have got 10%% discount.\n");
        printf("Your bill after discount is: %d\n", total_bill - (total_bill * 10 / 100));
    }
    else if (total_bill >= 500 && total_bill < 1000) {
        printf("You have got 5%% discount.\n");
        printf("Your bill after discount is: %d\n", total_bill - (total_bill * 5 / 100));
    } 
    else if (total_bill < 500 && total_bill > 0) {
        printf("You will get no discount You are poor.\n");
        printf("Your bill after discount is: %d\n", total_bill);
    }
    else {
        printf("Invalid bill amount should we give a discount?\n");
    }
    return 0;
}