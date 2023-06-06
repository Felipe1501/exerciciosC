#include <stdio.h>
#include <string.h>


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

 for(j=1; j<=qt; j++){
        printf("%s\n", alunos[j]);
        printf("Media: %.1f ", medias[j]);
    char conceito[18];
    if(medias[j] < 7.0){

        strcpy(conceito, "REPROVADO");
        printf("%s\n", conceito);
    }else{
        strcpy(conceito, "APROVADO");
        printf("%s\n", conceito);
    }

 }
return 0;
}



