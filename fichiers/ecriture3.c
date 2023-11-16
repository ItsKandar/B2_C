#include <stdio.h>
// Ecriture d'une chaine formatée avec fprintf

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int age = 0;
    fichier = fopen("test.txt", "w");
    if (fichier != NULL)
    {
        printf("Quel age avez-vous ? ");
        scanf("%d", &age);
        // On l'ecrit dans le fichier
        fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);
        fclose(fichier);
    }
    return 0;
}