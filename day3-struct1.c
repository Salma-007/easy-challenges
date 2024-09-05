#include <stdio.h>

int main() {
   char nom[20];
   printf("tapez votre nom :\n");
   fgets(nom, sizeof(nom), stdin);
   printf("votre nom est : %s",nom);

    return 0;
}