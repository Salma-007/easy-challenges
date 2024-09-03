#include <stdio.h>

int main() {
    char a;
    printf("Tapez un caractere : ");
    scanf("%c",&a);
    switch(a){
        case 'y':
        printf("voyelle y");
        break;
        case 'i':
        printf("voyelle i");
        break;
        case 'u':
        printf("voyelle u");
        break;
        case 'o':
        printf("voyelle o");
        break;
        case 'a':
        printf("voyelle o");
        break;
        case 'e':
        printf("voyelle e");
        break;
        default:
        printf("c est pas une voyelle");
    }
    return 0;
}