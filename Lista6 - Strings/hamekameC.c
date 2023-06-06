#include <stdio.h>
#include <string.h>

void kameHame(char *, char *);

void main ()
{

	// A string de sa�da poder� ser muito maior do que a string de entrada;
	char palavra[201], saida[100000];
	unsigned short casos;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf(" %s", palavra);

		// Para n�o perder tempo, caso a string de entrada seja a string base "hamekame"
		// a resposta ser� apenas "ka" sem precisar chamar a fun��o que resolve isso;
		if (strcmp(palavra, "hamekame") == 0)
			printf("ka\n");
		else
		{
			kameHame(palavra, saida);
			printf("%s\n", saida);
		}
	}
}

void kameHame(char *str, char *str2)
{
	unsigned short contador = 0, aux;

	// A primeira posi��o da string de sa�da recebe o caractere 'k';
	// Incrementa a string de entrada e a string de sa�da em uma posi��o;
	*(str2++) = 'k'; str++;

	// Conta quantos caracteres 'a' existe(m) na primeira parte da string de entrada;
	// A quantidade de caracteres 'a' nessa parte vai definir a quantidade de caracteres 'a' na string de sa�da;
	while (*str == 'a')
	{
		str++;
		contador++;
	}

	while (*str != 'a')
		str++;

	// Se a quantidade de caracteres 'a' na primeira parte foi igual a 1
	// Ent�o a quantidade de 'a' na string de sa�da � igual a da segunda parte da string de entrada;
	if (contador == 1)
	{

		while (*str == 'a')
			*(str2++) = *(str++);

		*str2 = '\0';

	}
	else
	{
		// Caso contr�rio, cada 'a' da segunda parte da string de entrada vale a quantidade de 'a' da primeira parte;
		while (*str == 'a')
		{
			aux = contador;
			while (aux-- > 0)
				*(str2++) = 'a';

			str++;
		}
	}

	*str2 = '\0';
}
