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
      printf("les elements de tableau sont: ");
    for(int i=0; i<a ;i++){
        printf("%d ",tab[i]);

    }
    return 0;
}