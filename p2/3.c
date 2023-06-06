#include <stdio.h>

int main(void) {

    int qtd = 0;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    float nota[qtd][3];

    int i;
    
    for(i=0; i<qtd; i++) {
        printf("Aluno %i: ", i+1);
        scanf("%f %f %f", &nota[i][0], &nota[i][1], &nota[i][2]);
    }

    float media = 0;
    int flag = 0;
    for(i=0; i<qtd; i++) {
        media = 0.2*nota[i][0] + 0.3*nota[i][1] + 0.5*nota[i][2];
        if(media < 7) {
            if(flag == 0) {
                printf("Alunos reprovados: %d", i+1);
                flag = 1;
            }
            else {
                printf(" %d", i+1);
            }
        }
    }
    printf("\n");

    return 0;
}
