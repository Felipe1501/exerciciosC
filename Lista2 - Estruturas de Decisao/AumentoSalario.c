#include <stdio.h>

int main() {

    float salario, novosalario, reajuste;

    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400.00){
        reajuste = (salario * 15) / 100;
        novosalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %\n");
    }
    else if(salario >= 401.00 && salario <= 800.00){
        reajuste = (salario * 12) / 100;
        novosalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %\n");
    }
    else if(salario >= 800.01 && salario <= 1200.00){
        reajuste = (salario * 10) / 100;
        novosalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %\n");
    }
    else if(salario >= 1200.01 && salario <= 2000.00){
        reajuste = (salario * 7) / 100;
        novosalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %\n");
    }
    else if(salario > 2000.00){
        reajuste = (salario * 4) / 100;
        novosalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novosalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %\n");
    }


    return 0;
}