#include <stdio.h> // Biblioteca padrão de entrada e saída de dados

// dentro da função main, eu faço primeiro a declaração das variáveis que eu vou usar, depois eu faço a leitura dos dados e por último eu faço o processamento e exibo o resultado.
int main() {
    int a; // eu posso declarar a variável 'a','b' e 'soma' do tipo inteiro na mesma linha tbm.
    int b;
    int soma;

    printf("Digite o primeiro número: \n");
    scanf("%d", &a);
     
    printf("Digite o segundo número: \n");
    scanf("%d", &b);

    soma = a + b;
    printf("A Soma dos numeros inteiros é: %d\n", soma);

    return 0;
}


                                // COMENTÁRIOS ÚTEIS
/*1. 👉 #include <stdio.h> // Biblioteca padrão de entrada e saída de dados. 
  2. 👉 int main() { // Função principal do programa. 
  3. 👉 int a; // Declaração da variável 'a' do tipo inteiro.
        int b; // Declaração da variável 'b' do tipo inteiro.
        int soma; // Declaração da variável 'soma' do tipo inteiro.

  4. 👉 printf("Digite o primeiro número: "); // Exibe mensagem para o usuário.
  5. 👉 scanf("%d", &a); // Lê o valor inteiro digitado pelo usuário e armazena na variável 'a'.
  6. 👉 printf("Digite o segundo número: "); // Exibe mensagem para o usuário.
  7. 👉 scanf("%d", &b); // Lê o valor inteiro digitado pelo usuário e armazena na variável 'b'.
  8. 👉 soma = a + b; // Realiza a soma dos valores armazenados em 'a' e 'b' e armazena o resultado em 'soma'.
  9. 👉 printf("A Soma dos numeros inteiros é: %d\n", soma); // Exibe o resultado da soma.
  10. 👉 return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
  11. 👉 } // Fim da função principal.


    OBS: %d indica que o valor a ser lido é do tipo inteiro.
    %d também é utilizado para exibir o valor inteiro na tela.

    &a e &b são os endereços de memória das variáveis 'a' e 'b', respectivamente.
        .O operador '&' é utilizado para obter o endereço de uma variável em C.
        .O operador '&' é necessário na função scanf para que o valor digitado pelo usuário seja armazenado na variável correta.
        . Sem o operador '&', a função scanf não saberia onde armazenar o valor digitado.
        . O operador '&' é utilizado para passar o endereço da variável para a função scanf, permitindo que ela armazene o valor digitado na variável correta. */ 



                                  //PARA SABER MAIS
/* 1. O que é uma variável?
   - Uma variável é um espaço na memória do computador que pode armazenar um valor. 
   - As variáveis têm um nome e um tipo, que determina o tipo de dado que podem armazenar (como inteiro, ponto flutuante, caractere, etc.).
    - No exemplo, 'a', 'b' e 'soma' são variáveis do tipo inteiro.
    
2. O que é uma função?
   - Uma função é um bloco de código que executa uma tarefa específica.
    - As funções podem receber entradas (argumentos) e retornar um valor.
    - A função 'main' é a função principal de um programa em C, onde a execução começa.
    
3. O que é uma biblioteca?
   - Uma biblioteca é um conjunto de funções e definições que podem ser usadas em um programa.

printf( “Digite o primeiro inteiro\n” ); 'prompt' imprime a literal Digite o primeiro inteiro na tela e posiciona o cursor no início da próxima linha. Essa mensagem é um prompt, porque ela pede ao usuário que tome uma atitude específica.

scanf( “%d”, &inteiro1 ); 'lê um inteiro' usa scanf para obter um valor do usuário. A função scanf lê o dado de entrada-padrão, que normalmente é o teclado. Esse scanf tem dois argumentos, “%d” e &inteiro1. O primeiro argumento, a string de controle de formato, indica o tipo de dado que deve ser digitado pelo usuário. O especificador de conversão %d indica que os dados devem ser um inteiro (a letra d significa ‘inteiro decimal’). O %, nesse contexto, é tratado pelo scanf (e pelo printf, como veremos adiante) como um caractere especial, que inicia um especificador de conversão. O segundo argumento de scanf começa com um (&) — chamado de operador de endereço em C —, seguido pelo nome da variável. O (&), quando combinado com o nome da variável, informa à scanf o local (ou endereço) na memória.*/