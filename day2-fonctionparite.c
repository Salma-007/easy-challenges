#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  int parite(int a){
      if(a%2==0){
          printf("%d est pair",a);
      }
      else{
          printf("%d est impair",a);
      }
      return 0;
  }
int main() {
    int a;
    printf("donnez le premier chiffre :");
    scanf("%d",&a);
    parite(a);
    
    return 0;
}