// Construisez une fonction qui teste la présence d'une valeur dans un tableau de int Celle-ci retournera 1 si un ou plusieurs elements 
// du tableau sont egaux a la valeur recherchee, 0 sinon.

#include <stdio.h>

int contains(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    if (contains(arr, size, value)) {
        printf("Le tableau contient %d\n", value);
    } else {
        printf("Le tableau ne contient pas %d\n", value);
    }
    return 0;
}
