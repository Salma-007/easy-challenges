#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    typedef struct{
        char nom[20];
        char prenom[20];
        float notes[4];
    } student; 
    
    student s1 ;
    strcpy(s1.nom, "salma");
    strcpy(s1.prenom, "el allali");
    printf("donnez les notes de salma : \n");
    for(int i=0; i< 4; i++){
        scanf("%f",&s1.notes[i]);
    }
    
    printf("les info de salma sont : \n");

    printf("Nom : %s\n", s1.nom);
    printf("Prenom : %s\n", s1.prenom);
    printf("Notes : ");
    for (int j = 0; j < 4; j++) {
        printf("%.2f ", s1.notes[j]);
    }  
    
    return 0;
}