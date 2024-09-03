#include <stdio.h>

int main() {
    int c;
    printf("tapez la temperature : ");
    scanf("%d",&c);
    float k;
    k = c + 273.15;
    printf(" la temperature est : %f",k);

    return 0;
}