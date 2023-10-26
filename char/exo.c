// Mettre toutes les lettres en minuscule

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "HELLO WORLD";
    int i = 0;
    while (str[i]) {
        putchar(tolower(str[i]));
        i++;
    }
    return 0;
}