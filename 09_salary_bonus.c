#include <stdio.h>

int main(){
    int years_of_service;
    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);
    if(years_of_service<1){
        printf("You will not get any bonus");
    }
    else if(years_of_service>=1 && years_of_service<=3){
        printf("You will get a bonus of 5%% of your salary");
    }
    else if(years_of_service>=4 && years_of_service<=6){
        printf("You will get a bonus of 10%% of your salary");
    }
    else if(years_of_service>6 ){
        printf("You will get a bonus of 15%% of your salary");
    }

    return 0;
}