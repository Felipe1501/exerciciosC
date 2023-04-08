#include <stdio.h>

int main()

{

   double valor, moeda;

   scanf ("%lf",&valor);

   int notas, nt100 , resto100 , nt50, resto50, nt20, resto20, nt10, resto10, nt5, resto5, nt2, resto2, moedas, moeda1, moeda50, restoMoeda50, moeda25, restoMoeda25, moeda10, restoMoeda10, moeda5, moeda01;

   notas = valor;

   nt100 = notas / 100;

   resto100 = notas % 100;

   nt50 = resto100 /50;

   resto50 = resto100 % 50;

   nt20 = resto50 / 20;

   resto20 = resto50 % 20;

   nt10 = resto20 / 10;

   resto10 = resto20 % 10;

   nt5 = resto10 / 5;

   resto5 = resto10 % 5;

   nt2 = resto5 / 2;

   resto2 = resto5 % 2;

   moeda = valor * 100;

   moedas =(int)moeda;

   moeda1 = moedas % 100;

   moeda50 = moeda1 / 50;

   restoMoeda50 = moeda1 % 50;

   moeda25 = restoMoeda50 / 25;

   restoMoeda25 = restoMoeda50 % 25;

   moeda10 = restoMoeda25 /10;

   restoMoeda10 = restoMoeda25 %10;

   moeda5 = restoMoeda10 /5;

   moeda01 = restoMoeda10 % 5;

   printf ("NOTAS:\n");

   printf ("%d nota(s) de R$ 100.00\n", nt100);

   printf ("%d nota(s) de R$ 50.00\n", nt50);

   printf ("%d nota(s) de R$ 20.00\n", nt20);

   printf ("%d nota(s) de R$ 10.00\n",nt10);

   printf ("%d nota(s) de R$ 5.00\n", nt5);

   printf ("%d nota(s) de R$ 2.00\n", nt2);

   printf ("MOEDAS:\n");

   printf ("%d moeda(s) de R$ 1.00\n", resto2);

   printf ("%d moeda(s) de R$ 0.50\n", moeda50);

   printf ("%d moeda(s) de R$ 0.25\n", moeda25);

   printf ("%d moeda(s) de R$ 0.10\n",moeda10);

   printf ("%d moeda(s) de R$ 0.05\n", moeda5);

   printf ("%d moeda(s) de R$ 0.01\n", moeda01);

   return 0;

}