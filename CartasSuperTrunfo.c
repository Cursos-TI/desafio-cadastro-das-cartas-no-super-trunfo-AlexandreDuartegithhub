#include <stdio.h>

    int main() {

        //indentificando variaveis carta

        int populacao;
        int area;
        int pib;
        int turisticos;
        char nome[50];
        char estado[50];
        char codigo[50];
        int densidade;
        int percapita;

        //indentificando variaveis carta 02

        int populacao2;
        int area2;
        int pib2;
        int turisticos2;
        char nome2[50];
        char estado2[50];
        char codigo2[50];
        int densidade2;
        int percapita2;

        //identificando entradas (printf) e saidas (scanf) carta 01

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome);

        printf("Digite o nome do estado: \n");
        scanf("%s", &estado);

        printf("Digite o código da carta: \n");
        scanf("%s", &codigo);

        printf("Digite o numero de habitantes da cidade: \n");
        scanf("%d", &populacao);

        printf("Digite o PIB da cidade: \n");
        scanf("%d", &pib);

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

            //identificando entradas (printf) e saidas (scanf) carta 02 

            printf("Digite o nome da cidade: \n");
            scanf("%s", &nome2);

            printf("Digite o nome do estado: \n");
            scanf("%s", &estado2);

            printf("Digite o código da carta: \n");
            scanf("%s", &codigo2);

            printf("Digite o numero de habitantes da cidade: \n");
            scanf("%d", &populacao2);

            printf("Digite o PIB da cidade: \n");
            scanf("%d", &pib2);

            printf("Digite o numero de pontos turisticos da cidade: \n");
            scanf("%d", &turisticos2);

            printf("Digite a área da cidade: \n");
            scanf("%d", &area2);

            densidade2 = populacao2 % area2;

            percapita2 = pib2 % populacao2;

            //exibir resultado da carta 02

            printf("Desafio Super Trunfo\n");
            printf("CARTA NUMERO 02!\n");
            printf("Nome do Estado; %s\n", estado2);
            printf("Numero do código da carta: %s\n", codigo2);
            printf("Nome da cidade: %s\n", nome2);
            printf("Numero de Habitantes: %d\n", populacao2);
            printf("PIB: %f\n", pib2);
            printf("Numero de pontos turisticos: %d\n", turisticos2);
            printf("Área em km²: %d km²\n", area2);
            printf("Dencidade populacional: %dhab/km²\n", densidade2);
            printf("PIB per capita: %d\n", percapita2);

                if(percapita2 > percapita){
                    printf("A carta 02 venceu!");
                } else{
                    printf("A carta 01 venceu!");
                }



        return 0;






}