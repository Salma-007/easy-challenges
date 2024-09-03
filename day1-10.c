#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a,b,c;
    float d;
    printf("donnez votre Nombre total de jours de congés :");
    scanf("%d",&a);
    printf("donnez votre nombre de jours de congés utilisés :");
    scanf("%d",&b);
    printf("donnez votre statut 1/0 :");
    scanf("%d",&c);
    
    if(c == 1 ){
        d = (a-b);
        printf("votre jours restants sont : %.2f",d);
    }
    else if( c==0 ){
        d = ((a/2)-b);
        printf("votre jours restants sont : %.2f",d);
    }
    else{
      printf("erreur");
    }
    return 0;
}