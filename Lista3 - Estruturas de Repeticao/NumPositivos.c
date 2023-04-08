#include <stdio.h>

int main(){

    int pos=0, i=0;
    double n;



    do{
        scanf("%lf", &n);

        if(n>0){
            pos++;
        }
    i++;
    }
    while (i<6);
    printf("%i valores positivos\n", pos);

    return 0;
}