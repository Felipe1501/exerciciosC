#include <stdio.h>
int main()
{
    int n, i;

    scanf("%i", &n);



    for(i=1; i<=n*4; i++){
        if(i % 4 == 0){
            printf("PUM\n");

        }else{
            printf("%i ", i);
        }

    }

    return 0;
}