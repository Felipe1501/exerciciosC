#include <stdio.h>

int main(){

int tamanho, i, j, hifen;


printf("Entre com a quantidade: ");
scanf("%d", &tamanho);
float nrs[tamanho];
for(i=0; i<tamanho; i++){

    scanf("%f", &nrs[i]);

}
printf("Maiores que 10.5 -> " );
hifen = 0;
for(j=0; j<tamanho; j++){

    if(nrs[j] > 10.5){
       if(hifen != 0){
         printf(" - ");
       }
        printf("%.2f", nrs[j]);
        hifen++;
    }


}

return 0;
}
