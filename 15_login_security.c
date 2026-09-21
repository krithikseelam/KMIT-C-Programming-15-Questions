#include <stdio.h>

int main() {
    int password_length;

    printf("Enter password length: ");
    scanf("%d", &password_length);

    if (password_length < 6) {
        printf("Very Weak\n");
    }
    else if (password_length >= 6 && password_length <= 7) {
        printf("Weak\n");
    }
    else if (password_length >= 8 && password_length <= 10) {
        printf("Good\n");
    }
    else if (password_length >= 11 && password_length <= 15) {
        printf("Strong\n");
    }
    else {
        printf("Very Strong\n");
    }

    return 0;
}