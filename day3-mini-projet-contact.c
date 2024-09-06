#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define max 100
int count=0;

typedef struct {
    char nom[20];
    char tlf[20];
    char email[20];
} Contact;

Contact stock[max];

int ajouter_contact();
int modifier_contact();
int supprimer_contact();
int rechercher_contact();
int recherche(char* );


int main() {
    int a;
    do{
        printf(" 1- ajouter contact \n");
        printf(" 2- modifier contact \n");
        printf(" 3- supprimer contact \n");
        printf(" 4- rechercher contact \n");
        printf(" 0- quitter programme \n");
        scanf("%d",&a);
         switch(a){
        case 1:
        ajouter_contact();
        break;
        case 2:
        modifier_contact();
        break;
        // case 3:
        // supprimer_contact();
        // break;
        case 4:
        rechercher_contact();
        break;
        case 0:
        printf(" programme quitté! \n");
        default:
        printf("entrez un choix du menu! \n \n");
    }
    
    } while ( a != 0 );

    return 0;
}

int ajouter_contact(){
    
    Contact nouveau_contact;
    
    printf("tapez le nom du contact :\n");
    fgets(nouveau_contact.nom, sizeof(nouveau_contact.nom),stdin);
    strtok(nouveau_contact.nom,"\n");
    printf("tapez le telephone du contact :\n");
    fgets(nouveau_contact.tlf, sizeof(nouveau_contact.tlf),stdin);
    strtok(nouveau_contact.tlf,"\n");
    printf("tapez l email du contact :\n");
    fgets(nouveau_contact.email, sizeof(nouveau_contact.tlf),stdin);
    strtok(nouveau_contact.email,"\n");
    if( count < max){
        stock[count] = nouveau_contact;
        count++;
        printf("contact ajouté !\n");
    }
    else{
        printf("contact non ajouté! \n");
    }
}

int modifier_contact(){
    char search[20];
    printf("tapez le nom du contatct :\n");
    fgets(search, sizeof(search) ,stdin);
    strtok(search,"\n");

    if (recherche(search) != 0){
        printf("tapez le nouveau nom du contact : \n");
        fgets(stock[recherche(search)].nom,sizeof(stock[recherche(search)].nom),stdin);
        strtok(stock[recherche(search)].nom,"\n");
        printf("tapez le nouveau email du contact : \n");
        fgets(stock[recherche(search)].email,sizeof(stock[recherche(search)].email),stdin);
        strtok(stock[recherche(search)].email,"\n");
        printf("contact updated succefully !\n");
    }
}

int rechercher_contact(){
    char search[20];
    printf("tapez le nom du contatct :\n");
    fgets(search,sizeof(search),stdin);
    strtok(search,"\n");
    if ( recherche(search) != 0 ){

        printf("le nom du contact est  : \n",&stock[recherche(search)].nom);
        printf("l email du contact est  : \n",&stock[recherche(search)].email);
        printf("le telephone du contact est  : \n",&stock[recherche(search)].tlf);

    }
    
}



int recherche ( char* a  ){
    for(int i=0; i<count; i++){
        if( strcmp(stock[i].nom,a)==0 ){
            return i;
        }
        else{
            printf("contact invalide !");
            return 0;
        }
    }
    
}

// int supprimer_contact(){
    
// }

// int afficher_contact(){
//     // Contact nouveau_contact;
//     // printf("tapez le nom du contatct :\n");
//     // fgets(nouveau_contact.nom,sizeof(nouveau_contact.nom),stdin);
//     // strtok(nouveau_contact.nom,"\n");
//     // if (recherche(nouveau_contact.nom) != 0){
//     //     printf(" le nom du contact est : %s \n",stock[i].nom);
//     //     printf(" l email du contact est : %s \n",stock[i].email);
//     //     printf(" le telephone du contact est : %s \n",stock[i].tlf);
//     // }
    
    
// }



