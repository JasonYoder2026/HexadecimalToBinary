#include <stdio.h>
#include <ctype.h>

int checkInput(char c) {
    if (('0' <= c && c <= '9') || ('A' <= c && c <= 'F')) {
        return 1;
    } else if (c == 'X') {
        return 2;
    } else {
        return 3;
    }
}

int hexToDeciaml(char c) {
    int decimalValue;
    if('0' <= c && c <= '9') {
        decimalValue = c - '0';
    } else {
        decimalValue = c - '7';
    }

    return decimalValue;
}


int main() {

    while (1) {
        char input;

        printf("Enter a single hexadecimal digit: (or 'X' to quit)\n");
        scanf(" %c", &input);

        input = toupper(input);
        
        int validInput = checkInput(input);

        if (validInput == 2) {
            break;
        } else if (validInput == 3) {
            printf("Invalid entry, try again.");
            continue;
        } else {
            int decimal = hexToDeciaml(input);
            printf("%d\n", decimal);
        }
    }
    return 0;
}
