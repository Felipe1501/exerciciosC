#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

 int qt = 0;

 printf("quantidade de alunos: ");
 scanf("%d", &qt);
 char alunos[qt][15];
 float notas[qt][2];
 float medias[qt];


 int i, j;

 for(i=1; i<=qt; i++){
    printf("Nome do aluno %d: " , i);
    scanf(" %s", &alunos[i]);
    printf("Nota 1: ");
    scanf("%f", &notas[i][0]);
    printf("Nota 2: ");
    scanf("%f", &notas[i][1]);

    medias[i] = (notas[i][0] + notas[i][1]) / 2;
 }

 FILE *file = fopen("estudantes.csv", "w");
 if(file == NULL){
    printf("Nao foi possivel abrir o arquivo!\n");
    return 1;
 }

 fprintf(file, "NOME, N1, N2, MEDIA, CONCEITO\n");
 for(j=1; j<=qt; j++){
    char conceito[18];
    if(medias[j] < 7.0){
        strcpy(conceito, "REPROVADO");
    }else{
        strcpy(conceito, "APROVADO");
    }

    fprintf(file, "%s %.1f %.1f %.1f %s\n", alunos[j], notas[j][0], notas[j][1], medias[j], conceito);
 }

 fclose(file);

return 0;
}



