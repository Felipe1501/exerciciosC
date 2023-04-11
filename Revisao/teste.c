// isso aqui é um comentário, confia nele :D
// include serve para incluir uma biblioteca, sempre coloque essa ai
#include <stdio.h>

// a int main() é a função principal, sem ela o programa não roda, coloque todo o seu código dentro das chaves {}
int main () {

    // isso aqui é um comentário, confia nele :D
    // declare todas as variáveis que você vai usar primeiro aqui em cima
    // fica mais fácil de se organizar
    // o int é para números inteiros
    int inteiro, inteiro2 = 0;

    // double é para números quebrados
    double quebrado = 0.00;

    //  float também é para números quebrados

    float quebrado2 = 0.00;

    //  scanf é para receber informações,
    //  %i é para números inteiros
    //  %lf é para
    //  precisa colocar & na variável, não sei porque mas é sintaxe do C
    scanf("%i %lf", &inteiro, &quebrado);

    /*
    isso também é um comentário

    ISSO AQUI É ESCREVER TEXTOS SIMPLES
    \a Alerta. Soa o beep do sistema.
    \b Retrocesso. Retrocede um espaço.
    \n Nova linha. Posiciona o curso no início da nova linha.
    \r Retorno de cursor (CR). Posiciona o cursor no início da
    linha atual; não avança para a próxima linha.
    \t Tabulação. Move o cursor para a próxima de tabulação.
    \v Tabulação vertical.
    \" Aspas. Imprime um caractere de aspas duplas.
    \\ Barra. Imprime um caractere de barra invertida.
    %% Imprime um único %



    ISSO AQUI É PARA INCLUIR VARIÁVEIS DENTRO DO TEXTO
    %c char ou int Caractere
    %d int ou char Inteiro decimal
    %i int ou char Inteiro
    %Ld ou %lld long long Decimal
    %e float ou double Notação científica
    %f float Ponto flutuante
    %lf double Ponto flutuante
    %o int ou char Octal
    %s char[] Cadeia de caracteres
    %x int ou char Hexadecimal

    OPERADORES MATEMÁTICOS
    + Soma
    - Subtração
    * Multiplicação
    / Divisão
    % Módulo (resto da
    divisão inteira)



    PARTICULARMENTE EU SÓ USO %i E %lf MAS A ESCOLHA É SUA
    */

    //  printf vai apenas escrever informações
    //  %.2lf está dizendo para pegar apenas dois dígitos depois da casa decimal, mas pode ser outro número
    printf("%i %.2lf\n", inteiro, quebrado);


    // Se você não sabe usar if else a essa altura do campeonato, ai fica difícil né amigo?
    if (inteiro == 1) {
        printf("primeiro\n");
        // == quer dizer SE FOR IGUAL
    } else if (inteiro == 2 && quebrado != 3.00){
        // != quer dizer SE FOR DIFERENTE
        // && quer dizer E, então ambas as condições devem ser seguidas
        printf("segundo com quebrado\n");
    } else if (inteiro == 3 || quebrado == 3.00) {
        // || quer dizer OU, então pelo menos uma condição deve ser seguida
        printf("terceiro\n");
    } else {
        printf("qualquer outro\n");
    }

    //% é para resto da divisão, ai embaixo verifica se é par
    if (inteiro % 2 == 0) {
        printf("O numero e par");
    }

    //  tem o jeito curto caso queira usar, mas é so o if sem else e só pra uma linha
    //  if (inteiro == 1) printf("primeiro\n");
    //divirta-se

    //  switch case é mais pra casos onde sempre vai ser == e sem &&, no máximo || ;)
    //  dentro do switch() fica qual será o parâmetro a ser analisado
    switch(inteiro) {
        //case é qual o valor a ser seguido para que o código dentro seja executado até o break
        case 1:
            printf("Primeiro\n");
            break;
        case 2:
            printf("Segundo\n");
            break;
        case 3:
            printf("Terceiro\n");
            break;
            //  se eu não colocar break ele executa o que está embaixo até encontrar um, você pode juntar codições assim também
        case 4:
            //  default é o que vai acontecer se nenhum dos casos anteriores servir
        default:
            printf("To com preguica de escrever o resto\n");
    }

    //  for é um laço de repetição e significa PARA, primeiro você define a variável parâmetro,
    //  depois diz qual o parâmetro a ser seguido e por fim, o que acontece a cada vez que passa no loop
    //  ++ significa incrementar em 1, ou seja, somar 1. -- é a mesma coisa só que subtrair
    //  < signigica menor que, então se o primeiro for menor que o segundo, a condição é verdadeira. > é menor que então você sabe onde isso leva né?
    //  <= ou >= significa menor ou igual e maior ou igual, pensa um pouco que você consegue entender o que eles fazem
    for (inteiro = 1; inteiro < 6; inteiro++) {
        printf("%i\n", inteiro);
    }

    //  while é basicamente ENQUANTO, então ENQUANTO o parâmetro estiver sendo seguindo, ele continua... infinitamente...
    //  NÃO. ESQUECE. DE. FAZER. COM. QUE. ELE. PARE. obrigado por sua atenção
    while (inteiro < 10) {
        printf("%i\n", inteiro);
        inteiro++;
    }

    //  do while é basicamente um while da deep web :D
    //  ele sempre executa uma vez, mesmo que a condição não tenha sido seguida
    do {
        printf("%i\n", inteiro);
        inteiro++;
    } while (inteiro != 10 && inteiro < 20);

    //o return sempre é necessário, só deixa ele ai tá?
    return 0;

    // SE O FERAUCHE RECLAMAR A CULPA É SUA
}
