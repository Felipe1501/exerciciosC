#include <stdio.h>
int main()
{
    int i=0, x, soma=0;
    scanf("%i", &x);

    if(x % 2 == 0) x++;

    for(i=x;i<=x+10; i=i+2){
        printf("%i\n", i);
    }

    return 0;
}