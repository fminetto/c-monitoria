/*
 * ============================================================================
 * @name:    tipos-variaveis.c
 * @author:  Felipe Minetto <fminetto44@gmail.com>
 * @brief:   Guia completo sobre tipos de variáveis em C com exemplos práticos
 * @date:    15/02/2026
 * @version: 1.0
 * 
 * @description:
 * Este programa demonstra todos os tipos de variáveis disponíveis na linguagem C,
 * incluindo seus modificadores, tamanhos em memória, precisão numérica e casos
 * de uso práticos. Ideal para estudos e referência rápida.
 * 
 * Conteúdo:
 * - Tipos básicos (char, int, float, double, void)
 * - Modificadores (signed, unsigned, short, long)
 * - Precisão e erros de arredondamento
 * - Boas práticas e armadilhas comuns
 * ============================================================================
 */

#include <stdio.h>

int main(int argc, char **argv){
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║           VARIÁVEIS EM C - Guia Completo com Exemplos            ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🎯 O QUE SÃO VARIÁVEIS?
        
        Imagine a memória do computador como um armário gigante com gavetas.
        Variáveis são gavetas etiquetadas onde você guarda informações 
        temporárias durante a execução do programa.
        
        Toda variável possui três elementos essenciais:
        📌 NOME (identificador) → Para você acessar no código
        📦 TIPO → Define quanto de memória ocupa e que dados pode armazenar
        💾 VALOR → O conteúdo armazenado naquele momento
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                      CHAR - Caracteres (1 byte)                   ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    char inicial_nome = 'F';                    // Primeira letra do seu nome
    char conceito_prova = 'A';                  // Conceito de A a F
    char simbolo_moeda = '$';                   // Qualquer caractere ASCII
    char tecla_pressionada = '\n';              // Caracteres especiais (\n = Enter)
    
    signed char temperatura = -15;              // De -128 a +127
    unsigned char idade_pet = 250;              // De 0 a 255 (só positivos)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                   INT - Números Inteiros (4 bytes)                ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    int idade_pessoa = 28;                      // Idade em anos
    int saldo_conta = -350;                     // Saldo negativo no banco
    int populacao_cidade = 12500000;            // População de São Paulo
    int ano_atual = 2026;                       // Ano corrente
    int pixels_tela = 1920;                     // Resolução horizontal
    
    signed int diferenca_gols = -3;             // Time perdeu de 3 gols
    unsigned int visitantes_site = 45000;       // Contador de visitas (nunca negativo)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              SHORT INT - Inteiros Pequenos (2 bytes)              ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Use quando souber que os valores são pequenos (economiza memória)
    */
    
    short int dia_mes = 15;                     // Dia do mês (1 a 31)
    short int andar_predio = 12;                // Andar do apartamento
    short int nivel_volume = 85;                // Volume de 0 a 100
    unsigned short int porta_servidor = 8080;   // Portas TCP/IP (0 a 65535)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║              LONG INT - Inteiros Grandes (8 bytes)                ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Para números gigantes que não cabem em int normal
    */
    
    long int habitantes_brasil = 215000000L;    // População brasileira
    long int distancia_km_terra_sol = 149600000L;  // 149 milhões de km
    long int bytes_hd = 500000000000L;          // HD de 500 GB
    unsigned long int cpf = 12345678901UL;      // CPF (11 dígitos, só positivo)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║        LONG LONG INT - Inteiros Astronômicos (8+ bytes)           ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    long long int millisegundos_ano = 31536000000LL;        // Ms em um ano
    long long int atomos_estimados = 1000000000000000000LL; // Átomos em 1 grama
    unsigned long long int timestamp_unix = 1739593200ULL;  // Timestamp (sempre positivo)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║            FLOAT - Decimais Simples (4 bytes, ~7 dígitos)         ║
        ╚═══════════════════════════════════════════════════════════════════╝
    */
    
    float preco_gasolina = 5.89f;               // Preço por litro
    float altura_metros = 1.75f;                // Sua altura
    float temperatura_celsius = 28.5f;          // Temperatura ambiente
    float nota_prova = 8.75f;                   // Nota de 0 a 10
    float percentual_desconto = 15.5f;          // 15.5% de desconto
    float peso_kg = 72.3f;                      // Seu peso
    float taxa_juros = 0.0135f;                 // Taxa de 1.35%
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║          DOUBLE - Decimais Precisos (8 bytes, ~15 dígitos)        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Use quando precisar de cálculos mais exatos
    */
    
    double pi = 3.141592653589793;              // Valor de PI com precisão
    double raiz_dois = 1.414213562373095;       // √2 preciso
    double saldo_investimento = 15847.38492;    // Saldo bancário preciso
    double latitude = -23.550520;               // Coordenadas GPS
    double longitude = -46.633308;              // Coordenadas GPS (SP)
    double cotacao_dolar = 5.73829;             // Cotação com precisão
    double velocidade_luz = 299792458.0;        // m/s (cálculos científicos)
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║     LONG DOUBLE - Decimais Ultra Precisos (16 bytes, ~19 dígitos) ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Para cálculos científicos ou financeiros críticos
    */
    
    long double pi_preciso = 3.141592653589793238462643L;
    long double constante_euler = 2.718281828459045235360L;
    long double numero_avogadro = 6.02214076e23L;          // Notação científica
    long double distancia_astronomica = 1.495978707e11L;   // Terra-Sol em metros
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                      VOID - O Tipo "Vazio"                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Não armazena valor, usado em funções que não retornam nada
        ou ponteiros genéricos.
        
        NÃO PODE declarar variável void sozinha!
        
        Exemplos de uso:
        void minhaFuncao() { ... }           // Função sem retorno
        void* ponteiro_generico;             // Ponteiro para qualquer tipo
    */
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║      ⚠️  PRECISÃO E ERROS DE ARREDONDAMENTO (IMPORTANTE!)  ⚠️     ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ATENÇÃO: Números decimais (float/double) NÃO são exatos!
        
        O computador armazena eles em formato binário (base 2), e muitos
        números decimais simples (base 10) não podem ser representados
        exatamente em binário.
        
        É como tentar escrever 1/3 em decimal: 0.333333... (infinito)
        
        
        ═══════════════════════════════════════════════════════════════════
        PROBLEMA 1: Perda de Precisão em Operações Simples
        ═══════════════════════════════════════════════════════════════════
    */
    
    float a = 0.1f;
    float b = 0.2f;
    float resultado = a + b;  
    // Você espera: 0.3
    // Na realidade: 0.30000001192092896 (aproximadamente)
    // O erro é pequeno, mas existe!
    
    printf("0.1 + 0.2 = %.20f (esperado: 0.3)\n\n", resultado);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PROBLEMA 2: Erros Acumulados em Loops
        ═══════════════════════════════════════════════════════════════════
    */
    
    float soma = 0.0f;
    for(int i = 0; i < 1000; i++){
        soma += 0.1f;  // Somando 0.1 mil vezes
    }
    // Você espera: 100.0
    // Na realidade: 100.00003051757812 (erro acumulou!)
    
    printf("0.1 somado 1000x = %.20f (esperado: 100.0)\n\n", soma);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PROBLEMA 3: Comparação de Igualdade (PERIGO!)
        ═══════════════════════════════════════════════════════════════════
    */
    
    float x = 0.1f + 0.2f;
    
    // ❌ ERRADO - Nunca faça isso!
    if(x == 0.3f){
        printf("Igualdade exata funcionou (improvável!)\n");
    } else {
        printf("❌ Igualdade exata FALHOU! %.20f != 0.3\n\n", x);
    }
    
    // ✅ CORRETO - Compare com margem de erro (epsilon)
    float epsilon = 0.00001f;
    if(x >= (0.3f - epsilon) && x <= (0.3f + epsilon)){
        printf("✅ Comparação com epsilon funcionou!\n\n");
    }
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        PROBLEMA 4: Operações com Números Muito Diferentes
        ═══════════════════════════════════════════════════════════════════
    */
    
    float grande = 1000000.0f;
    float pequeno = 0.000001f;
    float resultado_ruim = grande + pequeno;
    
    printf("1000000.0 + 0.000001 = %.20f\n", resultado_ruim);
    printf("❌ O número pequeno foi 'engolido'!\n\n");
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                      TABELA DE PRECISÃO                           ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        Tipo          | Bytes | Dígitos Precisos | Faixa de Valores
        --------------|-------|------------------|------------------
        float         | 4     | ~7 dígitos       | ±3.4E+38
        double        | 8     | ~15 dígitos      | ±1.7E+308
        long double   | 16    | ~19 dígitos      | ±1.1E+4932
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                     QUANDO USAR CADA TIPO?                        ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        🟡 FLOAT (4 bytes):
        ✅ Gráficos 3D, jogos (precisão suficiente)
        ✅ Sensores (temperatura, distância)
        ✅ Quando memória é muito limitada
        ❌ Cálculos financeiros
        ❌ Operações com muitas iterações
        ❌ Valores muito grandes + muito pequenos juntos
        
        🟢 DOUBLE (8 bytes) - RECOMENDADO:
        ✅ Cálculos científicos
        ✅ Coordenadas GPS
        ✅ Aplicações financeiras (melhor que float)
        ✅ Uso geral quando precisão importa
        ⚠️ Ainda tem erros (só menores que float)
        
        🔵 LONG DOUBLE (16 bytes):
        ✅ Cálculos astronômicos
        ✅ Constantes matemáticas precisas
        ✅ Simulações científicas críticas
        ⚠️ Mais lento e usa mais memória
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                 5 DICAS PARA EVITAR ERROS                         ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        1️⃣ NUNCA compare float/double com == ou !=
           Use margem de erro (epsilon)
        
        2️⃣ Para dinheiro, trabalhe com CENTAVOS em int
           Exemplo: R$ 19.99 → 1999 centavos (int)
           Evita erros de arredondamento completamente!
        
        3️⃣ Prefira double ao invés de float
           A diferença de memória é pequena, mas a precisão dobra
        
        4️⃣ Cuidado com loops acumulando valores
           O erro cresce a cada iteração
        
        5️⃣ Use printf com formatação limitada
           printf("%.2f", valor); // Mostra apenas 2 casas decimais
        
        
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO PRÁTICO: Sistema Bancário
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║         EXEMPLO: Sistema Bancário - Float vs Int         ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    // ❌ ERRADO - Usando float para dinheiro
    printf("❌ MÉTODO ERRADO (float):\n");
    float saldo_errado = 100.50f;
    float debito = 0.1f;
    printf("Saldo inicial: R$ %.2f\n", saldo_errado);
    printf("Subtraindo R$ 0.10 dez vezes...\n");
    
    for(int i = 0; i < 10; i++){
        saldo_errado -= debito;
    }
    
    printf("Saldo final: R$ %.20f\n", saldo_errado);
    printf("Esperado: R$ 99.50, Real: R$ %.2f (com erro!)\n\n", saldo_errado);
    
    
    // ✅ CORRETO - Usando centavos em int
    printf("✅ MÉTODO CORRETO (int com centavos):\n");
    int saldo_centavos = 10050;  // R$ 100.50 = 10050 centavos
    int debito_centavos = 10;    // R$ 0.10 = 10 centavos
    printf("Saldo inicial: R$ %.2f (%d centavos)\n", saldo_centavos / 100.0, saldo_centavos);
    printf("Subtraindo R$ 0.10 dez vezes...\n");
    
    for(int i = 0; i < 10; i++){
        saldo_centavos -= debito_centavos;
    }
    
    printf("Saldo final: %d centavos\n", saldo_centavos);
    printf("Convertendo: R$ %.2f (EXATO!)\n\n", saldo_centavos / 100.0);
    
    
    /*
        ═══════════════════════════════════════════════════════════════════
        EXEMPLO REAL: Sistema de E-commerce
        ═══════════════════════════════════════════════════════════════════
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║              EXEMPLO: Sistema de E-commerce              ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n\n");
    
    // Dados do produto
    unsigned long long int codigo_barras = 7891234567890ULL;
    char categoria = 'E';                       // 'E' = Eletrônicos
    unsigned int estoque = 47;                  // Quantidade em estoque
    
    printf("📦 Produto:\n");
    printf("   Código de barras: %llu\n", codigo_barras);
    printf("   Categoria: %c (Eletrônicos)\n", categoria);
    printf("   Estoque: %u unidades\n\n", estoque);
    
    // Preço usando centavos (método correto)
    int preco_centavos = 129990;                // R$ 1299.90
    int desconto_percentual = 15;               // 15% off
    int desconto_centavos = (preco_centavos * desconto_percentual) / 100;
    int total_centavos = preco_centavos - desconto_centavos;
    
    printf("💰 Cálculo de Preço:\n");
    printf("   Preço original: R$ %.2f\n", preco_centavos / 100.0);
    printf("   Desconto (%d%%): R$ %.2f\n", desconto_percentual, desconto_centavos / 100.0);
    printf("   Total final: R$ %.2f\n\n", total_centavos / 100.0);
    
    
    /*
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                  💡 DICA DE OURO - Nomes Descritivos              ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ❌ RUIM:
        int x = 25;
        float a = 100.5f;
        char c = 'M';
        
        ✅ BOM:
        int idade_usuario = 25;
        float preco_produto = 100.5f;
        char primeira_letra = 'M';
        
        
        🎯 REGRA PRÁTICA:
        Se você voltar no código depois de 1 semana e não entender
        o que a variável faz só de ler o nome, escolha um nome melhor!
        
        
        ╔═══════════════════════════════════════════════════════════════════╗
        ║                         ⚡ RESUMO FINAL                            ║
        ╚═══════════════════════════════════════════════════════════════════╝
        
        ✅ Inteiros (int, long, etc.) são SEMPRE exatos
        ⚠️ Decimais (float, double) são APROXIMADOS
        💰 Para dinheiro, use int com centavos
        🚫 NUNCA compare float/double com == ou !=
        📏 Prefira double sobre float (melhor precisão)
        🔤 Use nomes de variáveis descritivos
        📦 Escolha o tipo certo para economizar memória
    */
    
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║                  Programa Finalizado!                     ║\n");
    printf("║         Todos os tipos de variáveis demonstrados         ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");
    
    return 0;
}
