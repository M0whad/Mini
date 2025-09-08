#include "header.h"
#include <stdio.h>
#include <string.h>

// #define MAX_LIVRES 100

// typedef struct{:
char b_name[50];
char b_author[50];
float b_price;
int Q_I_S;
// }Livre;

Livre Livres[MAX_LIVRES];

int Livres_calculer = 0;

void Add_book()
{

    printf("\n-----------------------------------------------\n");
    printf("|         Ajouter un Livre           |\n");
    printf("\n-----------------------------------------------\n");

    if (Livres_calculer >= MAX_LIVRES)
    {
        printf("Impossible d'ajouter le livre !!\n ");
        return;
    }

    printf("Entrer le Nom de livre: \n");
    scanf("%49s", Livres[Livres_calculer].b_name);
    while (getchar() != '\n')
        ;

    printf("Entree l'autore du livre: \n");
    scanf("%49s", Livres[Livres_calculer].b_author);
    while (getchar() != '\n')
        ;

    printf("Entrer le prix du livre:\n");
    scanf("%f", &Livres[Livres_calculer].b_price);
    while (getchar() != '\n')
        ;

    printf("Entrer la quantite en stock: \n");
    scanf("%d", &Livres[Livres_calculer].Q_I_S);
    while (getchar() != '\n')
        ;

    Livres_calculer++;
    printf("felicitations le livre est dans la librairie Maintenant \n ");
}
void Dis_book()
{

    if (Livres_calculer == 0)
    {
        printf("Il y a aucun livres disponible pour afficher !!\n");
        return;
    }

    printf("_*_La Liste des Livres disponible_*_\n\n");
    for (int i = 0; i < Livres_calculer; i++)
    {
        printf("---*---*---*---*---*---*---*---*---*---*---");
        printf("%d || %s || %s || %.2f || %d", i + 1, Livres[i].b_name, Livres[i].b_author, Livres[i].b_price, Livres[i].Q_I_S);
        printf("---*---*---*---*---*---*---*---*---*---*---");
    }
}

void Del_book()
{

    printf("\n-----------------------------------------------\n");
    printf("|         Suprimer un Livre           |\n");
    printf("\n-----------------------------------------------\n");

    if (Livres_calculer == 0)
    {
        printf("\nIl n'y a aucun livre actuellement, veuillez d'abord saisir les informations sur le livre!.\n");
        return;
    }

    printf("\nVoici une liste de tous les livres dans la librarie:\n");
    for (int i = 0; i < Livres_calculer; i++)
    {
        printf("%d || %s || %s || %.2f || %d\n", i + 1, Livres[i].b_name, Livres[i].b_author, Livres[i].b_price, Livres[i].Q_I_S);
    }
    char t_t_delete[50];
    printf("\nEntrez le titre du livre que vous souhaitez supprimer: ");
    scanf(" %[^\n]", t_t_delete);
    while (getchar() != '\n')
        ;

    int pos = -1;
    for (int i = 0; i < Livres_calculer; i++)
    {
        if (strcasecmp(Livres[i].b_name, t_t_delete) == 0)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Livre '%s' non trouvé.\n", t_t_delete);
        return;
    }

    for (int i = pos; i < Livres_calculer - 1; i++)
    {
        Livres[i] = Livres[i + 1];
    }
    Livres_calculer--;

    printf("Livre '%s' supprimé avec succès!\n", t_t_delete);
}
void Mett_book()
{

    printf("\n-----------------------------------------------\n");
    printf("|         Mettre à Jour la Quantité d'un Livre           |\n");
    printf("\n-----------------------------------------------\n");

    if (Livres_calculer == 0)
    {
        printf("\nIl n'y a aucun livre actuellement, veuillez d'abord saisir les informations sur le livre !.\n");
        return;
    }

    printf("\nVoici une liste de tous les livres dans la librairie: \n");
    for (int i = 0; i < Livres_calculer; i++)
    {
        printf("\n--------------------------------------------------------------------------\n");
        printf("%d || %s || %s || %.2f || %d", i + 1, Livres[i].b_name, Livres[i].b_author, Livres[i].b_price, Livres[i].Q_I_S);
        printf("\n--------------------------------------------------------------------------\n");
    }
    char s_livre[50];
    printf("Entrer le Nom de Votre livre :\n");
    scanf("%49s", s_livre);
    while (getchar() != '\n')
        ;

    int f_index = -1;
    for (int i = 0; i < Livres_calculer; i++)
    {
        if (strcasecmp(Livres[i].b_name, s_livre) == 0)
        {
            f_index = i;
            break;
        }
    }

    if (f_index == -1)
    {
        printf("Livre non trouvé.\n");
        return;
    }

    printf("Entrer la Nouveaulle quantite de livre: ");
    scanf("%d", &Livres[f_index].Q_I_S);
    while (getchar() != '\n')
        ;

    printf("La Quantite mise a jour avec succes!!\n");
    return;
}
void Ch_book()
{
    printf("\n-----------------------------------------------\n");
    printf("|         Chercher un Livre par son Nom          |\n");
    printf("\n-----------------------------------------------\n");

    if (Livres_calculer == 0)
    {
        printf("\nIl n'y a aucun livre actuellement, veuillez d'abord saisir les informations sur le livre !.\n");
        return;
    }

    printf("\nVoici une liste de tous les livres dans la librairie: \n");
    for (int i = 0; i < Livres_calculer; i++)
    {
        printf("\n--------------------------------------------------------------------------\n");
        printf("%d || %s || %s || %.2f || %d", i + 1, Livres[i].b_name, Livres[i].b_author, Livres[i].b_price, Livres[i].Q_I_S);
        printf("\n--------------------------------------------------------------------------\n");
    }
    char ch_livre[50];
    printf("Entrer le Nom du livre :\n");
    scanf("%49s", ch_livre);
    while (getchar() != '\n')
        ;

    int b_index = -1;
    for (int i = 0; i < Livres_calculer; i++)
    {
        if (strcasecmp(Livres[i].b_name, ch_livre) == 0)
        {
            b_index = i;
            break;
        }
    }

    if (b_index == -1)
    {
        printf("Livre non trouvé.\n");
        return;
    }

    printf("Livre trouvé: %s || %s || %.2f || %d\n", Livres[b_index].b_name, Livres[b_index].b_author, Livres[b_index].b_price, Livres[b_index].Q_I_S);
}

// int main()
// {
//     while (1)
//     {
//         int choix = 0; // is that mea that the user still didn't put anything ?
//         printf("\n\t\t__*__ GESTION DE STOCK DANS UNE LIBRAIRIEE__*__\n");
//         do
//         {
//             printf("\n\n\t __MENU__ ");
//             printf("\n--------------------------------------------------------\n");
//             printf("1. Ajouter Un Nouveau Livre"); // done
//             printf("\n--------------------------------------------------------\n");
//             printf("2. Chercher Un Livre Par Son Titre"); // done
//             printf("\n--------------------------------------------------------\n");
//             printf("3. Afficher Tous Les Livres Disponible"); // done
//             printf("\n--------------------------------------------------------\n");
//             printf("4. Mettre A jour La Quantite D'un Livres"); // done
//             printf("\n--------------------------------------------------------\n");
//             printf("5. Supprimer un livre du Stock"); // done
//             printf("\n--------------------------------------------------------\n");
//             printf("0. Quitter"); // done
//             printf("\n--------------------------------------------------------\n");

//             scanf("%d", &choix);
//             int c;
//             while ((c = getchar()) != '\n' && c != EOF)
//                 ;

//             switch (choix)
//             {
//             case 1:
//                 Add_book();
//                 break; // done
//             case 2:
//                 Ch_book();
//                 break; // done
//             case 3:
//                 Dis_book();
//                 break; // done
//             case 4:
//                 Mett_book();
//                 break; // done
//             case 5:
//                 Del_book();
//                 break;
//             case 0:
//                 printf("Au revoir ! \n");
//                 break;
//             default:
//                 printf("Entrer invalide...");
//                 break;
//             }
//         } while (choix != 0);

//         return 0;
//     }
// }