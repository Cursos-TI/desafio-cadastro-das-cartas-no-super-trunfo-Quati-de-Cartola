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
    int resultado1, resultado2;
    // Para Switch de escolha de qual atributo será usado para o combate
    int escolhaJogador, escolhaJogador2;
    // Para saída de jogo e identificação do atributo escolhido do jogador
    int atributo1, atributo2;

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

    // Menu interativo
    printf("=======================================\n");
    printf("Escolha qual atributo as cartas batalharão:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Nº de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    // Escolhendo o primeiro atributo
    scanf("%d", &escolhaJogador);

    ///////////////////////////////////////////////////////////////////////////////////////
    printf("=======================================\n");
    printf("### RESULTADO\n");
    // Fazendo um Switch para que o jogador possa escolher qual atributo será escolhido
    switch (escolhaJogador)
    {
        case 1: // Escolheu População
        //////////////////////////////////////////////////////////////
            // Guardando em uma variável resultado1 o valor dela
            resultado1 = populacao1;
            resultado2 = populacao2;
            printf("=======================================\n");
            printf("Escolha qual é o segundo atributo que as cartas batalharão:\n");
            printf("X. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Nº de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &escolhaJogador2);
        break;

        case 2: // Escolheu Área
        //////////////////////////////////////////////////////////////
            // Área
            resultado1 = area1;
            resultado2 = area2;
            printf("=======================================\n");
            printf("Escolha qual é o segundo atributo que as cartas batalharão:\n");
            printf("1. População\n");
            printf("X. Área\n");
            printf("3. PIB\n");
            printf("4. Nº de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &escolhaJogador2);
        break;

        case 3: // Escolheu PIB
        ///////////////////////////////////////////////////////////////
            // PIB
            resultado1 = pib1;
            resultado2 = pib2;
            printf("=======================================\n");
            printf("Escolha qual é o segundo atributo que as cartas batalharão:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("X. PIB\n");
            printf("4. Nº de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &escolhaJogador2);
        break;

        case 4: // Escolheu Pontos Turísticos
        ///////////////////////////////////////////////////////////////
            // p_turisticos
            resultado1 = p_turisticos1;
            resultado2 = p_turisticos2;
            printf("=======================================\n");
            printf("Escolha qual é o segundo atributo que as cartas batalharão:\n");
            printf("X. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("X. Nº de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &escolhaJogador2);
        break;

        case 5: // Densidade demográfica
        ///////////////////////////////////////////////////////////////
            // densidade demográfica
            resultado1 = densidade_populacional1;
            resultado2 = densidade_populacional2;
            printf("=======================================\n");
            printf("Escolha qual é o segundo atributo que as cartas batalharão:\n");
            printf("X. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Nº de pontos turísticos\n");
            printf("X. Densidade Demográfica\n");
            scanf("%d", &escolhaJogador2);
            
        break;
    }
    // Fazendo um Switch para que o jogador possa escolher qual foi o segundo atributo escolhido
    switch (escolhaJogador2)
    {
        case 1: // Escolheu População
        //////////////////////////////////////////////////////////////
            // Imprimindo resultado
            // Vamos identificar se os atributos da carta um ganham da carta dois
            // Começando pela população
            atributo1 = resultado1 + populacao1;
            atributo2 = resultado2 + populacao2;
        break;

        case 2: // Escolheu Área
        //////////////////////////////////////////////////////////////
            // Área
            atributo1 = resultado1 + area1;
            atributo2 = resultado2 + area2;
        break;

        case 3: // Escolheu PIB
        ///////////////////////////////////////////////////////////////
            // PIB
            atributo1 = resultado1 + pib1;
            atributo2 = resultado2 + pib2;
        break;

        case 4: // Escolheu Pontos Turísticos
        ///////////////////////////////////////////////////////////////
            // p_turisticos
            atributo1 = resultado1 + p_turisticos1;
            atributo2 = resultado2 + p_turisticos2;
        break;

        case 5: // Densidade demográfica
        ///////////////////////////////////////////////////////////////
            // densidade demográfica
            atributo1 = resultado1 + densidade_populacional1;
            atributo2 = resultado2 + densidade_populacional2;
        break;
    }
    ///////////////////////////////////////////////////////////////////
    // Imprimindo as respostas
    printf("==========================================================\n");
    printf("Carta %s: %d\n", codigo_completo1, atributo1);
    printf("Carta %s: %d\n", codigo_completo2, atributo2);
    printf("==========================================================\n");
    // SE o atributo 1 é maior que o atributo 2
    if (atributo1 > atributo2)
    {
        printf("A Carta %s ganhou da Carta %s!\n", codigo_completo1, codigo_completo2);
    } else
    // SE for igual
    if (atributo1 == atributo2)
    {
        printf("A Carta %s empatou com a Carta %s!\n", codigo_completo1, codigo_completo2);
    } else
    // SE o atributo 1 é menor que o atributo 2
    {
        printf("A Carta %s ganhou da Carta %s!\n", codigo_completo2, codigo_completo1);
    }
    return 0;
}
