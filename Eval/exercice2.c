#include <stdio.h>
// Exercice 2 (chaine de caracteres)

//1. Ecrire une fonction qui compte le nombre d'un caractere, passé en parametre, dans une chaine passé aussi en parametres.

int compteur(char* chaine, char c) {
    int i = 0; // Initialise un compteur et un indice
    int compteur = 0;
    while (chaine[i] != '\0') { // Parcours la chaine de caractères
        if (chaine[i] == c) { // Si le caractère est égal au caractère recherché, on incrémente le compteur
            compteur++;
        }
        i++; // On incrémente l'indice
    }
    return compteur;
}

//2. Ecrire une fonction qui compte le nombre de mot d'une chaine de caractères.

int compteur_mots(char* chaine) {
    int i = 0; // Initialise un compteur et un indice
    int compteur = 0;
    while (chaine[i] != '\0') { // Parcours la chaine de caractères
        if (chaine[i] == ' ') { // Si le caractère est un espace, on incrémente le compteur (car un espace sépare deux mots)
            compteur++;
        }
        i++; // On incrémente l'indice
    }
    return compteur + 1; // On retourne le compteur + 1 car il y'a un mot de plus que d'espaces
}

//3. Ecrire une fonction qui retourne le mot le plus grand d'une chaine de caractères.

char* mot_plus_grand(char* chaine) {
    int i = 0; // Initialise un compteur, un indice, un compteur de caractères et un autre indice
    int compteur = 0;
    int max = 0;
    int indice = 0;
    while (chaine[i] != '\0') { // Parcours la chaine de caractères
        if (chaine[i] == ' ') { // Si le caractère est un espace, on vérifie si le compteur est plus grand que le max, si oui, on met à jour le max et l'indice
            if (compteur > max) {
                max = compteur;
                indice = i - compteur;
            }
            compteur = 0; // On remet le compteur à 0
        } else {
            compteur++; // Sinon, on incrémente le compteur
        }
        i++; // On incrémente l'indice
    }
    if (compteur > max) { // On vérifie une dernière fois si le compteur est plus grand que le max, si oui, on met à jour le max et l'indice
        max = compteur;
        indice = i - compteur;
    }
    char* mot = malloc(sizeof(char) * (max + 1)); // On alloue la mémoire nécessaire pour le mot
    for (int j = 0; j < max; j++) { // On copie le mot dans la variable mot
        mot[j] = chaine[indice + j];
    }
    mot[max] = '\0'; // On ajoute le caractère de fin de chaine
    return mot; // On retourne le mot
}

//4. Ecrire un programme principal qui utilise et affiche le restulat des fonctins ecrites ci dessus avec la chaine de caracteres suivante :

char* chaine = "Ceci est une grande chaine de caracteres avec plusieurs mots"; // Initialise la chaine de caractères

int main() {
    printf("%d\n", compteur(chaine, 'e')); // Affiche le résultat de la fonction compteur
    printf("%d\n", compteur_mots(chaine)); // Affiche le résultat de la fonction compteur_mots
    printf("%s\n", mot_plus_grand(chaine)); // Affiche le résultat de la fonction mot_plus_grand
    return 0;
}