#include <stdio.h>

int main(){

    int x, z, menor;

    scanf("%d %d", &x, &z);
    if(z < x){
        menor = z;
    }
    else if(x < z){
        menor = x;
    }else{
        menor = 0;
    }

    while(x != z){

    scanf("%d %d", &x, &z);

    if(z <= menor && z < x){
        menor = z;

    }
    else if(x <= menor && x < z){
        menor = x;
    }

}

    printf("Menor: %d", menor);
    return 0;
}
