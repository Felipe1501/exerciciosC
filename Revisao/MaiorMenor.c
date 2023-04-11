#include <stdio.h>

int main(){

    int x, y, z;

    scanf("%i %i %i", &x, &y, &z);

    if(x > y && x > z && y > z){
        printf("%i e %i", z, x);
    }
    else if(x > y && x > z && z > y){
        printf("%i e %i", y, x);
    }
    else if(y > x && y > z && z > x){
        printf("%i e %i", x, y);
    }
    else if(y > x && y > z && x > z){
        printf("%i e %i", z, y);
    }
    else if(z > x && z > y && x > y){
        printf("%i e %i", y, z);
    }
    else if(z > x && z > y && y > x){
        printf("%i e %i", x, z);
    }
    else if(x == y || x == z || y == z){
        printf("existem valores iguais, digite novamente!!!\n");
    }
    return 0;
}
