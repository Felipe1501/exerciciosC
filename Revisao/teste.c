// isso aqui � um coment�rio, confia nele :D
// include serve para incluir uma biblioteca, sempre coloque essa ai
#include <stdio.h>

// a int main() � a fun��o principal, sem ela o programa n�o roda, coloque todo o seu c�digo dentro das chaves {}
int main () {

    // isso aqui � um coment�rio, confia nele :D
    // declare todas as vari�veis que voc� vai usar primeiro aqui em cima
    // fica mais f�cil de se organizar
    // o int � para n�meros inteiros
    int inteiro, inteiro2 = 0;

    // double � para n�meros quebrados
    double quebrado = 0.00;

    //  float tamb�m � para n�meros quebrados

    float quebrado2 = 0.00;

    //  scanf � para receber informa��es,
    //  %i � para n�meros inteiros
    //  %lf � para
    //  precisa colocar & na vari�vel, n�o sei porque mas � sintaxe do C
    scanf("%i %lf", &inteiro, &quebrado);

    /*
    isso tamb�m � um coment�rio

    ISSO AQUI � ESCREVER TEXTOS SIMPLES
    \a Alerta. Soa o beep do sistema.
    \b Retrocesso. Retrocede um espa�o.
    \n Nova linha. Posiciona o curso no in�cio da nova linha.
    \r Retorno de cursor (CR). Posiciona o cursor no in�cio da
    linha atual; n�o avan�a para a pr�xima linha.
    \t Tabula��o. Move o cursor para a pr�xima de tabula��o.
    \v Tabula��o vertical.
    \" Aspas. Imprime um caractere de aspas duplas.
    \\ Barra. Imprime um caractere de barra invertida.
    %% Imprime um �nico %



    ISSO AQUI � PARA INCLUIR VARI�VEIS DENTRO DO TEXTO
    %c char ou int Caractere
    %d int ou char Inteiro decimal
    %i int ou char Inteiro
    %Ld ou %lld long long Decimal
    %e float ou double Nota��o cient�fica
    %f float Ponto flutuante
    %lf double Ponto flutuante
    %o int ou char Octal
    %s char[] Cadeia de caracteres
    %x int ou char Hexadecimal

    OPERADORES MATEM�TICOS
    + Soma
    - Subtra��o
    * Multiplica��o
    / Divis�o
    % M�dulo (resto da
    divis�o inteira)



    PARTICULARMENTE EU S� USO %i E %lf MAS A ESCOLHA � SUA
    */

    //  printf vai apenas escrever informa��es
    //  %.2lf est� dizendo para pegar apenas dois d�gitos depois da casa decimal, mas pode ser outro n�mero
    printf("%i %.2lf\n", inteiro, quebrado);


    // Se voc� n�o sabe usar if else a essa altura do campeonato, ai fica dif�cil n� amigo?
    if (inteiro == 1) {
        printf("primeiro\n");
        // == quer dizer SE FOR IGUAL
    } else if (inteiro == 2 && quebrado != 3.00){
        // != quer dizer SE FOR DIFERENTE
        // && quer dizer E, ent�o ambas as condi��es devem ser seguidas
        printf("segundo com quebrado\n");
    } else if (inteiro == 3 || quebrado == 3.00) {
        // || quer dizer OU, ent�o pelo menos uma condi��o deve ser seguida
        printf("terceiro\n");
    } else {
        printf("qualquer outro\n");
    }

    //% � para resto da divis�o, ai embaixo verifica se � par
    if (inteiro % 2 == 0) {
        printf("O numero e par");
    }

    //  tem o jeito curto caso queira usar, mas � so o if sem else e s� pra uma linha
    //  if (inteiro == 1) printf("primeiro\n");
    //divirta-se

    //  switch case � mais pra casos onde sempre vai ser == e sem &&, no m�ximo || ;)
    //  dentro do switch() fica qual ser� o par�metro a ser analisado
    switch(inteiro) {
        //case � qual o valor a ser seguido para que o c�digo dentro seja executado at� o break
        case 1:
            printf("Primeiro\n");
            break;
        case 2:
            printf("Segundo\n");
            break;
        case 3:
            printf("Terceiro\n");
            break;
            //  se eu n�o colocar break ele executa o que est� embaixo at� encontrar um, voc� pode juntar codi��es assim tamb�m
        case 4:
            //  default � o que vai acontecer se nenhum dos casos anteriores servir
        default:
            printf("To com preguica de escrever o resto\n");
    }

    //  for � um la�o de repeti��o e significa PARA, primeiro voc� define a vari�vel par�metro,
    //  depois diz qual o par�metro a ser seguido e por fim, o que acontece a cada vez que passa no loop
    //  ++ significa incrementar em 1, ou seja, somar 1. -- � a mesma coisa s� que subtrair
    //  < signigica menor que, ent�o se o primeiro for menor que o segundo, a condi��o � verdadeira. > � menor que ent�o voc� sabe onde isso leva n�?
    //  <= ou >= significa menor ou igual e maior ou igual, pensa um pouco que voc� consegue entender o que eles fazem
    for (inteiro = 1; inteiro < 6; inteiro++) {
        printf("%i\n", inteiro);
    }

    //  while � basicamente ENQUANTO, ent�o ENQUANTO o par�metro estiver sendo seguindo, ele continua... infinitamente...
    //  N�O. ESQUECE. DE. FAZER. COM. QUE. ELE. PARE. obrigado por sua aten��o
    while (inteiro < 10) {
        printf("%i\n", inteiro);
        inteiro++;
    }

    //  do while � basicamente um while da deep web :D
    //  ele sempre executa uma vez, mesmo que a condi��o n�o tenha sido seguida
    do {
        printf("%i\n", inteiro);
        inteiro++;
    } while (inteiro != 10 && inteiro < 20);

    //o return sempre � necess�rio, s� deixa ele ai t�?
    return 0;

    // SE O FERAUCHE RECLAMAR A CULPA � SUA
}
