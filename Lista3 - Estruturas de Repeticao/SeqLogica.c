#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, n2, n3, n4, n5;

    scanf("%d", &n);

    for(i=1; i <= n; i++){
        n2 = (pow(i, 2));
        n3 = (pow(i, 3));

        printf("%d %d %d\n", i, n2, n3);

        n4 = n2 + 1;
        n5 = n3 + 1;

        printf("%d %d %d\n", i, n4, n5);

    }

        return 0;
}