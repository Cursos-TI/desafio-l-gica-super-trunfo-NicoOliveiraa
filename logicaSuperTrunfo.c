#include <stdio.h>
#include <string.h>

// Definição da estrutura para uma carta de Super Trunfo
typedef struct {
    char estado[3];
    char codigo_carta[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    // Declaração e inicialização da Carta 1
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "SP001");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.0;
    carta1.pib = 692000000000.0;
    carta1.pontos_turisticos = 50;

    // Declaração e inicialização da Carta 2
    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1260.0;
    carta2.pib = 354000000000.0;
    carta2.pontos_turisticos = 35;

    printf("Cartas inicializadas com sucesso.\n");

    // Cálculo e exibição da Densidade Populacional e PIB per capita para Carta 1
    float densidade_populacional1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / carta1.populacao;
    printf("\n--- Dados Calculados para %s (%s) ---\n", carta1.nome_cidade, carta1.estado);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    // Cálculo e exibição da Densidade Populacional e PIB per capita para Carta 2
    float densidade_populacional2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / carta2.populacao;
    printf("\n--- Dados Calculados para %s (%s) ---\n", carta2.nome_cidade, carta2.estado);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    // Escolha do atributo para comparação (População)
    char atributo_comparacao[20] = "População";

    printf("\n--- Comparação de cartas (Atributo: %s) ---\n", atributo_comparacao);
    printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}