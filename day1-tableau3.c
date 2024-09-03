#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a;
    printf("donnez la taille du tableau: ");
    scanf("%d",&a);
    int *tab = (int *)malloc(a * sizeof(int));
    printf("donnez les elements du tableau: \n");
    for(int i=0; i<a ;i++){
        printf("tapez element %d: ",i);
        scanf("%d",&tab[i]);
    }
      printf("le maximum est : ");
    int plus_petit = tab[0]; 
    for (int i = 1; i < a; i++) {
        if (tab[i] < plus_petit) {
            plus_petit = tab[i]; 
        }
    }
    printf("%d",plus_petit);
    return 0;
}