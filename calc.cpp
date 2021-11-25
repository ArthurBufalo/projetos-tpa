#include <stdio.h>

int main () {
    char c;
    puts ("Enter text. Include a dot ('.') in a sentence to exit:");
    do {
        c=getchar();
        printf("%c \n", c);
        putchar (c);
    } while (c != '.');
    return 0;
}