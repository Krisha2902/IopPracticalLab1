#include <stdio.h>

int main() {
    char c;

    printf("Enter a character")
    scanf("%c", &c);

    (c >= 'a' && c <= 'z') ? 
    printf("%c is a lowercase letter\n", c) : 
    printf("%c is not a lowercase letter\n", c);

    return 0;
}