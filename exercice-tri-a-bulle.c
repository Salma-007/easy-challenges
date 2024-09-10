#include <stdio.h>

int main() {
    int temp;
    int t[7]={1, 55, 4, 17, 2,-1,0};
    for(int i=0; i<7; i++){
        printf(" %d\n",t[i]);
    }

    for(int j=0; j<7;j++){

        for(int a=j+1; a<7; a++){
            if(t[j]>t[a]){
                temp = t[j];
                t[j]=t[a];
                t[a]=temp;
            }

        }
    }
    printf("\n");
    printf(" \n");
    for(int i=0; i<7; i++){
        printf(" %d\n",t[i]);
    }




    return 0;
}
