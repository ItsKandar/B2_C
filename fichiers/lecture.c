#include <stdio.h>
// Lire un caractere avec fgetc

// Prototype int fgetc(FILE* pointeurDeFichier);

// Cette fonction retourne un int : c'est un caractere qu a été lu.
// Si la fonction n'a pas pu lire de caractere, elle retourne EOF.

// Au fur et a mesure que vous lisez un caractere dans le fichier, fgetc avance un curseur.

// On va ecrire un code qui lit tous les caracteres d'un fichier un a un, et qui les ecrit a chaque fois à l'ecran.
// La boucle s'arrete quand fgetc renvoie EOF (Qui signifie End Of File, c'est a dire "la fin du fichier").

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
        while (caractereActuel != EOF)
        {
            printf("%c", caractereActuel); // On l'affiche
            caractereActuel = fgetc(fichier); // On lit le caractere
        }

        fclose(fichier);
    }

    return 0;
}