#include <stdio.h>


#define TAM_VETOR 2
int main(){

int n[TAM_VETOR], temp, i, j;

    for(i=0; i<TAM_VETOR; i++){
       scanf("%d", &n[i]);
    }

    for(i=0, j=19; i<10; i++, j--){
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }

    for(i=0; i<TAM_VETOR; i++){
        printf("N[%d] =  %d\n", i, n[i]);
    }

return 0;
}
