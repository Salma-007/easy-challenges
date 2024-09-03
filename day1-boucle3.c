// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a;
    int compteur=0;
    printf("donnez un nombre :");
    scanf("%d",&a);
    if(a<0){
        printf("tapez un nombre positif! ");
    }
    else if(a==0){
        printf("un seul chiffre");
    }
    else{
    while(a > 0){
        a=a/10;
        compteur++;
    }
    }
    printf("le nombre de chiffres est : %d",compteur);
    return 0;
}