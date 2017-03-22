#include <stdio.h>

void print_ascii() {
    char ch;

    printf("Please introduce a new character.\n");
    scanf("%c", &ch);
    printf("The ascii code for %c is %d.\n", ch, ch);
}
