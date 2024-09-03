#include <stdio.h>
#include <math.h>

int main() {
    char a;
    printf("Tapez un caractere: ");
    scanf("%c",&a);
    int c = (int)a;
    
    if( c <=  90 && c >= 65 ){
        printf("ce caractere est majuscule");
        return 0;
    }
    else {
        printf("c pas majuscule");
    }
    return 0;
}