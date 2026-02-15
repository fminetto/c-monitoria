/*
 * ============================================================================
 * @name:    estruturas-condicionais.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre estruturas condicionais em C
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra todas as estruturas condicionais disponíveis em C:
 * if, else, else if, switch-case e operador ternário. Inclui exemplos
 * práticos do dia a dia e boas práticas de uso.
 * 
 * Conteúdo:
 * - if, else, else if
 * - Operador ternário (? :)
 * - switch-case
 * - Condições aninhadas
 * - Exemplos práticos
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              ESTRUTURAS CONDICIONAIS EM C                         ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🎯 O QUE SÃO ESTRUTURAS CONDICIONAIS?
        
        São comandos que permitem ao programa TOMAR DECISÕES baseadas em
        condições. É como perguntar: "Se isso for verdade, faça aquilo".
        
        Analogia do dia a dia:
        "SE está chovendo, ENTÃO leve guarda-chuva, SENÃO leve óculos de sol"
        
        Em C temos:
        📌 if / else      → Decisões simples
        📌 else if        → Múltiplas condições
        📌 switch-case    → Muitas opções para uma variável
        📌 Operador ? :   → if/else em uma linha
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  if / else - Decisão Básica                       ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        SINTAXE:
        
        if(condição){
            // Executa se condição for VERDADEIRA
        } else {
            // Executa se condição for FALSA
        }
        
        💡 DICA: O else é OPCIONAL. Você pode ter apenas if.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 1: if/else Simples                  ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int idade = 20;
    
    printf("Verificando maioridade...\n");
    printf("Idade: %d anos\n\n", idade);
    
    if(idade >= 18){
        printf("✅ Resultado: Maior de idade\n");
        printf("   Pode votar, dirigir e assinar contratos\n\n");
    } else {
        printf("❌ Resultado: Menor de idade\n");
        printf("   Ainda não pode votar nem dirigir\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Sistema de aprovação escolar
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 2: Sistema de Aprovação             ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    float nota = 6.5f;
    
    printf("Nota do aluno: %.1f\n", nota);
    
    if(nota >= 7.0f){
        printf("✅ Status: APROVADO\n");
        printf("   Parabéns! Continue assim!\n\n");
    } else {
        printf("❌ Status: REPROVADO\n");
        printf("   Estude mais para a recuperação\n\n");
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              else if - Múltiplas Condições                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Quando você tem mais de duas opções, use else if.
        
        SINTAXE:
        
        if(condição1){
            // primeira opção
        } else if(condição2){
            // segunda opção
        } else if(condição3){
            // terceira opção
        } else {
            // nenhuma das anteriores
        }
        
        ⚠️ IMPORTANTE: A primeira condição verdadeira é executada e as
        demais são ignoradas.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 3: Conceitos de Nota                ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    float nota_aluno = 8.5f;
    
    printf("Nota: %.1f\n", nota_aluno);
    
    if(nota_aluno >= 9.0f){
        printf("Conceito: A (Excelente) 🌟\n");
        printf("Parabéns! Desempenho excepcional!\n\n");
    } else if(nota_aluno >= 7.0f){
        printf("Conceito: B (Bom) 👍\n");
        printf("Ótimo trabalho! Continue assim!\n\n");
    } else if(nota_aluno >= 5.0f){
        printf("Conceito: C (Regular) ⚠️\n");
        printf("Pode melhorar. Estude mais!\n\n");
    } else if(nota_aluno >= 3.0f){
        printf("Conceito: D (Insuficiente) ❌\n");
        printf("Precisa de recuperação!\n\n");
    } else {
        printf("Conceito: F (Reprovado) 💔\n");
        printf("Infelizmente não atingiu o mínimo.\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Calculadora de IMC (Índice de Massa Corporal)
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 4: Calculadora de IMC               ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    float peso = 70.0f;      // kg
    float altura = 1.75f;    // metros
    float imc = peso / (altura * altura);
    
    printf("Peso: %.1f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("IMC: %.2f\n\n", imc);
    
    printf("Classificação: ");
    if(imc < 18.5f){
        printf("Abaixo do peso\n");
    } else if(imc < 25.0f){
        printf("Peso normal ✅\n");
    } else if(imc < 30.0f){
        printf("Sobrepeso ⚠️\n");
    } else if(imc < 35.0f){
        printf("Obesidade grau I\n");
    } else if(imc < 40.0f){
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III (mórbida)\n");
    }
    printf("\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              if Aninhado (um dentro do outro)                     ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Você pode colocar um if dentro de outro if para verificar
        múltiplas condições em sequência.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 5: Permissão para Dirigir           ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    bool tem_carteira = true;
    int idade_motorista = 20;
    bool bebeu = false;
    
    printf("Verificando permissões...\n");
    printf("Idade: %d anos\n", idade_motorista);
    printf("Tem carteira: %s\n", tem_carteira ? "Sim" : "Não");
    printf("Bebeu álcool: %s\n\n", bebeu ? "Sim" : "Não");
    
    if(tem_carteira){
        if(idade_motorista >= 18){
            if(!bebeu){
                printf("✅ PODE DIRIGIR\n");
                printf("   Todas as condições atendidas!\n\n");
            } else {
                printf("❌ NÃO PODE DIRIGIR\n");
                printf("   Motivo: Consumiu álcool\n\n");
            }
        } else {
            printf("❌ NÃO PODE DIRIGIR\n");
            printf("   Motivo: Menor de idade\n\n");
        }
    } else {
        printf("❌ NÃO PODE DIRIGIR\n");
        printf("   Motivo: Não possui carteira\n\n");
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              Operador Ternário (? :)                              ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        É um if/else SUPER COMPACTO em uma linha.
        Útil para atribuições simples.
        
        SINTAXE:
        variavel = (condição) ? valor_se_verdadeiro : valor_se_falso;
        
        Leia como: "Se condição, então valor1, senão valor2"
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 6: Operador Ternário                ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int numero = 10;
    char* paridade = (numero % 2 == 0) ? "Par" : "Ímpar";
    printf("O número %d é %s\n\n", numero, paridade);
    
    // Outro exemplo: Maior entre dois números
    int a = 15, b = 23;
    int maior = (a > b) ? a : b;
    printf("Entre %d e %d, o maior é: %d\n\n", a, b, maior);
    
    // Exemplo: Status de produto
    int estoque = 5;
    char* status = (estoque > 0) ? "Disponível" : "Esgotado";
    printf("Produto: %s (estoque: %d)\n\n", status, estoque);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              switch-case - Múltiplas Escolhas                     ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Quando você tem MUITAS opções baseadas em UMA variável,
        switch-case é mais limpo que vários if/else.
        
        SINTAXE:
        
        switch(variavel){
            case valor1:
                // código para valor1
                break;
            case valor2:
                // código para valor2
                break;
            default:
                // código se nenhum case deu match
        }
        
        ⚠️ IMPORTANTE: Use break para evitar "fall-through"
        (executar os cases seguintes)
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 7: Menu de Opções                   ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int opcao = 2;
    
    printf("=== MENU DO JOGO ===\n");
    printf("1. Novo Jogo\n");
    printf("2. Carregar Jogo\n");
    printf("3. Configurações\n");
    printf("4. Créditos\n");
    printf("5. Sair\n\n");
    printf("Opção escolhida: %d\n\n", opcao);
    
    switch(opcao){
        case 1:
            printf("🎮 Iniciando novo jogo...\n");
            printf("   Boa sorte, aventureiro!\n\n");
            break;
        case 2:
            printf("📂 Carregando jogo salvo...\n");
            printf("   Bem-vindo de volta!\n\n");
            break;
        case 3:
            printf("⚙️  Abrindo configurações...\n");
            printf("   Ajuste gráficos, som, etc.\n\n");
            break;
        case 4:
            printf("👥 Créditos:\n");
            printf("   Desenvolvido por: Equipe XYZ\n\n");
            break;
        case 5:
            printf("👋 Saindo do jogo...\n");
            printf("   Até a próxima!\n\n");
            break;
        default:
            printf("❌ Opção inválida!\n");
            printf("   Escolha entre 1 e 5.\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        switch com CARACTERES
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 8: Calculadora Básica               ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    char operador = '*';
    int x = 8, y = 4;
    
    printf("Operação: %d %c %d = ", x, operador, y);
    
    switch(operador){
        case '+':
            printf("%d\n\n", x + y);
            break;
        case '-':
            printf("%d\n\n", x - y);
            break;
        case '*':
            printf("%d\n\n", x * y);
            break;
        case '/':
            if(y != 0){
                printf("%.2f\n\n", (float)x / y);
            } else {
                printf("ERRO (divisão por zero)\n\n");
            }
            break;
        case '%':
            if(y != 0){
                printf("%d\n\n", x % y);
            } else {
                printf("ERRO (divisão por zero)\n\n");
            }
            break;
        default:
            printf("ERRO (operador inválido)\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        switch - Fall-through (sem break)
        ═══════════════════════════════════════════════════════════════════
        
        Às vezes queremos que VÁRIOS cases executem o MESMO código.
        Omitimos o break para isso acontecer.
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 9: Dias da Semana                   ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int dia = 6;
    
    printf("Dia da semana: %d\n", dia);
    
    switch(dia){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Classificação: Dia útil 💼\n");
            printf("Ação: Ir trabalhar/estudar\n\n");
            break;
        case 6:
        case 7:
            printf("Classificação: Fim de semana 🎉\n");
            printf("Ação: Descansar e se divertir!\n\n");
            break;
        default:
            printf("❌ Dia inválido! Use 1-7.\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Sistema de Classificação Etária
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO 10: Classificação Etária            ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    int idade_filme = 16;
    int idade_usuario = 18;
    
    printf("Filme: Classificação %d anos\n", idade_filme);
    printf("Usuário: %d anos\n\n", idade_usuario);
    
    if(idade_usuario >= idade_filme){
        printf("✅ ACESSO PERMITIDO\n");
        printf("   Aproveite o filme!\n\n");
    } else {
        int anos_faltam = idade_filme - idade_usuario;
        printf("❌ ACESSO NEGADO\n");
        printf("   Faltam %d ano(s) para assistir\n\n", anos_faltam);
    }
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              COMPARAÇÃO: if/else vs switch                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        USE if/else QUANDO:
        ✅ Condições complexas (>, <, >=, <=, &&, ||)
        ✅ Comparar diferentes variáveis
        ✅ Usar expressões matemáticas
        ✅ Poucas condições (2-3)
        
        USE switch QUANDO:
        ✅ Muitas opções (5+)
        ✅ Comparar UMA variável com valores CONSTANTES
        ✅ Valores inteiros ou caracteres
        ✅ Código mais legível para menu de opções
        
        ❌ switch NÃO funciona com:
        - Strings (use if/else ou strcmp)
        - Condições com <, >, <=, >=
        - Valores não-constantes
    */
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         💡 BOAS PRÁTICAS                          ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Use nomes descritivos para condições complexas
        ✅ Sempre use {} mesmo para blocos de uma linha
        ✅ Evite if aninhados muito profundos (máx 3 níveis)
        ✅ Prefira switch para muitas opções de uma variável
        ✅ Sempre coloque break em switch (exceto fall-through intencional)
        ✅ Use default em switch para tratar casos não esperados
        ✅ Operador ternário apenas para atribuições simples
        
        ❌ Não compare float/double com == (use margem de erro)
        ❌ Não esqueça o break em switch
        ❌ Evite condições muito complexas (quebre em variáveis)
        ❌ Não abuse do operador ternário (prejudica legibilidade)
        
        
        EXEMPLO DE CÓDIGO LIMPO:
        
        // ❌ RUIM: Condição confusa
        if(idade >= 18 && tem_carteira && !bebeu && carro_ok){...}
        
        // ✅ BOM: Variável descritiva
        bool pode_dirigir = idade >= 18 && tem_carteira && !bebeu && carro_ok;
        if(pode_dirigir){...}
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║       Todas as estruturas condicionais demonstradas      ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
