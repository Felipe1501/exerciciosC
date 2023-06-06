#include <stdio.h>

int mais_votado(int, int, int[*][*]);

int main() {

    int urnas[2][3];

    int i,j;

    for(i=0;i<2;i++) {
        printf("Urna %d\n", i+1);
        for(j=0;j<3;j++) {
            scanf("%d",&urnas[i][j]);
        }
    }
    printf("\nMais votados: %d\n", mais_votado(2, 3, urnas));
    return 0;
}

int mais_votado(int qt_urnas, int qt_votos, int u[qt_urnas][qt_votos]) {
    int i, j;

    int c1=0;
    int c2=0;

    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            if(u[i][j] == 1) {
                c1++;
            }
            else if(u[i][j] == 2){
                c2++;
            }
        }
    }

    if(c1>c2) {
        return 1;
    }
    else {
        return 2;
    }
}
