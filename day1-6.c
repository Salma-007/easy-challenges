#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    float discriminant, racine1, racine2;
    printf("Tapez le coefficient a : ");
    scanf("%d",&a);
     printf("Tapez le coefficient b : ");
    scanf("%d",&b); 
    printf("Tapez le coefficient c : ");
    scanf("%d",&c);
    if(a == 0){
        printf("ce n est pas equation du deuxieme deg");
        return 0;
    }
    discriminant = (b*b)-(4*a*c);
    if (discriminant > 0){
        racine1 = (-b - sqrt(discriminant))/(2*a);
        racine2 = (-b + sqrt(discriminant))/(2*a);
        printf("les solutions sont : %f et %f ",racine1, racine2);
    }
    else if(discriminant == 0){
        racine1 = -b/(2*a); 
        printf("la solution est: %f ",racine1);
    }
    else {
        printf("L equation n'a pas de solutions reelles.\n");
    }

    return 0;
}