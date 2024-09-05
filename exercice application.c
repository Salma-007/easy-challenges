#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  int t[10]={1,2,2,4,5,7,7,8,9,9};
 
  for(int i = 0; i< 10; i++){
      for(int j = i+1; j < 9 ; j++){
          if(t[i] == t[j]){
              break;
          }
          else{ 
              printf("%d", t[i]);
          }
      }
  }

    return 0;
}