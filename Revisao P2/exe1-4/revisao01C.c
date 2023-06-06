#include <stdio.h>

int main(){

int nrs[5];
int i, j;

for(i=0; i<=4; i++){
    scanf("%d", &nrs[i]);
}
printf("\n");
for(j=0; j<=4; j++){
    if(nrs[j] < 0) {
        nrs[j] = 0;
    }

    printf("%i\n", nrs[j]);
}



return 0;
}
