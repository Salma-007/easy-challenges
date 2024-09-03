#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("donnez votre revenu annuel (en euros) :");
    scanf("%d",&a);
    printf("donnez score de crédit (sur 1000) :");
    scanf("%d",&b);
    printf("donnez durée du prêt (en années) :");
    scanf("%d",&c);
    
    if(a >= 30000 && b >= 700 && c <= 10 ){
        printf("Éligible");
    }
    else if(a >= 30000 && b >= 650 && c <= 15){
         printf("Éligible avec conditions");
    }
    else{
      printf("Non éligible");
    }
    return 0;
}