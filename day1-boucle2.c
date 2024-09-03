#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b=0;
    printf("donnez un nombre :");
    scanf("%d",&a);
    printf("1");
     for (int i = 1; i <= a; i++) {
        b = b + i;
        if (i > 1) {
            printf("+%d", i);
        }
     }
    printf("=%d",b);
    return 0;
}