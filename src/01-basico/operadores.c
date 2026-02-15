/*
 * ============================================================================
 * @name:    operadores.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre operadores em C
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra todos os tipos de operadores disponíveis em C:
 * aritméticos, relacionais, lógicos, bitwise, atribuição e outros.
 * Inclui exemplos práticos, tabelas verdade e casos de uso reais.
 * 
 * Conteúdo:
 * - Operadores aritméticos (+, -, *, /, %)
 * - Operadores relacionais (==, !=, <, >, <=, >=)
 * - Operadores lógicos (&&, ||, !)
 * - Operadores de atribuição (=, +=, -=, etc.)
 * - Operadores de incremento/decremento (++, --)
 * - Operadores bitwise (&, |, ^, ~, <<, >>)
 * - Operadores especiais (sizeof, ?:, etc.)
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>  // Para usar bool, true, false

int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                    OPERADORES EM C - Guia Completo                ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Operadores são símbolos que realizam operações em variáveis e valores.
        
        Categorias:
        1. Aritméticos       → Cálculos matemáticos
        2. Relacionais       → Comparações
        3. Lógicos           → Operações booleanas
        4. Atribuição        → Guardar valores
        5. Incremento/Decremento → Aumentar/diminuir
        6. Bitwise           → Manipulação de bits
        7. Especiais         → sizeof, ternário, etc.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              1. OPERADORES ARITMÉTICOS                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADORES ARITMÉTICOS
        ═══════════════════════════════════════════════════════════════════
        
        +   Adição
        -   Subtração
        *   Multiplicação
        /   Divisão
        %   Módulo (resto da divisão) - APENAS para inteiros
    */
    
    int a = 10, b = 3;
    
    printf("Valores: a = %d, b = %d\n\n", a, b);
    printf("a + b = %d\n", a + b);      // 13
    printf("a - b = %d\n", a - b);      // 7
    printf("a * b = %d\n", a * b);      // 30
    printf("a / b = %d\n", a / b);      // 3 (divisão inteira!)
    printf("a %% b = %d\n\n", a % b);   // 1 (resto)
    
    // ⚠️ ATENÇÃO: Divisão de inteiros trunca!
    printf("⚠️  ARMADILHA: Divisão de Inteiros\n");
    printf("10 / 3 = %d (esperava 3.33...)\n", 10 / 3);
    printf("Solução: %.2f\n\n", 10.0 / 3);  // Pelo menos um deve ser float
    
    // Módulo: útil para verificar par/ímpar, ciclos, etc.
    printf("Usos práticos do módulo:\n");
    printf("5 %% 2 = %d (ímpar)\n", 5 % 2);
    printf("8 %% 2 = %d (par)\n", 8 % 2);
    printf("17 %% 5 = %d (resto)\n\n", 17 % 5);
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              2. OPERADORES RELACIONAIS                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADORES RELACIONAIS (Comparação)
        ═══════════════════════════════════════════════════════════════════
        
        Retornam 1 (verdadeiro) ou 0 (falso)
        
        ==  Igual a
        !=  Diferente de
        >   Maior que
        <   Menor que
        >=  Maior ou igual
        <=  Menor ou igual
        
        ⚠️ ATENÇÃO: = é atribuição, == é comparação!
    */
    
    int x = 5, y = 10;
    
    printf("Valores: x = %d, y = %d\n\n", x, y);
    printf("x == y: %d (falso)\n", x == y);     // 0
    printf("x != y: %d (verdadeiro)\n", x != y); // 1
    printf("x > y:  %d (falso)\n", x > y);      // 0
    printf("x < y:  %d (verdadeiro)\n", x < y);  // 1
    printf("x >= 5: %d (verdadeiro)\n", x >= 5); // 1
    printf("y <= 9: %d (falso)\n\n", y <= 9);   // 0
    
    // Exemplo prático
    int idade = 18;
    if(idade >= 18){
        printf("✅ Maior de idade (idade >= 18)\n\n");
    }
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              3. OPERADORES LÓGICOS                        ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADORES LÓGICOS
        ═══════════════════════════════════════════════════════════════════
        
        &&  E (AND)   - Verdadeiro se AMBOS forem verdadeiros
        ||  OU (OR)   - Verdadeiro se PELO MENOS UM for verdadeiro
        !   NÃO (NOT) - Inverte o valor lógico
    */
    
    bool tem_carteira = true;
    bool tem_carro = false;
    int idade_motorista = 20;
    
    printf("tem_carteira = %d, tem_carro = %d, idade = %d\n\n", 
           tem_carteira, tem_carro, idade_motorista);
    
    // AND (&&) - Todos devem ser verdadeiros
    printf("OPERADOR && (AND):\n");
    if(tem_carteira && idade_motorista >= 18){
        printf("✅ Pode dirigir (tem carteira E é maior de idade)\n");
    }
    
    if(tem_carteira && tem_carro){
        printf("✅ Pode dirigir o próprio carro\n");
    } else {
        printf("❌ Não pode dirigir o próprio carro\n");
    }
    printf("\n");
    
    // OR (||) - Pelo menos um deve ser verdadeiro
    printf("OPERADOR || (OR):\n");
    bool fim_semana = true;
    bool feriado = false;
    
    if(fim_semana || feriado){
        printf("✅ Dia de descanso!\n");
    }
    printf("\n");
    
    // NOT (!) - Inverte
    printf("OPERADOR ! (NOT):\n");
    bool logado = false;
    if(!logado){
        printf("❌ Usuário não está logado\n");
    }
    printf("\n");
    
    // Tabela verdade
    printf("═══════════════════════════════════════════════════════════\n");
    printf("TABELA VERDADE:\n");
    printf("═══════════════════════════════════════════════════════════\n");
    printf("A     B     A && B   A || B   !A\n");
    printf("0     0       0        0      1\n");
    printf("0     1       0        1      1\n");
    printf("1     0       0        1      0\n");
    printf("1     1       1        1      0\n");
    printf("═══════════════════════════════════════════════════════════\n\n");
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              4. OPERADORES DE ATRIBUIÇÃO                  ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADORES DE ATRIBUIÇÃO
        ═══════════════════════════════════════════════════════════════════
        
        =    Atribuição simples
        +=   Soma e atribui       (a += b  →  a = a + b)
        -=   Subtrai e atribui    (a -= b  →  a = a - b)
        *=   Multiplica e atribui (a *= b  →  a = a * b)
        /=   Divide e atribui     (a /= b  →  a = a / b)
        %=   Módulo e atribui     (a %= b  →  a = a % b)
    */
    
    int valor = 10;
    printf("valor inicial: %d\n", valor);
    
    valor += 5;  // valor = valor + 5
    printf("valor += 5:  %d\n", valor);  // 15
    
    valor -= 3;  // valor = valor - 3
    printf("valor -= 3:  %d\n", valor);  // 12
    
    valor *= 2;  // valor = valor * 2
    printf("valor *= 2:  %d\n", valor);  // 24
    
    valor /= 4;  // valor = valor / 4
    printf("valor /= 4:  %d\n", valor);  // 6
    
    valor %= 5;  // valor = valor % 5
    printf("valor %%= 5: %d\n\n", valor);  // 1
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║          5. OPERADORES DE INCREMENTO/DECREMENTO          ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        INCREMENTO E DECREMENTO
        ═══════════════════════════════════════════════════════════════════
        
        ++  Incremento (adiciona 1)
        --  Decremento (subtrai 1)
        
        PRÉ-INCREMENTO:  ++var  (incrementa ANTES de usar)
        PÓS-INCREMENTO:  var++  (usa DEPOIS incrementa)
    */
    
    int contador = 5;
    
    printf("contador inicial: %d\n\n", contador);
    
    // Pós-incremento (usa depois incrementa)
    printf("Pós-incremento (contador++):\n");
    printf("Valor usado: %d\n", contador++);  // Usa 5, depois vira 6
    printf("Valor atual: %d\n\n", contador);  // 6
    
    // Pré-incremento (incrementa antes de usar)
    printf("Pré-incremento (++contador):\n");
    printf("Valor usado: %d\n", ++contador);  // Vira 7, depois usa 7
    printf("Valor atual: %d\n\n", contador);  // 7
    
    // Decremento funciona igual
    printf("Decremento:\n");
    printf("contador--: %d (depois: %d)\n", contador--, contador);
    printf("--contador: %d\n\n", --contador);
    
    // Uso comum em loops
    printf("Uso em loops:\n");
    for(int i = 0; i < 3; i++){
        printf("Iteração %d\n", i);
    }
    printf("\n");
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              6. OPERADORES BITWISE (Bits)                 ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADORES BITWISE (Manipulação de Bits)
        ═══════════════════════════════════════════════════════════════════
        
        &   AND bit a bit
        |   OR bit a bit
        ^   XOR bit a bit (ou exclusivo)
        ~   NOT bit a bit (complemento)
        <<  Shift left (deslocamento à esquerda)
        >>  Shift right (deslocamento à direita)
        
        Usados em: flags, máscaras, otimizações, hardware
    */
    
    unsigned char num1 = 5;   // 0000 0101
    unsigned char num2 = 3;   // 0000 0011
    
    printf("num1 = %d (binário: 0000 0101)\n", num1);
    printf("num2 = %d (binário: 0000 0011)\n\n", num2);
    
    printf("num1 & num2  = %d  (0000 0001) - AND\n", num1 & num2);
    printf("num1 | num2  = %d  (0000 0111) - OR\n", num1 | num2);
    printf("num1 ^ num2  = %d  (0000 0110) - XOR\n", num1 ^ num2);
    printf("~num1        = %d (1111 1010) - NOT\n", (unsigned char)~num1);
    printf("num1 << 1    = %d  (0000 1010) - Shift left (multiplica por 2)\n", num1 << 1);
    printf("num1 >> 1    = %d  (0000 0010) - Shift right (divide por 2)\n\n", num1 >> 1);
    
    // Exemplo prático: flags
    printf("Exemplo prático - Permissões (flags):\n");
    #define LER    0x01  // 0001
    #define ESCREVER 0x02  // 0010
    #define EXECUTAR 0x04  // 0100
    
    unsigned char permissoes = LER | ESCREVER;  // 0011
    
    if(permissoes & LER){
        printf("✅ Pode ler\n");
    }
    if(permissoes & ESCREVER){
        printf("✅ Pode escrever\n");
    }
    if(!(permissoes & EXECUTAR)){
        printf("❌ Não pode executar\n");
    }
    printf("\n");
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              7. OPERADORES ESPECIAIS                      ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADOR TERNÁRIO (? :)
        ═══════════════════════════════════════════════════════════════════
        
        Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso
        
        É um if-else resumido em uma linha.
    */
    
    printf("OPERADOR TERNÁRIO (? :):\n");
    int idade_check = 20;
    char* status = (idade_check >= 18) ? "Maior de idade" : "Menor de idade";
    printf("Idade: %d → %s\n\n", idade_check, status);
    
    // Outro exemplo
    int num = -5;
    int absoluto = (num >= 0) ? num : -num;
    printf("Valor absoluto de %d: %d\n\n", num, absoluto);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADOR sizeof
        ═══════════════════════════════════════════════════════════════════
        
        Retorna o tamanho em bytes de um tipo ou variável.
    */
    
    printf("OPERADOR sizeof:\n");
    printf("sizeof(char):      %lu byte\n", sizeof(char));
    printf("sizeof(int):       %lu bytes\n", sizeof(int));
    printf("sizeof(float):     %lu bytes\n", sizeof(float));
    printf("sizeof(double):    %lu bytes\n", sizeof(double));
    printf("sizeof(long long): %lu bytes\n\n", sizeof(long long));
    
    int array[10];
    printf("sizeof(array):     %lu bytes\n", sizeof(array));
    printf("Elementos:         %lu\n\n", sizeof(array) / sizeof(array[0]));
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        OPERADOR DE ACESSO (. e ->)
        ═══════════════════════════════════════════════════════════════════
        
        .   Acessa membros de struct
        ->  Acessa membros de ponteiro para struct
        
        Veremos mais em structs e ponteiros!
    */
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              PRECEDÊNCIA DE OPERADORES                            ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Ordem de avaliação (do maior para o menor):
        
        1. ()  []  .  ->               Parênteses, arrays, acessos
        2. ++  --  !  ~  sizeof        Unários
        3. *  /  %                     Multiplicação, divisão, módulo
        4. +  -                        Adição, subtração
        5. <<  >>                      Shifts
        6. <  <=  >  >=                Relacionais
        7. ==  !=                      Igualdade
        8. &                           AND bitwise
        9. ^                           XOR bitwise
        10. |                          OR bitwise
        11. &&                         AND lógico
        12. ||                         OR lógico
        13. ?:                         Ternário
        14. =  +=  -=  *=  /=  %=      Atribuição
        
        ⚠️ Use parênteses quando houver dúvida!
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              PRECEDÊNCIA DE OPERADORES                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int resultado1 = 5 + 3 * 2;      // Multiplicação primeiro: 5 + 6 = 11
    int resultado2 = (5 + 3) * 2;    // Parênteses primeiro: 8 * 2 = 16
    
    printf("5 + 3 * 2     = %d (multiplicação primeiro)\n", resultado1);
    printf("(5 + 3) * 2   = %d (parênteses primeiro)\n\n", resultado2);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              EXEMPLO PRÁTICO: Calculadora Simples                 ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  CALCULADORA SIMPLES                      ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    float n1, n2;
    char operador;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    float resultado_calc;
    bool operacao_valida = true;
    
    switch(operador){
        case '+':
            resultado_calc = n1 + n2;
            break;
        case '-':
            resultado_calc = n1 - n2;
            break;
        case '*':
            resultado_calc = n1 * n2;
            break;
        case '/':
            if(n2 != 0){
                resultado_calc = n1 / n2;
            } else {
                printf("❌ Erro: Divisão por zero!\n");
                operacao_valida = false;
            }
            break;
        default:
            printf("❌ Operador inválido!\n");
            operacao_valida = false;
    }
    
    if(operacao_valida){
        printf("\n%.2f %c %.2f = %.2f\n\n", n1, operador, n2, resultado_calc);
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         💡 RESUMO FINAL                           ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Aritméticos: + - * / %
        ✅ Relacionais: == != < > <= >=
        ✅ Lógicos: && || !
        ✅ Atribuição: = += -= *= /= %=
        ✅ Incremento: ++ --
        ✅ Bitwise: & | ^ ~ << >>
        ✅ Especiais: ?: sizeof
        
        ⚠️ ATENÇÃO:
        - = é atribuição, == é comparação
        - Use parênteses quando em dúvida
        - Cuidado com divisão inteira (10/3 = 3)
        - && avalia left-to-right (short-circuit)
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║            Todos os operadores demonstrados              ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
