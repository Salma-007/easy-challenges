#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a,b;
    printf("donnez la taille du tableau: ");
    scanf("%d",&a);
    int *tab = (int *)malloc(a * sizeof(int));
    printf("donnez les elements du tableau: \n");
    for(int i=0; i<a ;i++){
        printf("tapez element %d: ",i);
        scanf("%d",&tab[i]);
    }
    printf("donnez le chiffre de multiplication :");
    scanf("%d",&b);
    for (int j=0; j<a; j++){
        printf(" %d x %d = %d \n",b,tab[j],(b*tab[j]));
    }
    return 0;
}