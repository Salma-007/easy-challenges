#include <stdio.h>


int main() {

    int t[7]={1, 55, 4, 17, 2,-1,0};

      for(int i=0; i<7; i++){
        printf(" %d\n",t[i]);
    }

    for(int j=1; j<7; j++){

        int en_cours= t[j];
        int k = j-1;
        while(k >= 0 && t[k] > en_cours){
            t[k+1] = t[k];
            k= k-1;
        }
        t[k+1]= en_cours;

    }


    printf("\n");
    printf(" \n");
    for(int i=0; i<7; i++){
        printf(" %d\n",t[i]);
    }

    return 0;
}
