#include <stdio.h>

int main(){
    int temp;
    printf("enter temp in celsius:\n");
    scanf("%d",&temp);
    if (temp < 0 ){
        printf("very cold");
    }
    else if (temp>=10 && temp<20){
        printf("cold");
    }
    else if (temp>=20 && temp<30){
        printf("pleasant");
    }
    else if (temp>=30 && temp<40){
        printf("hot");
    }
    else{
        printf("very hot");
    }
    return 0;   
}