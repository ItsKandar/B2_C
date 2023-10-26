 // Essayez de réaliser ce qui a été décrit plus haut : demandez à l'utilisateur de vous fournir deux mesures de temps sous la forme 
// heure(s):minute(s):seconde(s).millisecondes(s) et donnez lui la différence en seconde entre celles-ci.

// Voici un exemple d'utilisation.

// Première mesure (hh:mm:ss.xxxx) : 12.45.50.640
// Deuxième mesure (hh:mm:ss.xxxx) : 13.30.35.480
// Il y'a 2684.840 seconde(s) de différence

struct exo1
{
    int heure;
    int minute;
    int seconde;
    int milliseconde;
};

int main()
{
    struct exo1 mesure1;
    struct exo1 mesure2;
    int diff = 0;

    printf("Première mesure (hh:mm:ss.xxxx) : ");
    scanf("%d.%d.%d.%d", &mesure1.heure, &mesure1.minute, &mesure1.seconde, &mesure1.milliseconde);

    printf("Deuxième mesure (hh:mm:ss.xxxx) : ");
    scanf("%d.%d.%d.%d", &mesure2.heure, &mesure2.minute, &mesure2.seconde, &mesure2.milliseconde);

    diff += (mesure2.heure - mesure1.heure) * 3600;
    diff += (mesure2.minute - mesure1.minute) * 60;
    diff += (mesure2.seconde - mesure1.seconde);
    diff += (mesure2.milliseconde - mesure1.milliseconde) / 1000;

    printf("Il y'a %d seconde(s) de différence\n", diff);

    return 0;
}