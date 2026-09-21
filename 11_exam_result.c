#include <stdio.h>

int main(){
    int maths, physics, chemistry;
    float average;
    printf("Enter marks of Maths, Physics, Chemistry: ");
    scanf("%d,%d,%d", &maths, &physics, &chemistry);
    average = (maths + physics + chemistry) / 3.0;
    if (maths >= 35 && physics >= 35 && chemistry >= 35) {
            if (average >= 75) {
                printf("Distinction\n");
            }       
            else if (average >= 60) {
                printf("First Class\n");
            } 
            else if (average >= 50) {
                printf("Second Class\n");
            } 
            else if (average >= 40) {
                printf("Pass\n");
            } 
            else {
                printf("Fail!!\n");
            }
    } 
    else {
        printf("You have failed the exam. because you have not passed in all subjects.\n");
    }
    return 0;
}