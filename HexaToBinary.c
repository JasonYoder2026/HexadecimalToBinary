#include <stdio.h>
#include <ctype.h>

int main() {

    while (1) {
        char input;

        printf("Enter a hexadecimal digit: (or 'X' to quit)\n");
        scanf(" %c", &input);
        
        input = toupper(input);

        if(input == 'X') {
            break;
        }

        printf("%c\n", input);
    }
    return 0;
}
