#include <stdio.h>

int main() {
    int taille = 9;
    int a;
    int first=1;
    int last=9;
    int milieu;
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("donnez un nombre :\n ");
    scanf("%d",&a);
    for(int i=first; i<last; i++){
        milieu = (first+last)/2;
        if( a<milieu ){
            last = milieu;
        }
        else if(a>milieu){
            first = milieu;
        }
        else{
            printf(" %d ",milieu);
            break;
        }
    }
    return 0;
}