/*
 * ============================================================================
 * @name:    entrada-saida.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre entrada e saída de dados em C
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra todas as formas de entrada e saída de dados em C,
 * incluindo printf(), scanf(), getchar(), gets(), fgets() e suas variações.
 * Aborda formatação, validação, buffers e boas práticas.
 * 
 * Conteúdo:
 * - printf() e suas formatações
 * - scanf() e leitura de dados
 * - getchar(), putchar()
 * - gets() vs fgets() (segurança)
 * - Limpeza de buffer
 * - Exemplos práticos
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              ENTRADA E SAÍDA DE DADOS EM C (I/O)                  ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        I/O = Input/Output (Entrada/Saída)
        
        A biblioteca stdio.h (Standard Input-Output) fornece funções para:
        📤 SAÍDA: Exibir dados na tela (printf, putchar, puts)
        📥 ENTRADA: Ler dados do usuário (scanf, getchar, fgets)
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  printf() - Saída Formatada                       ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Função mais usada para exibir dados na tela.
        Nome vem de "print formatted" (imprimir formatado).
        
        SINTAXE:
        printf("formato", variáveis...);
        
        
        ═══════════════════════════════════════════════════════════════════
        ESPECIFICADORES DE FORMATO (Placeholders)
        ═══════════════════════════════════════════════════════════════════
        
        %d ou %i  → int (inteiros com sinal)
        %u        → unsigned int (inteiros sem sinal)
        %ld       → long int
        %lld      → long long int
        %f        → float ou double (padrão: 6 casas decimais)
        %lf       → double (em scanf)
        %c        → char (um caractere)
        %s        → string (texto)
        %p        → ponteiro (endereço de memória)
        %x ou %X  → hexadecimal (minúsculo ou maiúsculo)
        %o        → octal
        %%        → símbolo % literal
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              DEMONSTRAÇÃO DE printf()                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    // Exemplos básicos
    int idade = 28;
    float altura = 1.75f;
    char inicial = 'F';
    
    printf("Exemplo 1 - Básico:\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %f metros\n", altura);
    printf("Inicial: %c\n\n", inicial);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        FORMATAÇÃO AVANÇADA
        ═══════════════════════════════════════════════════════════════════
        
        %.nf  → n casas decimais (ex: %.2f = 2 casas)
        %nd   → n dígitos mínimos (preenche com espaços)
        %0nd  → n dígitos mínimos (preenche com zeros)
        %-nd  → alinha à esquerda
        %+d   → força exibir sinal (+/-)
    */
    
    printf("Exemplo 2 - Formatação Avançada:\n");
    float preco = 1299.90f;
    printf("Preço: R$ %.2f\n", preco);           // 2 casas decimais
    printf("Preço: R$ %10.2f\n", preco);         // 10 caracteres, 2 decimais
    printf("Preço: R$ %-10.2f (esquerda)\n", preco);  // Alinhado à esquerda
    
    int numero = 42;
    printf("Número: %05d\n", numero);            // Preenche com zeros: 00042
    printf("Número: %+d\n\n", numero);           // Força sinal: +42
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        CARACTERES ESPECIAIS (Escape Sequences)
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("Exemplo 3 - Caracteres Especiais:\n");
    printf("Quebra de linha: Linha 1\nLinha 2\n");
    printf("Tabulação:\tTexto tabulado\n");
    printf("Aspas: \"Texto entre aspas\"\n");
    printf("Barra invertida: C:\\Users\\Felipe\n");
    printf("Backspace: ABC\b\bXY\n");            // ABXYspace (apaga BC)
    printf("Retorno de carro: 123\rXY\n\n");    // XY3 (volta ao início)
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        MÚLTIPLAS VARIÁVEIS
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("Exemplo 4 - Múltiplas Variáveis:\n");
    char nome_exemplo[] = "Felipe";
    int anos = 28;
    float salario = 3500.50f;
    printf("Nome: %s, Idade: %d anos, Salário: R$ %.2f\n\n", nome_exemplo, anos, salario);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  puts() - Saída Simples de String                 ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Exibe uma string e adiciona quebra de linha automaticamente.
        Mais simples que printf quando não precisa de formatação.
    */
    
    printf("Exemplo 5 - puts():\n");
    puts("Esta é uma linha com quebra automática");
    puts("Outra linha");
    printf("\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                putchar() - Saída de Um Caractere                  ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Exibe um único caractere na tela.
    */
    
    printf("Exemplo 6 - putchar():\n");
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('\n');
    putchar('\n');
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  scanf() - Entrada Formatada                      ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Lê dados formatados do teclado (entrada padrão).
        Nome vem de "scan formatted" (escanear formatado).
        
        ⚠️ IMPORTANTE: Use & (endereço) antes das variáveis!
        Exceção: arrays/strings já são endereços, não precisam de &
        
        SINTAXE:
        scanf("formato", &variavel);
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              DEMONSTRAÇÃO DE scanf()                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int idade_usuario;
    printf("Digite sua idade: ");
    scanf("%d", &idade_usuario);
    printf("Você tem %d anos.\n\n", idade_usuario);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        LENDO DIFERENTES TIPOS
        ═══════════════════════════════════════════════════════════════════
    */
    
    float peso;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Seu peso: %.1f kg\n\n", peso);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PROBLEMA: Buffer de Entrada (stdin)
        ═══════════════════════════════════════════════════════════════════
        
        Quando você usa scanf(), o caractere '\n' (Enter) fica no buffer.
        Isso causa problemas ao ler caracteres com scanf() ou getchar().
        
        SOLUÇÃO 1: Limpar buffer com getchar()
        SOLUÇÃO 2: Usar um espaço antes de %c no scanf
        SOLUÇÃO 3: Usar fflush(stdin) [não portável, evite]
    */
    
    char letra;
    printf("Digite uma letra: ");
    getchar();  // Limpa o '\n' que ficou do scanf anterior
    scanf("%c", &letra);
    printf("Você digitou: %c\n\n", letra);
    
    // OU use espaço antes do %c:
    char outra_letra;
    printf("Digite outra letra: ");
    scanf(" %c", &outra_letra);  // Espaço antes de %c ignora whitespace
    printf("Você digitou: %c\n\n", outra_letra);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        LENDO MÚLTIPLOS VALORES
        ═══════════════════════════════════════════════════════════════════
    */
    
    int dia, mes, ano;
    printf("Digite uma data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Data informada: %02d/%02d/%d\n\n", dia, mes, ano);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                    getchar() - Ler Um Caractere                   ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Lê um único caractere do teclado.
        Útil para pausar programas ou ler teclas.
    */
    
    printf("Pressione Enter para continuar...");
    getchar();  // Limpa buffer
    getchar();  // Aguarda Enter
    printf("Continuando...\n\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              gets() vs fgets() - Lendo Strings                    ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ❌ gets() - NUNCA USE! (Removido do C11)
        Motivo: Não verifica tamanho, causa buffer overflow (vulnerabilidade)
        
        ✅ fgets() - USE SEMPRE!
        Sintaxe: fgets(string, tamanho_max, stdin);
        Seguro: limita tamanho de entrada
    */
    
    char nome_completo[50];
    
    printf("Digite seu nome completo: ");
    getchar();  // Limpa buffer
    fgets(nome_completo, 50, stdin);
    
    // fgets() inclui o '\n' no final, vamos removê-lo:
    nome_completo[strcspn(nome_completo, "\n")] = '\0';
    
    printf("Olá, %s!\n\n", nome_completo);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  EXEMPLO PRÁTICO: Cadastro                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                   CADASTRO DE USUÁRIO                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    char nome_cadastro[50];
    int idade_cadastro;
    float altura_cadastro;
    char sexo;
    
    printf("Nome: ");
    fgets(nome_cadastro, 50, stdin);
    nome_cadastro[strcspn(nome_cadastro, "\n")] = '\0';  // Remove '\n'
    
    printf("Idade: ");
    scanf("%d", &idade_cadastro);
    
    printf("Altura (m): ");
    scanf("%f", &altura_cadastro);
    
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);  // Espaço antes de %c
    
    printf("\n╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                   DADOS CADASTRADOS                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    printf("Nome:   %s\n", nome_cadastro);
    printf("Idade:  %d anos\n", idade_cadastro);
    printf("Altura: %.2f m\n", altura_cadastro);
    printf("Sexo:   %c\n\n", sexo);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                    VALIDAÇÃO DE ENTRADA                           ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        scanf() retorna o número de itens lidos com sucesso.
        Use isso para validar entradas!
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  VALIDAÇÃO DE ENTRADA                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int numero_valido;
    int resultado;
    
    printf("Digite um número inteiro: ");
    resultado = scanf("%d", &numero_valido);
    
    if(resultado == 1){
        printf("✅ Entrada válida: %d\n\n", numero_valido);
    } else {
        printf("❌ Entrada inválida! Não é um número.\n\n");
        // Limpar buffer em caso de erro:
        while(getchar() != '\n');
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              TABELA DE ESPECIFICADORES (Referência)               ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        TIPO            | printf  | scanf   | Exemplo
        ----------------|---------|---------|---------------------------
        int             | %d, %i  | %d, %i  | 42
        unsigned int    | %u      | %u      | 42
        short           | %hd     | %hd     | 32767
        long            | %ld     | %ld     | 2147483647L
        long long       | %lld    | %lld    | 9223372036854775807LL
        float           | %f      | %f      | 3.14f
        double          | %lf     | %lf     | 3.141592653589793
        long double     | %Lf     | %Lf     | 3.141592653589793238L
        char            | %c      | %c      | 'A'
        string          | %s      | %s      | "texto"
        ponteiro        | %p      | %p      | 0x7fff5fbff8ac
        hexadecimal     | %x, %X  | %x, %X  | FF
        octal           | %o      | %o      | 77
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         💡 BOAS PRÁTICAS                          ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Use fgets() ao invés de gets()
        ✅ Sempre valide entradas (verifique retorno de scanf)
        ✅ Limpe o buffer após scanf() quando necessário
        ✅ Use espaço antes de %c em scanf: scanf(" %c", &var)
        ✅ Limite tamanho de strings: fgets(str, SIZE, stdin)
        ✅ Remova '\n' de strings lidas com fgets()
        ✅ Use %.2f para valores monetários (2 casas decimais)
        ✅ Forneça mensagens claras ao usuário
        
        ❌ Nunca use gets() (removido do C11)
        ❌ Não confie cegamente em entrada do usuário
        ❌ Evite scanf() para strings grandes
        ❌ Não misture scanf() com getchar() sem limpar buffer
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  FUNÇÃO ÚTIL: Limpar Buffer                       ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Crie esta função para usar em seus programas:
        
        void limpar_buffer(){
            int c;
            while((c = getchar()) != '\n' && c != EOF);
        }
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║         Todas as técnicas de I/O demonstradas            ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
