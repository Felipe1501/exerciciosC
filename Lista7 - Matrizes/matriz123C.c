#include <stdio.h>
#include <string.h>


int main()
{
    int nr;
    while(scanf("%d",&nr)!= EOF){

        int matriz[nr][nr];
        int i,j,c,pos;

        for(i=0; i<nr; i++){
            for(j=0; j<nr; j++){
                matriz[i][j]=3;
            }
        }
        for(i=0; i<nr; i++){
            matriz[i][i]=1;
            pos = nr-1;
        }
        for(i=0,j=pos; i<nr;i++,j--){
            matriz[i][j]=2;
        }
        for(i=0; i<nr; i++){
            for(j=0; j<nr; j++){
                printf("%d",matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
