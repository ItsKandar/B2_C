        // Exercice 1 (historique)
        // Poser 3 questions à l'utilisateur, et enregistrer les questions et les réponses dans un fichier en gardant 
        // l'historique.
        // a) en utilisant un fichier texte
        // b) en utilisant un fichier binaire

        #include <stdio.h>

        int main()
        {
            FILE* fichier = NULL;
            char quest1[100] = "quel est votre nom?";
            char quest2[100] = "quel est votre prenom?";
            char quest3[100] = "quel est votre age?";
            char rep1[100] = "";
            char rep2[100] = "";
            char rep3[100] = "";

            printf("%s\n", quest1);
            scanf("%s", rep1);

            printf("%s\n", quest2);
            scanf("%s", rep2);

            printf("%s\n", quest3);
            scanf("%s", rep3);
        }