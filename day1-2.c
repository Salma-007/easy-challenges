#include <stdio.h>

int main() {

    
    int t;
    printf("tapez la temperature : ");
    scanf("%d",&t);
    switch (t){
    case (t < 0):
    printf("solide");
    break;
    case (0 <= t < 100) :
    printf("liquide");
    break;
    case (t > 100):
    printf("gaz");
    break;
    default: printf("none");
    break;
    }    

    return 0;
}