// Créez deux fonctions : une qui retourne le plus petit element d'un tableau de int et une qui renvoie le plus grand élément d'un 
// tableau de int.

#include <stdio.h>

int getMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = getMin(arr, size);
    int max = getMax(arr, size);
    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);
    return 0;
}
