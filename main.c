#include "header.h"
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    Livre Livres [MAX_LIVRES];
    while (1){
        int choix = 0;//is that mea that the user still didn't put anything ?
        printf("\n\t\t__*__ GESTION DE STOCK DANS UNE LIBRAIRIEE__*__\n");
        do{
        printf("\n\n\t __MENU__ ");
        printf("\n--------------------------------------------------------\n");
        printf("1. Ajouter Un Nouveau Livre");//done
        printf("\n--------------------------------------------------------\n");
        printf("2. Chercher Un Livre Par Son Titre");//done
        printf("\n--------------------------------------------------------\n");
        printf("3. Afficher Tous Les Livres Disponible");//done 
        printf("\n--------------------------------------------------------\n");
        printf("4. Mettre A jour La Quantite D'un Livres");//done
        printf("\n--------------------------------------------------------\n");
        printf("5. Supprimer un livre du Stock");//done
        printf("\n--------------------------------------------------------\n");
        printf("0. Quitter");//done
        printf("\n--------------------------------------------------------\n");

        scanf("%d", &choix);
        int c; while ((c = getchar())!= '\n' && c!= EOF);

        switch (choix){
            case 1: Add_book();
                break;//done
            case 2: Ch_book();
                break;// done but not perfefctlly understandable
            case 3: Dis_book();
                break;//done
            case 4: Mett_book();
                break;//done
            case 5: Del_book();
                break;
            case 0: printf("Au revoir ! \n");
            exit(0);
                break;
            default: printf("Entrer invalide...");
                break;
        }  
    }while(choix != 0);

    
}
return 0;
}