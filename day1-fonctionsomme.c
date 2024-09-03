#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int fctsomme(int a, int b){
      int c = a+b;
      return c;
  }
int main() {
    int a,b;
    printf("donnez le premier chiffre :");
    scanf("%d",&a);
    printf("donnez le deuxieme chiffre :");
    scanf("%d",&b);
    printf("la somme est : %d",fctsomme(a,b));
    
    return 0;
}