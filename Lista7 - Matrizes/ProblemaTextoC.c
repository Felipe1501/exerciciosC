#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main ()
{

	char palavra[101], saida[101];
	unsigned short casos, i, j, tamanho;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf(" %s", palavra);

		tamanho = strlen(palavra);

		i = tamanho - 1;
		j = 0;

		// Leio a string de tr�s para frente
		// Visando pegar os caracteres na ordem certa
		// E coloc�-los na string de sa�da;
		while (tamanho--)
		{
			// O padr�o da quest�o s�o os caracteres min�sculos
			// Lidos de tr�s para frente, formam uma palavra;
			if (islower(palavra[i]))
				saida[j++] = palavra[i--];
			else
				i--;
		}

		saida[j] = '\0';
		printf("%s\n", saida);
	}
}
