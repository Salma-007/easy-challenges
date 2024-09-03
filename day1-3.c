#include <stdio.h>

int main() {
    int a,b,c;
    float d;
    printf("tapez a : ");
    scanf("%d",&a);
     printf("tapez b : ");
    scanf("%d",&b);
     printf("tapez c :");
    scanf("%d",&c);
    d= (a * b * c)^(1/3);
    printf("votre moyenne geometrique est : %.2f",d);
    
    return 0;
}