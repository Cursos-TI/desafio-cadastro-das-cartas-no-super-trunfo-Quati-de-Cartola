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
    char   codigo1[2], codigo2[2];
    char   nome_cidade1[25], nome_cidade2[25];
    int    populacao1, populacao2;
    int    p_turisticos1, p_turisticos2;
    float  area1, area2;
    float  pib1,  pib2;

    //// Cadastro das Cartas:
    /// Carta 1
    // Estado
    printf("Insira o estado da sua carta (A-H):\n");
    scanf (" %c", &estado1);
    // Código
    printf("Insira o código da sua carta (01-04):\n");
    scanf ("%s", codigo1);
    // Nome da cidade
    printf("Insira o nome da cidade de sua carta:\n");
    scanf ("%s", nome_cidade1);
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



    /// Carta 2
    // Código
    /*
    printf("Insira o código da sua segunda carta (01-04):\n");
    scanf ("%s", codigo2);
    // Estado
    printf("Insira o estado da sua segunda carta (A-H):\n");
    scanf (" %c", &estado2);
    // Nome da cidade
    printf("Insira o nome da cidade de sua segunda carta:\n");
    scanf ("%s", nome_cidade2);
    // População
    printf("Insira a população da sua segunda carta:\n");
    scanf ("%d", &populacao2);
    // Pontos Turísticos
    printf("Insira a quantidade de pontos turísticos da sua segunda carta:\n");
    scanf ("%d", &p_turisticos2);
    // Área
    printf("Insira a área da sua segunda carta em km²:\n");
    scanf ("%f", &area2);
    // PIB
    printf("Insira o PIB da sua segunda carta:\n");
    scanf ("%f", &pib2);
    */
    // Exibição dos Dados das Cartas:
    // Mostrando cartas
    // Primeira Carta:
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", p_turisticos1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    return 0;
}
