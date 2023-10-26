#include <math.h>
#include <stdio.h>
// Exercice 1 (sphère)
// On veut calculer si deux sphères sont en collisions dans un espace 3D. Pour realiser cela, vous devez créer une structure sphere contant :
// 3 réels (double) x,y,z representant sa position dans l'espace.
// 1 réel (double) rayon represantant la longueur du rayon de la spere.

struct sphere {
    double x;
    double y;
    double z;
    double rayon;
};

//1. Ecrire une fonction qui retourne la distance entre les deux centres des sphères.

double distance(struct sphere s1, struct sphere s2) {
    return sqrt(pow(s1.x - s2.x, 2) + pow(s1.y - s2.y, 2) + pow(s1.z - s2.z, 2)); // Utilise la formule fournie dans l'énoncé
}

//2. Ecrire une fonction qui retourne 1 si les deux sphères sont en collisions sinon 0.

int collision(struct sphere s1, struct sphere s2) {
    return distance(s1, s2) <= s1.rayon + s2.rayon; // Calcule la distance entre les deux sphères et vérifie si elle est inférieure à la somme des rayons
}

//3. Ecrire un petit programme qui test si la sphère s1 de rayon 2 et à la position (3,3,0) est en collision avec la sphere s2 de rayon 1 et a la position (1,-1,0)/

// int main() {
//     struct sphere s1 = {3, 3, 0, 2}; // Initialise les deux sphères
//     struct sphere s2 = {1, -1, 0, 1};
//     printf("%d\n", collision(s1, s2)); // Affiche le résultat de la fonction collision
//     return 0;
// }
// (renvoie 0 car les deux sphères ne sont pas en collisions)

// Modifier le rayon de la sphere s2 à 3 et tester si il y'a un collision

int main() {
    struct sphere s1 = {3, 3, 0, 2}; // Initialise les deux sphères
    struct sphere s2 = {1, -1, 0, 3}; // Modifie le rayon de la sphère s2
    printf("%d\n", collision(s1, s2)); // Affiche le résultat de la fonction collision
    return 0;
}
// (renvoie 1 car les deux sphères sont en collisions)