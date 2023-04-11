#include <stdio.h>

int main(){

    int hr, min, hr2, min2, calcHora, calcMin, restoHr;

    scanf("%i %i", &hr, &min);
    scanf("%i %i", &hr2, &min2);

    calcHora = hr + hr2;
    calcMin = min + min2;


    if(calcMin > 59){
        restoHr = calcMin / 60;
        calcMin = calcMin % 60;

        calcHora = restoHr + calcHora;
    }

    printf("%i:%i + %i:%i = %i:%.02d\n", hr, min, hr2, min2, calcHora, calcMin);
    return 0;
}
