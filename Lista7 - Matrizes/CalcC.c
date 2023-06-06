#include <stdio.h>
#include <ctype.h>
#include <string.h>

short somaNum(char *);

void main ()
{

	unsigned casos, i;
	char caracteres[15], caractere, lixo;

	scanf("%u", &casos);
	scanf("%c", &lixo); // Trata o buffer do scanf anterior;

	while (casos--)
	{

		// Trata caractere a caractere na entrada;
		// Caso o caractere seja um n�mero, 'i' incrementa para escrever na pr�xima posi��o esse caractere;
		// Se n�o for um n�mero, � feito uma verifica��o se na posi��o atual j� tem um n�mero
		// Caso seja verdadeiro, um espa�o � escrito na pr�xima posi��o;
		// Caso contr�rio, um espa�o � escrito na posi��o atual;
		// Esse m�todo resultar� em uma string com apenas um espa�o entre os conjuntos de n�meros;

		i = 0;
		do
		{
			scanf("%c", &caractere);

			if(isdigit(caractere))
				caracteres[++i] = caractere;

			else
				if(isdigit(caracteres[i]))
					caracteres[++i] = ' ';

				else
					caracteres[i] = ' ';

		} while (caractere != '\n');

		// Grava o caractere nulo ao final da string formada;
		caracteres[i] = '\0';

    	printf("%hd\n", somaNum(caracteres));

    	memset(caracteres, 0, sizeof(caracteres));
	}
}

short somaNum(char *str)
{

	unsigned short i, j, k, tam;
	unsigned short aux, contador = 0, l, z;
	short numeros[5], soma = 0;

	tam = strlen(str);

	aux = tam;
	j = 1;
	while (aux--)
	{
		k = 0;
		// Esse la�o transforma todos os caracteres que s�o n�meros na string em inteiro e os salva num vetor de inteiros;
		for (i = j; i < tam; i++)
		{
			if (isdigit(str[i]))
			{
				contador++;
				numeros[k++] = (int)(str[i] - 48);
			}
			else
			{
				// Se entrou no else, foi porque encontrou um espa�o
				// E uma vez que h� exatamente e apenas um espa�o entre os n�meros
				// 'i' incrementa, porque da pr�xima vez que o la�o come�ar a rodar
				// Vai com certeza come�ar de um n�mero
				// Caso contr�rio, entraria em um loop;
				i++;
				break;
			}
		}

		// A pr�xima vez que o la�o rodar, tem que come�ar da onde parou;
		// Por isso, ao final, 'j' recebe o valor de 'i';
		j = i;

		// 'z' vai controlar se o d�gito analisado vai estar na casa das centenas, dezenas ou unidade;
		// A vari�vel 'contador' no la�o anterior controla quantos d�gitos o n�mero ter�;
		for (l = 0, z = contador; l < contador; l++, z--)
		{

			if (z == 1)
				soma += numeros[l];
			else if (z == 2)
				soma += numeros[l] * 10;
			else if (z == 3)
				soma += numeros[l] * 100;

		}

		memset(numeros, 0, sizeof(numeros));
		contador = 0;

	}

	return soma;

}
