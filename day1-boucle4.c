#include <stdio.h>

int main() {
    int nombre;
    int chiffre;
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1; 
    }

    int nombreInverse = 0;

    while (nombre > 0) {
        chiffre = nombre % 10;      
        nombreInverse = nombreInverse * 10 + chiffre; 
        nombre /= 10;  
    }
    printf("Le nombre inversé est : %d\n", nombreInverse);

    return 0;
}
