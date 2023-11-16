#include <stdio.h>
// Ecriture d'une chaine avec fputs

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "w");

    if (fichier != NULL)
    {
        fputs("j\'ecris une chaine de caracteres\n sur plusieurs lignes !", fichier); // Ecriture de la chaine
        fclose(fichier);
    }

    return 0;
}