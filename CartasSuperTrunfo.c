#include <stdio.h>

int main(){

// Declaração de variaveis da primeira carta

    char estado; // Uma letra de A a H representando os 8 estados
    char codigo[4]; // Uma letra seguida de um número de 01 a 04
    char nome[10]; // O nome da cidade que deseja usar
    int populacao; // A população da cidade escolhida
    float area; // A área da cidade escolhida
    float pib; // O PIB da cidade escolhida
    int pontosTuristicos; // Os pontos turisticos da cidade escolhida

// Informações da primeira carta

        printf("Insira as informações da primeira carta: \n");

            printf("Insira a letra do estado: ");
                scanf(" %c", &estado);

            printf("Insira o código de estado: ");
                scanf("%s", codigo);

            printf("Insira o nome da cidade: ");
                scanf("%s", nome);

            printf("Insira a população da cidade: ");
                scanf("%i", &populacao);

            printf("Insira a área em KM da cidade: ");
                scanf("%f", &area);

            printf("insira o PIB da cidade: ");
                scanf("%f", &pib);
            
            printf("Insira os pontos turisticos da cidade: ");
                scanf("%i", &pontosTuristicos);


// Amostra de resultados da primeira carta

            printf("Primeira carta \n");

                printf("Estado: %c \n", estado);
                
                printf("Código do estado: %s \n", codigo);

                printf("Nome da cidade: %s \n", nome);

                printf("População da cidade: %i \n", populacao);

                printf("Área em KM da cidade: %f \n", area);

                printf("PIB: %f \n", pib);

                printf("Pontos turisticos: %i \n", pontosTuristicos);

    // Declaração das variaveis da segunda carta
    
    char estado2;
    char codigo2[4];
    char nome2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


        printf("Insira as informações da segunda carta: \n");

            printf("Insira a letra do estado: ");
                scanf(" %c", &estado2);

            printf("Insira o codigo do estado: ");
                scanf("%s", codigo2);

            printf("Insira o nome da cidade: ");
                scanf("%s", nome2);

            printf("Insira a população da cidade: ");
                scanf("%i", &populacao2);

            printf("Insira a área em KM da cidade: ");
                scanf("%f", &area2);

            printf("Insira o PIB da cidade:");
                scanf("%f", &pib2);

            printf("Insira os pontos turisticos da cidade: ");
                scanf("%i", &pontosTuristicos2);


    // Amostra de resultados da segunda carta

            printf("Primeira carta \n");

            printf("Estado: %c \n", estado2);
    
            printf("Código do estado: %s \n", codigo2);

            printf("Nome da cidade: %s \n", nome2);

            printf("População da cidade: %i \n", populacao2);

            printf("Área em KM da cidade: %f \n", area2);

            printf("PIB: %f \n", pib2);

            printf("Pontos turisticos: %i \n", pontosTuristicos2);


            return 0;
            
}