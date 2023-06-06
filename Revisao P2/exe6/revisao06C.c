#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXIMO_ALUNOS 100
#define MAXIMO_NOME 50

void ordenaMatriz(char matriz[MAXIMO_ALUNOS][MAXIMO_NOME], int tam){
    int i, j;
    char tempo[MAXIMO_NOME];

    for(i=0; i<tam - 1; i++){
        for(j=0; j<tam - 1; j++){
            if(strcmp(matriz[j], matriz[j + 1]) > 0){
                strcpy(tempo, matriz[j]);
                strcpy(matriz[j], matriz[j + 1]);
                strcpy(matriz[j + 1], tempo);
            }
        }
    }
}


int main(){

    int i = 0;
    FILE *file = fopen("estudantes.csv", "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        return 1;
    }

    char nomesMatriz[MAXIMO_ALUNOS][MAXIMO_NOME];
    char linha[MAXIMO_NOME];

     // SE TIVER CABECALHO
    fgets(linha, MAXIMO_NOME, file);

    while(fgets(linha, sizeof(linha), file) != NULL && i < MAXIMO_ALUNOS){
        char *token = strtok(linha, ",");
        strcpy(nomesMatriz[i], token);
        i++;
    }

    fclose(file);

    ordenaMatriz(nomesMatriz, i);

    if(i > 0){
        printf("Primeiro nome: %s\n", nomesMatriz[0]);
        printf("Ultimo nome: %s\n", nomesMatriz[i - 1]);
    }else{
        printf("Não foram encontrados nomes de alunos no arquivo.\n");
    }

return 0;
}
