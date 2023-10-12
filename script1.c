#include <stdio.h>
void test(int *pa, int *pb)
{
    *pa = 10;
    *pb = 20;
}

int main(void)
{
    int a,b;
    int *pa = &a;
    int *pb = &b;
    test(&a, &b);
    test(pa, pb);
    printf("a=%d, b=%d\n", a, b);
    printf("a=%d, b=%d\n", *pa, *pb);
    //appelle la fonction swap
    swap(a, b);
    return 0;
}

// Programmer une fonction dont le role est d'echanger la valeur de deux variables de type int. Autrement dit, la valeur
// de la variable "a" doit devenir celle de "b" et la valeur de "b", celle de "a"

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d, b=%d\n", a, b);
}