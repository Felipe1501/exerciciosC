#include <stdio.h>

int main(){

    int pos=0, i=0;
    double soma, media, n;



    do{
        scanf("%lf", &n);

        if(n>0){
            pos++;
            soma+=n;
        }
    i++;
    }
    while (i<6);
    media = soma / pos;
    printf("%i valores positivos\n", pos);
    printf("%.1f\n", media);

    return 0;
}