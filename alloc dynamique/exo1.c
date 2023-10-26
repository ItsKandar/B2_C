// Rappel : une image est composé de pixels.
// La résolution de l'image correspond à la taille de l'image, autrement dit le nombre de pixels.
// Un pixel est une couleur, définit par 3 composantes : rouge, vert, bleu.

// Calculer la quantité de mémoire nécessaire pour une image de 800 * 600 pixels avec des composantes de couleurs stockées en unsigned char (0 - 255)

// Calculer la quantité de mémoire nécessaire pour une image 4K (3840 * 2160 pixels) avec des composantes de couleurs stockées en int

#include <stdio.h>

int main() {
    int width = 800;
    int height = 600;
    int bytesPerPixel = 3; // 3 bytes per pixel (red, green, blue)
    int imageSize = width * height * bytesPerPixel;
    printf("Memory required for 800x600 image with unsigned char components: %d bytes\n", imageSize);

    width = 3840;
    height = 2160;
    bytesPerPixel = sizeof(int); // 4 bytes per pixel (red, green, blue, alpha)
    imageSize = width * height * bytesPerPixel;
    printf("Memory required for 4K image with int components: %d bytes\n", imageSize);

    return 0;
}
