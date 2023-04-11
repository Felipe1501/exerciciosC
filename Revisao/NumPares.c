#include <stdio.h>

int main(){

    int x, z, i;

    scanf("%i %i", &x, &z);

    if(x % 2 != 0) x++;

    for(i=x;i<=z; i=i+2){

        printf("%i ", i);
    }
    return 0;
}
