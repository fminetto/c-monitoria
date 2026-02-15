/*
 * ============================================================================
 * @name:    funcoes-recursividade.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre funções e recursividade em C
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra como criar, declarar e usar funções em C,
 * incluindo passagem de parâmetros por valor, funções void, retorno de
 * valores, recursividade e boas práticas de modularização.
 * 
 * Conteúdo:
 * - Declaração e definição de funções
 * - Parâmetros e retorno de valores
 * - Funções void
 * - Escopo de variáveis
 * - Recursividade (fatorial, fibonacci, torres de hanoi)
 * - Comparação iterativo vs recursivo
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// ═══════════════════════════════════════════════════════════════════════
// PROTÓTIPOS DE FUNÇÕES (Declarações)
// ═══════════════════════════════════════════════════════════════════════

// Funções básicas
void saudar();
void saudar_personalizado(char* nome);
int somar(int a, int b);
float calcular_media(float notas[], int tamanho);
void imprimir_array(int arr[], int tamanho);

// Funções matemáticas
int quadrado(int n);
double potencia(double base, int expoente);
bool eh_par(int n);
bool eh_primo(int n);
int maior_de_tres(int a, int b, int c);

// Funções com múltiplos retornos (usando ponteiros)
void trocar(int* a, int* b);
void calcular_circulo(float raio, float* area, float* perimetro);

// Funções recursivas
int fatorial(int n);
int fibonacci(int n);
int soma_ate_n(int n);
void imprimir_numero(int n);
int mdc(int a, int b);  // Máximo Divisor Comum
void torre_hanoi(int n, char origem, char destino, char auxiliar);

// Funções auxiliares
void imprimir_linha(int tamanho);
void imprimir_titulo(char* titulo);


int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              FUNÇÕES EM C - Organizando Código                    ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🎯 O QUE SÃO FUNÇÕES?
        
        Funções são BLOCOS DE CÓDIGO REUTILIZÁVEIS que executam uma
        tarefa específica. É como ter uma "mini-máquina" que faz algo
        e você pode usar quantas vezes quiser.
        
        Analogia do dia a dia:
        Imagine uma máquina de café. Você:
        1. Coloca os ingredientes (parâmetros)
        2. Aperta o botão (chama a função)
        3. Recebe o café pronto (retorno)
        
        VANTAGENS:
        ✅ Reutilização de código (DRY - Don't Repeat Yourself)
        ✅ Organização e legibilidade
        ✅ Facilita manutenção
        ✅ Facilita testes
        ✅ Trabalho em equipe
        
        
        ANATOMIA DE UMA FUNÇÃO:
        
        tipo_retorno nome_funcao(tipo param1, tipo param2){
            // código
            return valor;  // se não for void
        }
        
        PARTES:
        1. Tipo de retorno → O que a função devolve (int, float, void, etc.)
        2. Nome da função  → Identificador descritivo
        3. Parâmetros      → Dados que a função recebe
        4. Corpo           → Código que executa
        5. Return          → Valor devolvido (exceto void)
    */
    
    imprimir_titulo("1. FUNÇÕES VOID (SEM RETORNO)");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        FUNÇÕES VOID
        ═══════════════════════════════════════════════════════════════════
        
        Funções void NÃO RETORNAM valor.
        Elas apenas EXECUTAM uma ação (imprimir, modificar variáveis, etc.)
    */
    
    printf("Exemplo 1 - Função simples sem parâmetros:\n");
    saudar();
    printf("\n");
    
    printf("Exemplo 2 - Função com parâmetro:\n");
    saudar_personalizado("Felipe");
    saudar_personalizado("Maria");
    printf("\n");
    
    
    imprimir_titulo("2. FUNÇÕES COM RETORNO");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        FUNÇÕES QUE RETORNAM VALORES
        ═══════════════════════════════════════════════════════════════════
        
        Executam cálculos e DEVOLVEM um resultado.
    */
    
    printf("Exemplo 1 - Função que soma dois números:\n");
    int resultado = somar(10, 5);
    printf("10 + 5 = %d\n\n", resultado);
    
    // Pode usar direto em expressões
    printf("Usando função em expressão:\n");
    printf("(3 + 4) * 2 = %d\n\n", somar(3, 4) * 2);
    
    
    printf("Exemplo 2 - Função com float:\n");
    float notas[] = {8.5f, 7.0f, 9.0f, 6.5f};
    float media = calcular_media(notas, 4);
    printf("Média das notas: %.2f\n\n", media);
    
    
    imprimir_titulo("3. FUNÇÕES MATEMÁTICAS");
    
    printf("Exemplo 1 - Quadrado de um número:\n");
    int num = 7;
    printf("%d² = %d\n\n", num, quadrado(num));
    
    printf("Exemplo 2 - Potenciação:\n");
    printf("2¹⁰ = %.0f\n\n", potencia(2, 10));
    
    printf("Exemplo 3 - Verificar paridade:\n");
    int numero = 42;
    if(eh_par(numero)){
        printf("%d é par\n\n", numero);
    } else {
        printf("%d é ímpar\n\n", numero);
    }
    
    printf("Exemplo 4 - Verificar se é primo:\n");
    int num_teste = 17;
    if(eh_primo(num_teste)){
        printf("%d é primo ✅\n\n", num_teste);
    } else {
        printf("%d não é primo ❌\n\n", num_teste);
    }
    
    printf("Exemplo 5 - Maior de três números:\n");
    int a = 15, b = 23, c = 19;
    printf("Maior entre %d, %d e %d: %d\n\n", a, b, c, maior_de_tres(a, b, c));
    
    
    imprimir_titulo("4. ARRAYS COMO PARÂMETROS");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PASSANDO ARRAYS PARA FUNÇÕES
        ═══════════════════════════════════════════════════════════════════
        
        Arrays são passados por REFERÊNCIA automaticamente.
        Sempre passe o tamanho junto!
    */
    
    printf("Exemplo - Imprimir array:\n");
    int numeros[] = {10, 20, 30, 40, 50};
    imprimir_array(numeros, 5);
    printf("\n");
    
    
    imprimir_titulo("5. MODIFICANDO VARIÁVEIS (PONTEIROS)");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PASSAGEM POR REFERÊNCIA
        ═══════════════════════════════════════════════════════════════════
        
        Para modificar variáveis da função chamadora, use ponteiros.
    */
    
    printf("Exemplo 1 - Trocar valores de variáveis:\n");
    int x = 5, y = 10;
    printf("Antes:  x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Depois: x = %d, y = %d\n\n", x, y);
    
    printf("Exemplo 2 - Múltiplos retornos (área e perímetro):\n");
    float raio = 5.0f;
    float area, perimetro;
    calcular_circulo(raio, &area, &perimetro);
    printf("Círculo de raio %.1f:\n", raio);
    printf("  Área: %.2f\n", area);
    printf("  Perímetro: %.2f\n\n", perimetro);
    
    
    imprimir_titulo("6. ESCOPO DE VARIÁVEIS");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        ESCOPO DE VARIÁVEIS
        ═══════════════════════════════════════════════════════════════════
        
        VARIÁVEIS LOCAIS: Existem apenas dentro da função
        VARIÁVEIS GLOBAIS: Existem em todo o programa (evite!)
    */
    
    printf("Exemplo - Variáveis locais:\n");
    int var_main = 100;
    printf("Variável em main: %d\n", var_main);
    
    // Chamando função que tem variável local com mesmo nome
    int resultado_soma = somar(5, 3);
    printf("Resultado da soma: %d\n", resultado_soma);
    printf("Variável em main ainda: %d\n", var_main);
    printf("(Cada função tem suas próprias variáveis locais)\n\n");
    
    
    imprimir_titulo("7. RECURSIVIDADE - Função que Chama a Si Mesma");
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              RECURSIVIDADE                                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🎯 O QUE É RECURSIVIDADE?
        
        É quando uma função CHAMA A SI MESMA para resolver um problema.
        O problema é dividido em partes menores até chegar em um caso simples.
        
        Analogia do dia a dia:
        "Para arrumar uma pilha de 10 pratos:"
        1. Se não há pratos, terminou ✅ (CASO BASE)
        2. Senão: arrume 1 prato e arrume a pilha de 9 (CHAMADA RECURSIVA)
        
        COMPONENTES ESSENCIAIS:
        1. CASO BASE    → Condição de parada (evita loop infinito)
        2. CASO RECURSIVO → Chamada da função com problema menor
        
        ⚠️ SEM CASO BASE = STACK OVERFLOW (estouro de pilha)
    */
    
    printf("Exemplo 1 - Fatorial recursivo:\n");
    printf("Fatorial é: n! = n × (n-1) × (n-2) × ... × 1\n\n");
    
    for(int i = 0; i <= 6; i++){
        printf("%d! = %d\n", i, fatorial(i));
    }
    printf("\nExplicação: 5! = 5 × 4 × 3 × 2 × 1 = 120\n\n");
    
    
    printf("Exemplo 2 - Sequência de Fibonacci:\n");
    printf("Fibonacci: cada número é a soma dos dois anteriores\n");
    printf("Sequência: 0, 1, 1, 2, 3, 5, 8, 13, 21...\n\n");
    
    printf("Primeiros 12 números de Fibonacci:\n");
    for(int i = 0; i < 12; i++){
        printf("F(%d) = %d\n", i, fibonacci(i));
    }
    printf("\n");
    
    
    printf("Exemplo 3 - Soma de 1 até N:\n");
    int n = 100;
    printf("Soma de 1 até %d = %d\n", n, soma_ate_n(n));
    printf("Verificação: 1+2+3+...+100 = %d\n\n", (n * (n + 1)) / 2);
    
    
    printf("Exemplo 4 - Imprimir números (recursão simples):\n");
    printf("Contagem de 1 a 5:\n");
    imprimir_numero(5);
    printf("\n\n");
    
    
    printf("Exemplo 5 - Máximo Divisor Comum (Algoritmo de Euclides):\n");
    int num1 = 48, num2 = 18;
    printf("MDC(%d, %d) = %d\n\n", num1, num2, mdc(num1, num2));
    
    
    imprimir_titulo("8. TORRES DE HANOI (Recursão Clássica)");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        TORRES DE HANOI
        ═══════════════════════════════════════════════════════════════════
        
        Problema clássico de recursão:
        - Mover N discos de uma torre A para torre C
        - Usando torre B como auxiliar
        - Regra: Disco maior nunca sobre disco menor
        
        Solução recursiva:
        1. Mover n-1 discos de A para B (usando C)
        2. Mover disco maior de A para C
        3. Mover n-1 discos de B para C (usando A)
    */
    
    printf("Resolvendo Torres de Hanoi com 3 discos:\n\n");
    torre_hanoi(3, 'A', 'C', 'B');
    printf("\n");
    
    printf("Curiosidade: Para N discos, são necessários 2^N - 1 movimentos\n");
    printf("  3 discos: %d movimentos\n", (int)pow(2, 3) - 1);
    printf("  4 discos: %d movimentos\n", (int)pow(2, 4) - 1);
    printf("  10 discos: %d movimentos\n\n", (int)pow(2, 10) - 1);
    
    
    imprimir_titulo("9. ITERATIVO VS RECURSIVO");
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              COMPARAÇÃO: Iterativo vs Recursivo                   ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ITERATIVO (loops):
        ✅ Mais eficiente em memória
        ✅ Mais rápido
        ✅ Não arrisca stack overflow
        ❌ Pode ser menos legível para certos problemas
        ❌ Mais linhas de código em alguns casos
        
        RECURSIVO:
        ✅ Mais elegante e legível
        ✅ Natural para problemas divididos em subproblemas
        ✅ Código mais curto
        ✅ Mais fácil de entender a lógica
        ❌ Usa mais memória (pilha de chamadas)
        ❌ Mais lento (overhead de chamadas)
        ❌ Risco de stack overflow
        
        QUANDO USAR RECURSÃO?
        ✅ Problemas naturalmente recursivos (árvores, grafos)
        ✅ Quando solução iterativa é muito complexa
        ✅ Quando performance não é crítica
        ✅ Dividir e conquistar (merge sort, quick sort)
        
        QUANDO EVITAR RECURSÃO?
        ❌ Loops simples (use for/while)
        ❌ Performance crítica
        ❌ Grandes volumes de dados
        ❌ Sistemas embarcados (memória limitada)
    */
    
    printf("Exemplo - Fatorial de 5:\n\n");
    
    printf("VERSÃO RECURSIVA:\n");
    printf("fatorial(5)\n");
    printf("  = 5 × fatorial(4)\n");
    printf("  = 5 × 4 × fatorial(3)\n");
    printf("  = 5 × 4 × 3 × fatorial(2)\n");
    printf("  = 5 × 4 × 3 × 2 × fatorial(1)\n");
    printf("  = 5 × 4 × 3 × 2 × 1\n");
    printf("  = 120\n\n");
    
    printf("VERSÃO ITERATIVA (equivalente):\n");
    printf("resultado = 1\n");
    printf("for i de 1 até 5:\n");
    printf("  resultado *= i\n");
    printf("resultado = 120\n\n");
    
    
    imprimir_titulo("10. EXEMPLO PRÁTICO - Sistema de Calculadora");
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO COMPLETO: Usando múltiplas funções
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("Calculadora Científica:\n\n");
    
    double base = 2.0, exp_val = 8.0;
    printf("%.0f elevado a %.0f = %.0f\n", base, exp_val, potencia(base, (int)exp_val));
    
    int num_fat = 6;
    printf("Fatorial de %d = %d\n", num_fat, fatorial(num_fat));
    
    int num_fib = 10;
    printf("Fibonacci na posição %d = %d\n", num_fib, fibonacci(num_fib));
    
    int a_mdc = 56, b_mdc = 98;
    printf("MDC de %d e %d = %d\n\n", a_mdc, b_mdc, mdc(a_mdc, b_mdc));
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         💡 BOAS PRÁTICAS                          ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Uma função = uma responsabilidade
        ✅ Nomes descritivos (calcular_media, verificar_primo)
        ✅ Funções pequenas (máx 50 linhas)
        ✅ Comente funções complexas
        ✅ Use const para parâmetros que não devem mudar
        ✅ Valide parâmetros (verificar divisão por zero, etc.)
        ✅ Sempre tenha caso base em recursão
        ✅ Declare protótipos no topo do arquivo
        
        ❌ Evite funções muito grandes
        ❌ Não use variáveis globais desnecessariamente
        ❌ Evite recursão para problemas simples
        ❌ Não ignore valores de retorno importantes
        ❌ Evite muitos parâmetros (máx 5)
        
        
        PADRÃO DE NOMENCLATURA:
        
        - Funções: verbo_substantivo
          calcular_media(), verificar_primo(), imprimir_array()
        
        - Funções booleanas: eh_algo() ou esta_algo()
          eh_par(), esta_vazio(), pode_dirigir()
        
        - Getters/Setters: get_algo() / set_algo()
          get_idade(), set_nome()
        
        
        DOCUMENTAÇÃO DE FUNÇÕES:
        
        Use comentários descritivos antes de cada função explicando:
        - O que a função faz
        - Quais parâmetros recebe
        - O que retorna
        - Exemplos de uso (se necessário)
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║          Funções e Recursividade demonstradas            ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}


/*
    ═══════════════════════════════════════════════════════════════════════
    IMPLEMENTAÇÃO DAS FUNÇÕES
    ═══════════════════════════════════════════════════════════════════════
*/

// ─────────────────────────────────────────────────────────────────────────
// FUNÇÕES BÁSICAS
// ─────────────────────────────────────────────────────────────────────────

void saudar(){
    printf("Olá! Bem-vindo ao programa!\n");
}

void saudar_personalizado(char* nome){
    printf("Olá, %s! Como vai?\n", nome);
}

int somar(int a, int b){
    return a + b;
}

float calcular_media(float notas[], int tamanho){
    float soma = 0.0f;
    for(int i = 0; i < tamanho; i++){
        soma += notas[i];
    }
    return soma / tamanho;
}

void imprimir_array(int arr[], int tamanho){
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}


// ─────────────────────────────────────────────────────────────────────────
// FUNÇÕES MATEMÁTICAS
// ─────────────────────────────────────────────────────────────────────────

int quadrado(int n){
    return n * n;
}

double potencia(double base, int expoente){
    if(expoente == 0) return 1.0;
    if(expoente < 0) return 1.0 / potencia(base, -expoente);
    
    double resultado = 1.0;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}

bool eh_par(int n){
    return n % 2 == 0;
}

bool eh_primo(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int maior_de_tres(int a, int b, int c){
    int maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;
    return maior;
}


// ─────────────────────────────────────────────────────────────────────────
// FUNÇÕES COM PONTEIROS
// ─────────────────────────────────────────────────────────────────────────

void trocar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calcular_circulo(float raio, float* area, float* perimetro){
    const float PI = 3.14159f;
    *area = PI * raio * raio;
    *perimetro = 2 * PI * raio;
}


// ─────────────────────────────────────────────────────────────────────────
// FUNÇÕES RECURSIVAS
// ─────────────────────────────────────────────────────────────────────────

/*
 * Calcula o fatorial de um número recursivamente
 * Fatorial: n! = n × (n-1) × (n-2) × ... × 1
 * Exemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120
 */
int fatorial(int n){
    // Caso base
    if(n <= 1){
        return 1;
    }
    // Caso recursivo
    return n * fatorial(n - 1);
}

/*
 * Calcula o n-ésimo número de Fibonacci recursivamente
 * Fibonacci: F(n) = F(n-1) + F(n-2)
 * Sequência: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
 */
int fibonacci(int n){
    // Casos base
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    // Caso recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
 * Calcula a soma de 1 até N recursivamente
 * Exemplo: soma_ate_n(5) = 1 + 2 + 3 + 4 + 5 = 15
 */
int soma_ate_n(int n){
    // Caso base
    if(n == 1){
        return 1;
    }
    // Caso recursivo
    return n + soma_ate_n(n - 1);
}

/*
 * Imprime números de 1 até N recursivamente
 */
void imprimir_numero(int n){
    // Caso base
    if(n == 0){
        return;
    }
    
    // Caso recursivo - chama primeiro para ordem crescente
    imprimir_numero(n - 1);
    printf("%d ", n);
}

/*
 * Calcula o Máximo Divisor Comum usando o Algoritmo de Euclides
 * Exemplo: MDC(48, 18) = 6
 */
int mdc(int a, int b){
    // Caso base
    if(b == 0){
        return a;
    }
    // Caso recursivo
    return mdc(b, a % b);
}

/*
 * Resolve o problema das Torres de Hanoi
 * Move n discos da torre origem para torre destino usando torre auxiliar
 */
void torre_hanoi(int n, char origem, char destino, char auxiliar){
    // Caso base
    if(n == 1){
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    // Caso recursivo
    // 1. Mover n-1 discos de origem para auxiliar (usando destino)
    torre_hanoi(n - 1, origem, auxiliar, destino);
    
    // 2. Mover disco maior de origem para destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    
    // 3. Mover n-1 discos de auxiliar para destino (usando origem)
    torre_hanoi(n - 1, auxiliar, destino, origem);
}


// ─────────────────────────────────────────────────────────────────────────
// FUNÇÕES AUXILIARES (UTILITÁRIAS)
// ─────────────────────────────────────────────────────────────────────────

void imprimir_linha(int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("═");
    }
    printf("\n");
}

void imprimir_titulo(char* titulo){
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║ %-57s ║\n", titulo);
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
}
