#include <stdio.h>

    int main() {

        //indentificando variaveis

        int populacao;
        int area;
        float pib;
        int turisticos;
        char nome[50];
        char estado[50];
        char codigo[50];
        int densidade;
        int percapita;


        //identificando entradas (printf) e saidas (scanf)

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome);

        printf("Digite o nome do estado: \n");
        scanf("%s", &estado);

        printf("Digite o código da carta: \n");
        scanf("%s", &codigo);

        printf("Digite o numero de habitantes da cidade: \n");
        scanf("%d", &populacao);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib);

        printf("Digite o numero de pontos turisticos da cidade: \n");
        scanf("%d", &turisticos);

        printf("Digite a área da cidade: \n");
        scanf("%d", &area);

        densidade = populacao % area;

        percapita = pib % populacao;

        //exibir resultado da carta

        printf("Desafio Super Trunfo\n");
        printf("CARTA NUMERO 01!\n");
        printf("Nome do Estado; %s\n", estado);
        printf("Numero do código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", nome);
        printf("Numero de Habitantes: %d\n", populacao);
        printf("PIB: %f\n", pib);
        printf("Numero de pontos turisticos: %d\n", turisticos);
        printf("Área em km²: %d km²\n", area);
        printf("Dencidade populacional: %dhab/km²\n", densidade);
        printf("PIB per capita: %d\n", percapita);

        return 0;






}