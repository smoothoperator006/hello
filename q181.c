#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);  // ❌ removed `\n` from format string

        if (num % 7 == 0) {
            printf("You entered a multiple of 7.\n");
            break;
        }
    } while (1);

    return 0;
}
