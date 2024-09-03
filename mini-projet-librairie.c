#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char titre[20];
    char auteur[20];
    float prix;
    int quantite;
} Livre;

int nombre_livre;
int ajouter_livre();
int afficher_livre();
int rechercher_livre();
int update_livre();
int delete_livre();
int total_livre();


int main() {
 int a;
 {
 printf("qu'est ce que vous voulez ?");
 printf(" 1 :Ajouter un livre. ");
 printf(" 2 :Afficher tous les livres disponibles. ");
 printf(" 3 :Rechercher un livre par son titre. ");
 printf(" 4 :Mettre à jour la quantité d'un livre.");
 printf(" 5 :Supprimer un livre du stock..");
 printf(" 6 :Afficher le nombre total de livres en stock.");
 scanf("%d",&a)
} while(a!=0)
switch(a){
    case 1:
    ajouter_livre();
    break;
    case 2:
    afficher_livre();
    break;
    case 3:
    rechercher_livre();
    break;
    case 4:
    update_livre();
    break;
    case 5:
    delete_livre();
    break;
    case 6:
    total_livre();
    break;
    case 0:
    printf("au revoir! ");
    break;
    default:
    printf("tapez un nombre de la liste svp! ")
}
    return 0;
}

int ajouter_livre(){
    Livre nouveau_livre;
    printf("tapez le titre du livre :");
    fgets(nouveau_livre.titre, 19, stdin );
    strtok(nouveau_livre.titre, "\n"); //enleve le retour a la ligne 
    printf("Entrez l'auteur du livre : ");
    fgets(nouveau_livre.auteur, 19, stdin);
    strtok(nouveau_livre.auteur, "\n");
    printf("entrez le prix du livre :");
    scanf("%f",&nouveau_livre.prix);
    printf("entrez la quantite des livres :");
    scanf("%f",&nouveau_livre.quantite);
    nombre_livre++;
    printf("Livre ajouté avec succès !\n");
    
}

int afficher_livre(){
    
    
}