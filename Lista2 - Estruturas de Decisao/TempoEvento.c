#include <stdio.h>

int main(){

    int dia, fimDia, hr, fimHr, min, fimMin, seg, fimSeg;

    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hr, &min, &seg);
    scanf("Dia %d", &fimDia);
    scanf("%d : %d : %d", &fimHr, &fimMin, &fimSeg);

    seg = fimSeg - seg;
    min = fimMin - min;
    hr = fimHr - hr;
    dia = fimDia - dia;

    if(seg < 0){
        seg += 60;
        min --;
    }

    if(min < 0){
        min += 60;
        hr --;
    }

    if(hr < 0){
        hr += 24;
        dia --;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);

    return 0;
}