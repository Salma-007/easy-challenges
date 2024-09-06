#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  int t[10]={1,2,7,4,5,7,7,8,9,9};
  int count;
 
  for(int i = 0; i< 10; i++){
      count=0;
      for(int j = i+1; j < 10 ; j++){
          if(t[i] == t[j]){
              count++;
          }
      }
      if(count == 0){
          printf("%d",t[i]);
      }
  }
    return 0;
}