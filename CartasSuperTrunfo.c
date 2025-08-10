#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    //Variáveis primeira carta
    char estado1[1], cidade1[20], codCarta1[20];
    int populacao1, pontosTuristico1;
    float area1, pib1;
    
    //Variáveis segunda carta
    char estado2[1], cidade2[20], codCarta2[20];
    int populacao2, pontosTuristico2;
    float area2, pib2;

    //Coletando dados primeira carta
    printf("\n");
    printf("==== DIGITE ABAIXO OS DADOS SOLICITADOS ====\n");
    printf("\n");

    printf("PRIMEIRA CARTA\n");
    printf("\n");

    printf("Estado (de A até H): ");
    scanf("%s", estado1);

    printf("Código da Carta (O estado + um número de 01 a 04): ");
    scanf("%s", codCarta1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%i", &populacao1);
    
    printf("Número de Pontos turísticos: ");
    scanf("%i", &pontosTuristico1);

    printf("Área (Em km²): ");
    scanf("%f", &area1);

    printf("PIB (em Bilhões): ");
    scanf("%f", &pib1);

    //Coletando dados segunda carta
    printf("\n");
    printf("==== DIGITE ABAIXO OS DADOS SOLICITADOS ====\n");
    printf("\n");

    printf("SEGUNDA CARTA\n");
    printf("\n");

    printf("Estado (de A até H): ");
    scanf("%s", estado2);

    printf("Código da Carta (O estado + um número de 01 a 04): ");
    scanf("%s", codCarta2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%i", &populacao2);
    
    printf("Número de Pontos turísticos: ");
    scanf("%i", &pontosTuristico2);

    printf("Área (Em km²): ");
    scanf("%f", &area2);

    printf("PIB (em Bilhões): ");
    scanf("%f", &pib2);

    system("cls"); //Limpa a tela após os dados digitados

    //Apresentando os dados inseridos das cartas 1 e 2
    printf("\n");
    printf("==== DADOS INSERIDOS ====\n");
    printf("\n");

    //Carta 01
    printf("** Carta 01 **\n");
    printf("\n");

    printf("Código da Carta: %s\n", codCarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i habitantes\n", populacao1);
    printf("Número de Pontos turísticos: %i\n", pontosTuristico1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("\n");
    
    //Carta 02
    printf("** Carta 02 **\n");
    printf("\n");

    printf("Código da Carta: %s\n", codCarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i habitantes\n", populacao2);
    printf("Número de Pontos turísticos: %i\n", pontosTuristico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("\n");

}
