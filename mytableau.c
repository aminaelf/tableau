#include <stdio.h>

int main()
{
    int classe1[13];
    int classe2[15];
    int tri[28];
    int min, max;
    int i, S, N, moyn, k = 13;
    int m;
    int c = 0;
    do
    {
        printf("si vous voulais sortir du program entrer le nbr 0\n");
        printf("ou bien choisisez quelle classe voux voulais : ");
        scanf("%d", &N);
        switch(N)
        {
        
        case 1:
            printf("veuiller entrer les notes pour la classe 1:\n");
            for (i = 0; i < 13; i++)
            {
                printf("Note[%d]= ", i);
                scanf("%d", &classe1[i]);
            }
            max = classe1[0];
            min = classe1[0];

            for (i = 1; i < 13; i++)
            {
                if (max < classe1[i])
                    max = classe1[i];
            }
            for (i = 1; i < 13; i++)

            {
                if (classe1[i] < min)
                    min = classe1[i];
            }
            for (i = 0; i < 13; i++)
            {
                if (classe1[i] >= 10)
                {
                    c++;
                }
            }
            printf("le nombre d'etudiant>=10 est:%d\n", c);
            printf(" plus grande moyenne est:%d\nplus petite moyenne est: %d\n ", max, min);
            break;

        case 2:
            printf("faire entrer les notes de la classe 2:\n");
            for (i = 0; i < 15; i++)
            {
                printf("Note[%d]= ", i);
                scanf("%d", &classe2[i]);
            }
            max = classe2[0];
            min = classe2[0];
            for (i = 1; i < 15; i++)
            {
                if (max < classe2[i])
                    max = classe2[i];
            }
            for (i = 1; i < 15; i++)
            {
                if (min > classe2[i])
                    min = classe2[i];
            }
            for (i = 0; i < 15; i++)
            {
                if (classe2[i] >= 10)
                {
                    c++;
                }
            }
            printf("le nombre d'etudiant>=10 est:%d\n", c);

            printf("plus grande moyenne est:%d\nplus petite moyenne est: %d\n", max, min);
            break;
        case 3:
            printf("faire entrer les notes pour les 2 classes en mm tmps:\n");
            for (i = 0; i < 13; i++)
            {
                tri[i] = classe1[i];
            }
            for (i = 0; i < 15; i++)
            {
                tri[k] = classe2[i];
                k++;
            }
            for (i = 0; i < 27; i++)
                for (S = i + 1; S < 28; S++)
                {
                    if (tri[i] > tri[S])
                    {
                        m = tri[i];
                        tri[i] = tri[S];
                        tri[S] = m;
                    }
                }
            printf(" affichage des notes des 2 classes par ordre croissant :");
            for (i = 0; i < 28; i++)
            {
                printf("%d\t", tri[i]);
            }

        default:
            printf("veuillez choisir 1 ou 2 ou 3");
        }
    } while (N != 0);
}