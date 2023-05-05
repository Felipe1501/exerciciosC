

#include<stdio.h>
int main()
{
   long long int fib, pri = 0, seg = 1, prox, nr;

   int i,j;

   scanf("%d", &j);

   for(i=1; i<=j; i++, pri = 0, seg = 1){

       scanf("%lld",&fib);
       fib = fib + 1;
       for ( nr = 0; nr < fib; nr++ ){

          if (nr <= 1){
            prox = nr;
          }
          else
          {
             prox = pri + seg;
             pri = seg;
             seg = prox;
          }
       }
          printf("Fib(%lld) = %lld\n",fib-1,prox);
   }
   return 0;
}
