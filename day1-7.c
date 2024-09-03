#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a;
    printf("Tapez un nombre : ");
    scanf("%d",&a);
    
    if(a < 0){
        printf("ce nombre est negatif");
        return 0;
    }
    else if(a > 0){
        printf("ce nombre est positif");
    }
    else {
        printf("le nombre egale a 0");
    }

    return 0;
}