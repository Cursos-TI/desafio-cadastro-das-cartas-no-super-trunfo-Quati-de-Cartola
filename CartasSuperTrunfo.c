#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Definindo minhas variáveis para o desafio
    char   estado1, estado2;
    char   codigo1[3], codigo2[3];
    char   nome_cidade1[25], nome_cidade2[25];
    int    populacao1, populacao2;
    int    p_turisticos1, p_turisticos2;
    float  area1, area2;
    float  pib1,  pib2;
    char   codigo_completo1[50], codigo_completo2[50];
    // Para o desafio do Nível Aventureiro
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    // Para o desafio Nível Avançado
    float super_poder1, super_poder2;
    int resultado;

    //// Cadastro das Cartas:
    /// Carta 1
    // Estado
    printf("Insira o estado da sua primeira carta (A-H):\n");
    scanf (" %c", &estado1);
    // Código
    printf("Insira o código da sua carta (01-04):\n");
    scanf ("%s", codigo1);
    // Nome da cidade
    printf("Insira o nome da cidade de sua carta:\n");
    scanf (" %s", nome_cidade1);
    // População
    printf("Insira a população da sua carta:\n");
    scanf ("%d", &populacao1);
    // Pontos Turísticos
    printf("Insira a quantidade de pontos turísticos da sua carta:\n");
    scanf ("%d", &p_turisticos1);
    // Área
    printf("Insira a área da sua carta em km²:\n");
    scanf ("%f", &area1);
    // PIB
    printf("Insira o PIB da sua carta:\n");
    scanf ("%f", &pib1);

    // Configurando código completo
    sprintf(codigo_completo1, "%c%s", estado1, codigo1);
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    // Nível Mestre
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (densidade_populacional1 * -1) + p_turisticos1;

    //// Cadastro das Cartas:
    /// Carta 2
    // Estado
    printf("Insira o estado da sua Segunda Carta (A-H):\n");
    scanf (" %c", &estado2);
    // Código
    printf("Insira o código da sua carta (01-04):\n");
    scanf ("%s", codigo2);
    // Nome da cidade
    printf("Insira o nome da cidade de sua carta:\n");
    scanf (" %s", nome_cidade2);
    // População
    printf("Insira a população da sua carta:\n");
    scanf ("%d", &populacao2);
    // Pontos Turísticos
    printf("Insira a quantidade de pontos turísticos da sua carta:\n");
    scanf ("%d", &p_turisticos2);
    // Área
    printf("Insira a área da sua carta em km²:\n");
    scanf ("%f", &area2);
    // PIB
    printf("Insira o PIB da sua carta:\n");
    scanf ("%f", &pib2);

    // Configurando código completo
    sprintf(codigo_completo2, "%c%s", estado2, codigo2);
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    // Nível Mestre
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (densidade_populacional2 * -1) + p_turisticos2;

    // Exibição dos Dados das Cartas:
    // Mostrando cartas
    // Primeira Carta:
    printf("Carta 1=====================================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_completo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", p_turisticos1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Densidade Populacional: %f\n", densidade_populacional1);
    printf("PIB per Capita: %f\n", pib_per_capita1);
    // Segunda Carta:
    printf("Carta 2=====================================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_completo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", p_turisticos2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("PIB per Capita: %f\n", pib_per_capita2);


    // Imprimindo resultado - desafio mestre (primeiro módulo)
    printf("Resultado===========================\n");
    // Vamos identificar se os atributos da carta um ganham da carta dois
    // Começando pela população
    if (populacao1 > populacao2)
    {
        printf("Carta %s ganhou em população da Carta %s\n", nome_cidade1, nome_cidade2);
    } else
    {
        printf("Carta %s ganhou em população da Carta %s\n", nome_cidade2, nome_cidade1);
    }
    // Pontos turisticos
    printf("===================\n");
    if (p_turisticos1 > p_turisticos1)
    {
        printf("Carta %s ganhou em quantidade de pontos turísticos da Carta %s\n", nome_cidade1, nome_cidade2);
    } else
    {
        printf("Carta %s ganhou em quantidade de pontos turísticos da Carta %s\n", nome_cidade2, nome_cidade1);
    }
    // Área
    printf("===================\n");
    if (area1 > area2)
    {
        printf("Carta %s ganhou em tamanho de área da Carta %s\n", nome_cidade1, nome_cidade2);
    } else
    {
        printf("Carta %s ganhou em tamanho de área da Carta %s\n", nome_cidade2, nome_cidade1);
    }

    return 0;
}
