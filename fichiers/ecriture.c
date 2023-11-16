#include <stdio.h>
// Ecriture d'un caractere

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "w");

    if (fichier != NULL)
    {
        fputc('A', fichier); // Ecriture du caractere A
        fclose(fichier);
    }

    return 0;
}