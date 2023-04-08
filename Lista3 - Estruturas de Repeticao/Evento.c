#include <stdio.h>
int main()
{
    int x, m, e;
    while(x!=0 || m!=0)
    {
        scanf("%d %d", &x, &m);
        if(x==0 && m==0) break;
        e = x * m;
        printf("%d\n", e);
    }
    return 0;
}
