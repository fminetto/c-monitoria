/*
 * ============================================================================
 * @name:    lacos-repeticao.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre laços de repetição em C
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra todos os tipos de loops disponíveis em C:
 * for, while, do-while. Inclui break, continue e exemplos práticos
 * do dia a dia como tabuadas, contadores e validações.
 * 
 * Conteúdo:
 * - Loop for (contador)
 * - Loop while (condição)
 * - Loop do-while (executa pelo menos 1x)
 * - break e continue
 * - Loops aninhados
 * - Exemplos práticos
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              LAÇOS DE REPETIÇÃO (LOOPS) EM C                      ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🎯 O QUE SÃO LOOPS?
        
        Loops (laços) permitem REPETIR um bloco de código múltiplas vezes.
        Sem eles, você teria que escrever o mesmo código dezenas de vezes!
        
        Analogia do dia a dia:
        "Enquanto houver pratos sujos, lave um prato"
        "Para cada aluno da sala, chame o nome"
        
        Em C temos 3 tipos:
        📌 for      → Repete um número CONHECIDO de vezes
        📌 while    → Repete ENQUANTO condição for verdadeira
        📌 do-while → Igual while, mas executa PELO MENOS 1 vez
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              for - Loop com Contador                              ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        O loop mais comum! Usado quando você SABE quantas vezes quer repetir.
        
        SINTAXE:
        
        for(inicialização; condição; incremento){
            // código a repetir
        }
        
        PARTES:
        1. Inicialização → Executa 1 vez no início (ex: int i = 0)
        2. Condição      → Verifica antes de cada iteração (ex: i < 10)
        3. Incremento    → Executa após cada iteração (ex: i++)
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 1: Contagem Simples                 ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Contando de 1 a 10:\n");
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 2: Tabuada                          ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int numero = 7;
    printf("Tabuada do %d:\n", numero);
    for(int i = 1; i <= 10; i++){
        printf("%d x %2d = %3d\n", numero, i, numero * i);
    }
    printf("\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        Variações do for
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 3: Variações do for                 ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    // Contagem regressiva
    printf("Contagem regressiva:\n");
    for(int i = 5; i >= 1; i--){
        printf("%d... ", i);
    }
    printf("🚀 Decolagem!\n\n");
    
    // Incremento de 2 em 2 (números pares)
    printf("Números pares de 0 a 20:\n");
    for(int i = 0; i <= 20; i += 2){
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Potências de 2
    printf("Potências de 2 até 1024:\n");
    for(int i = 1; i <= 1024; i *= 2){
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        for ANINHADO (um dentro do outro)
        ═══════════════════════════════════════════════════════════════════
        
        Útil para trabalhar com tabelas, matrizes, coordenadas, etc.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 4: for Aninhado                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Matriz 4x4 de coordenadas:\n");
    for(int linha = 1; linha <= 4; linha++){
        for(int coluna = 1; coluna <= 4; coluna++){
            printf("[%d,%d] ", linha, coluna);
        }
        printf("\n");
    }
    printf("\n");
    
    
    printf("Padrão de asteriscos (triângulo):\n");
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              while - Loop com Condição                            ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Repete ENQUANTO a condição for verdadeira.
        Use quando você NÃO SABE quantas vezes vai repetir.
        
        SINTAXE:
        
        while(condição){
            // código a repetir
        }
        
        ⚠️ ATENÇÃO: Verifica a condição ANTES de executar o código.
        Se a condição for falsa no início, o código nunca executa!
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 5: while Básico                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int contador = 1;
    printf("Contando até 5 com while:\n");
    while(contador <= 5){
        printf("%d ", contador);
        contador++;
    }
    printf("\n\n");
    
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 6: Dobrar Valores                   ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int valor = 1;
    printf("Dobrando até ultrapassar 100:\n");
    while(valor <= 100){
        printf("%d ", valor);
        valor *= 2;
    }
    printf("\n\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Validação de entrada
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 7: Validação de Senha               ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    char* senha_correta = "1234";
    char* senha_digitada = "0000";  // Simulando entrada
    int tentativas = 0;
    int max_tentativas = 3;
    
    printf("Sistema de Login (senha: %s)\n\n", senha_correta);
    
    // Simulando tentativas
    char* senhas_teste[] = {"0000", "5678", "1234"};
    
    while(tentativas < max_tentativas){
        senha_digitada = senhas_teste[tentativas];
        tentativas++;
        
        printf("Tentativa %d: Senha digitada: %s\n", tentativas, senha_digitada);
        
        if(senha_digitada[0] == senha_correta[0] && 
           senha_digitada[1] == senha_correta[1] &&
           senha_digitada[2] == senha_correta[2] &&
           senha_digitada[3] == senha_correta[3]){
            printf("✅ Senha correta! Acesso concedido.\n\n");
            break;
        } else {
            printf("❌ Senha incorreta. Tente novamente.\n\n");
        }
    }
    
    if(tentativas == max_tentativas){
        printf("🔒 Conta bloqueada por excesso de tentativas!\n\n");
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              do-while - Executa Pelo Menos 1 Vez                  ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Similar ao while, MAS:
        - Executa o código PRIMEIRO
        - Depois verifica a condição
        - Garante pelo menos UMA execução
        
        SINTAXE:
        
        do {
            // código a repetir
        } while(condição);
        
        ⚠️ Note o ponto e vírgula (;) no final!
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 8: do-while Básico                  ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int num = 1;
    printf("Números de 1 a 5 com do-while:\n");
    do {
        printf("%d ", num);
        num++;
    } while(num <= 5);
    printf("\n\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        DIFERENÇA: while vs do-while
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 9: while vs do-while                ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Teste com condição FALSA desde o início:\n\n");
    
    // while - não executa
    int x = 10;
    printf("while (x < 5): ");
    while(x < 5){
        printf("Executou "); // Nunca imprime
        x++;
    }
    printf("Não executou nenhuma vez\n\n");
    
    // do-while - executa 1 vez
    int y = 10;
    printf("do-while (y < 5): ");
    do {
        printf("Executou 1 vez ");
        y++;
    } while(y < 5);
    printf("\n\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              break - Sair do Loop                                 ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        O comando break INTERROMPE o loop imediatamente.
        Útil para sair quando uma condição específica é atingida.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 10: break                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Procurando o número 7:\n");
    for(int i = 1; i <= 10; i++){
        printf("Verificando %d... ", i);
        if(i == 7){
            printf("Encontrado! [BREAK]\n");
            break;  // Para o loop
        }
        printf("não é 7\n");
    }
    printf("\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Encontrar número primo
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 11: Verificar Primo (break)         ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int numero_teste = 17;
    bool eh_primo = true;
    
    printf("Verificando se %d é primo:\n", numero_teste);
    
    if(numero_teste <= 1){
        eh_primo = false;
    } else {
        for(int i = 2; i * i <= numero_teste; i++){
            printf("Testando divisão por %d...", i);
            if(numero_teste % i == 0){
                printf(" divisível! [BREAK]\n");
                eh_primo = false;
                break;  // Encontrou divisor, não é primo
            }
            printf(" não divisível\n");
        }
    }
    
    printf("\nResultado: %d %s primo\n\n", numero_teste, eh_primo ? "É" : "NÃO é");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              continue - Pular Iteração                            ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        O comando continue PULA para a próxima iteração do loop.
        Útil para ignorar certos valores.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 12: continue                        ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Números de 1 a 10, pulando múltiplos de 3:\n");
    for(int i = 1; i <= 10; i++){
        if(i % 3 == 0){
            continue;  // Pula múltiplos de 3
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    printf("Apenas números pares entre 1 e 20:\n");
    for(int i = 1; i <= 20; i++){
        if(i % 2 != 0){
            continue;  // Pula ímpares
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Processamento seletivo
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 13: Filtrar Notas (continue)        ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    float notas[] = {8.5f, 4.0f, 9.0f, 3.5f, 7.5f, 6.0f};
    int quantidade = 6;
    float nota_minima = 5.0f;
    
    printf("Notas acima de %.1f:\n", nota_minima);
    for(int i = 0; i < quantidade; i++){
        if(notas[i] < nota_minima){
            continue;  // Pula notas baixas
        }
        printf("Nota %d: %.1f ✅\n", i + 1, notas[i]);
    }
    printf("\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              COMPARAÇÃO: break vs continue                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 14: break vs continue               ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Com break (para no 5):\n");
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Com continue (pula o 5):\n");
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO COMPLETO: Menu interativo
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 15: Sistema de Menu                 ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int opcao_menu;
    int saldo = 1000;
    
    // Simulando algumas escolhas do usuário
    int opcoes_simuladas[] = {1, 2, 3, 0};
    int idx_opcao = 0;
    
    do {
        printf("\n=== BANCO DIGITAL ===\n");
        printf("Saldo atual: R$ %d\n\n", saldo);
        printf("1. Ver Extrato\n");
        printf("2. Fazer Depósito\n");
        printf("3. Fazer Saque\n");
        printf("0. Sair\n\n");
        
        // Simulando entrada
        opcao_menu = opcoes_simuladas[idx_opcao++];
        printf("Opção escolhida: %d\n", opcao_menu);
        
        switch(opcao_menu){
            case 1:
                printf("📄 Exibindo extrato...\n");
                printf("   Últimas transações: ...\n");
                break;
            case 2:
                printf("💰 Depósito de R$ 500 realizado!\n");
                saldo += 500;
                printf("   Novo saldo: R$ %d\n", saldo);
                break;
            case 3:
                printf("💸 Saque de R$ 200 realizado!\n");
                saldo -= 200;
                printf("   Novo saldo: R$ %d\n", saldo);
                break;
            case 0:
                printf("👋 Encerrando sessão...\n");
                printf("   Obrigado por usar nosso banco!\n");
                break;
            default:
                printf("❌ Opção inválida!\n");
        }
        
    } while(opcao_menu != 0 && idx_opcao < 4);
    
    printf("\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              QUAL LOOP USAR? Guia Rápido                          ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        USE for QUANDO:
        ✅ Souber quantas iterações precisa
        ✅ Trabalhar com contadores (0 a 10, etc.)
        ✅ Percorrer arrays/listas
        ✅ Exemplo: tabuadas, contagens, matrizes
        
        USE while QUANDO:
        ✅ Não souber quantas iterações
        ✅ Depender de condição externa
        ✅ Validação de entrada
        ✅ Exemplo: ler até encontrar valor, while(true) com break
        
        USE do-while QUANDO:
        ✅ Precisar executar PELO MENOS 1 vez
        ✅ Menus que devem aparecer antes da escolha
        ✅ Validações que precisam tentar primeiro
        ✅ Exemplo: menus, "tente novamente"
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         💡 BOAS PRÁTICAS                          ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Use nomes significativos para variáveis de loop
        ✅ Evite loops infinitos (sempre tenha condição de saída)
        ✅ Prefira for para contagens conhecidas
        ✅ Use break para sair de loops quando necessário
        ✅ Use continue para pular iterações específicas
        ✅ Comente loops complexos
        ✅ Evite modificar o contador dentro do for (confuso)
        
        ❌ Evite loops infinitos sem break (while(1) sem saída)
        ❌ Não exagere em loops aninhados (máx 2-3 níveis)
        ❌ Não use goto (considerado má prática)
        ❌ Cuidado com off-by-one errors (i <= 10 vs i < 10)
        
        
        ⚠️ ARMADILHAS COMUNS:
        
        1. Loop infinito:
           while(x > 0){
               printf("%d", x);
               // Esqueceu de decrementar x!
           }
        
        2. Off-by-one error:
           for(int i = 1; i <= 10; i++)  // 10 iterações
           for(int i = 0; i < 10; i++)   // 10 iterações
           for(int i = 0; i <= 10; i++)  // 11 iterações!
        
        3. Modificar contador no for:
           for(int i = 0; i < 10; i++){
               i += 2;  // ❌ Confuso! Use i += 3 no incremento
           }
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║         Todos os laços de repetição demonstrados         ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
