#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int fctmax(int a, int b){
      if(a<b){
          return b;
      }
      if(a>b){
          return a;
      }
      return 0;
  }
int main() {
    int a,b;
    printf("donnez le premier chiffre :");
    scanf("%d",&a);
    printf("donnez le deuxieme chiffre :");
    scanf("%d",&b);
    printf("le max est : %d",fctmax(a,b));
    
    return 0;
}