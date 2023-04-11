#include <stdio.h>

int main(){

    int idade;

    scanf("%i", &idade);
        if(idade >= 0 && idade <= 15){
            printf("nao eleitor\n");
        }
        else if( idade > 15 && idade <= 17 || idade >= 65){
            printf("facultativo\n");
        }
        else if(idade > 17 && idade < 65){
            printf("obrigatorio\n");
        }
        else{
            printf("idade invalida\n");
        }
    return 0;
}
