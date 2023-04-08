#include <stdio.h>
int main()
{

    int i, n, contador=0;

    for(i=1; i<=5; i++){

        scanf("%d", &n);
        if(n % 2 == 0){
            contador++;
        }

    }
    printf("%d valores pares\n", contador);

    return 0;
}
