#include <stdio.h>

int main() {
    
    printf("Desafio Supertrunfo\n");
    
    char codigo1[20], codigo2[20]; // Variaveis simples para armazenas os dados das cartas
    char estado1[20], estado2[20]; 
    char cidade[20]; 
    int populacao1, populacao2;    
    float area1, area2;            
    float pib1, pib2;              
    int pontosturisticos1, pontosturisticos2;        

    // Solicita e lê os dados da carta 1

    printf("Carta 1\n\n");

    printf("Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area em km quadrado: \n");
    scanf("%f", &area1);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Solicita e lê os dados da carta 2

    printf("Carta 2\n\n");

    printf("Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area em km quadrado: \n");
    scanf("%f", &area2);

    printf("O produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);


    // Exibe as informações coletadas (carta 1)
    
    printf("Carta 1\n\n"); 

    printf("Codigo da cidade: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);

    // Exibe informações coletadas (carta 2)

    printf("Carta 2\n\n"); 

    printf("Codigo da cidade: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);



    return 0;


}