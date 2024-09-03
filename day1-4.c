#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    printf("Tapez un nombre : ");
    scanf("%d",&a);
    bool c;
    c = (a%2 == 0);
    if (c) {
        printf ("pair");
        }
    else{
        printf ("impair");
        }

    return 0;
}