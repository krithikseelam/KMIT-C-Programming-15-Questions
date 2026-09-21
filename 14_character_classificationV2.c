#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= 48 && ch <= 57) {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}