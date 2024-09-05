#include <stdio.h>
#include <ctype.h>

int main() {
    char nom[20];
    printf("tapez votre nom :\n");
    fgets(nom, sizeof(nom),stdin);
    
    for(int i=0; nom[i] != '\0'; i++){
        nom[i]= toupper(nom[i]);
    }
    printf("votre nom est : %s",nom);
    
    return 0;
}