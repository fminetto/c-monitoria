/*
 * @name: Hello World Sample Code
 * @author: Felipe Minetto
 * @brief: Programa introdutório em C demonstrando a estrutura básica de um código
 */


/*
    === COMENTÁRIOS EM C ===
    
    Comentários são trechos de texto que o compilador ignora completamente.
    Servem para documentar o código, explicar lógica e facilitar manutenção.
*/

// COMENTÁRIO DE LINHA ÚNICA
// Tudo após '//' até o fim da linha é ignorado pelo compilador
// Use para explicações rápidas ou desabilitar temporariamente uma linha


/* COMENTÁRIO DE MÚLTIPLAS LINHAS
   
   Este tipo começa com '/*' e termina com '*' seguido de '/'.
   Tudo entre eles é ignorado, independente de quantas linhas ocupe.
   
   Use este formato para:
   - Documentar funções e algoritmos complexos
   - Criar cabeçalhos descritivos (como este acima)
   - Desabilitar blocos inteiros de código durante testes
   - Adicionar explicações detalhadas que precisam de várias linhas
*/


/*
    === DIRETIVAS DE PRÉ-PROCESSAMENTO (#include) ===
    
    Antes de compilar seu código, o pré-processador executa comandos
    que começam com '#'.
    
    #include "importa" código de bibliotecas externas para o seu programa.
    É como pegar uma caixa de ferramentas pronta para usar.
    
    Sintaxe:
    #include <biblioteca.h>  → Bibliotecas padrão do sistema C
    #include "meuarquivo.h"  → Seus próprios arquivos de cabeçalho
    
    A biblioteca stdio.h é uma sigla para "Standard Input-Output"
    (Entrada e Saída Padrão). Ela fornece funções essenciais como:
    - printf()  → Exibir texto na tela
    - scanf()   → Ler entrada do usuário
    - getchar() → Ler um caractere
    - puts()    → Imprimir string com quebra de linha automática
*/

#include <stdio.h>


/*
    === A FUNÇÃO main() - Coração do Programa ===
    
    @name: main
    @brief: Ponto de entrada do programa. A execução sempre começa aqui.
    
    Todo programa em C PRECISA ter uma função main().
    Quando você executa o programa, o sistema operacional procura
    esta função e começa a executar o código dentro dela.
    
    PARÂMETROS:
    
    @param argc (Argument Count)
           Contador de argumentos passados ao programa via linha de comando.
           Sempre será pelo menos 1, pois o primeiro argumento é o nome do executável.
    
    @param argv (Argument Vector)
           Vetor (array) de strings contendo os argumentos passados.
           argv[0] = nome do programa
           argv[1], argv[2]... = argumentos adicionais
    
    EXEMPLO PRÁTICO:
    Se você executar no terminal: ./programa teste 123
    argc = 3
    argv[0] = "./programa"
    argv[1] = "teste"
    argv[2] = "123"
    
    RETORNO:
    
    @return int
            Código de status da execução que o sistema operacional recebe.
            Convenção universal:
            - 0 = programa executou com SUCESSO
            - Qualquer outro valor (1, -1, etc.) = indica ERRO
            
            Isso é útil para scripts que verificam se programas falharam.
*/

int main(int argc, char **argv){
    
    /*
        === printf() - Exibindo Texto na Tela ===
        
        Função da stdio.h que imprime texto formatado no console.
        O nome vem de "print formatted" (imprimir formatado).
        
        Caracteres especiais úteis:
        \n  → Nova linha (quebra de linha / Enter)
        \t  → Tabulação horizontal
        \"  → Aspas duplas literais dentro da string
        \\  → Barra invertida literal
        \r  → Retorno de carro (volta ao início da linha)
        
        Especificadores de formato para variáveis:
        %d ou %i → Inteiros com sinal (int)
        %u       → Inteiros sem sinal (unsigned int)
        %f       → Números decimais (float/double)
        %c       → Caractere único (char)
        %s       → String (texto)
        %x       → Hexadecimal
        %%       → Símbolo % literal
        
        Exemplos avançados:
        printf("Idade: %d anos\n", 28);
        printf("Pi: %.2f\n", 3.14159);      // Mostra apenas 2 casas decimais
        printf("Nome: %s\n", "Felipe");
        printf("Letra: %c\n", 'F');
    */
    
    printf("Hello World!");
    
    
    /*
        === return - Finalizando a Função ===
        
        A palavra-chave 'return' encerra IMEDIATAMENTE a execução da função
        e retorna um valor para quem a chamou.
        
        No caso da main(), o valor retornado vai para o sistema operacional.
        
        return 0;  → "Tudo certo, programa terminou com sucesso!"
        return 1;  → "Ocorreu um erro durante a execução"
        
        ⚠️ REGRA IMPORTANTE: Código após 'return' NUNCA será executado!
        Chamamos isso de "código morto" ou "dead code".
        Compiladores modernos geralmente emitem avisos sobre isso.
    */
    
    return 0;
    
    
    // === ZONA DE CÓDIGO MORTO (Dead Code) ===
    // Esta linha está após o 'return', então NUNCA será executada!
    // O fluxo do programa já terminou acima.
    // Deixei aqui como exemplo didático do que NÃO fazer.
    
    printf("Não executa aqui");
    
    
    /*
        💡 PRÓXIMOS PASSOS PARA ESTUDAR:
        
        1. Compile este programa:
           gcc hello-world.c -o hello
        
        2. Execute:
           ./hello
        
        3. Experimente adicionar mais printf() antes do return
        
        4. Teste imprimir os argumentos:
           printf("Total de argumentos: %d\n", argc);
           printf("Nome do programa: %s\n", argv[0]);
        
        5. Execute com argumentos:
           ./hello arg1 arg2
           E modifique o código para exibir argv[1] e argv[2]
        
        6. Mova o 'return 0' para ANTES do printf e veja o que acontece
    */
}
