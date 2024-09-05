#include <stdio.h>

int main() {
   char nom[20];
   int a=0;
   printf("tapez votre nom :\n");
   fgets(nom, sizeof(nom), stdin);
   printf("votre nom est : %s",nom);
  do {
        a++;
    } while (nom[a] != '\0');
   printf("vous avez tapez %d caracteres",a);

    return 0;
}