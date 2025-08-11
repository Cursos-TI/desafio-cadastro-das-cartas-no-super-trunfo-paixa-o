
#include <stdio.h> //Cabeçalho de entrada e saída padrão
#include <locale.h> //Para corrigir acentuação

int main(){
    setlocale(LC_ALL, "portuguese");

    //Variáveis primeira carta
    char estado1[20], cidade1[20], codCarta1[20];
    int populacao1, pontosTuristico1;
    float area1, pib1, densiadePopulacional1, pibPerCapita1;
    
    //Variáveis segunda carta
    char estado2[20], cidade2[20], codCarta2[20];
    int populacao2, pontosTuristico2;
    float area2, pib2, densiadePopulacional2, pibPerCapita2;

    //Coletando dados primeira carta
    printf("\n==== DIGITE ABAIXO OS DADOS SOLICITADOS ====\n\n");

    printf("PRIMEIRA CARTA\n\n");

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
    printf("\n==== DIGITE ABAIXO OS DADOS SOLICITADOS ====\n\n");

    printf("SEGUNDA CARTA\n\n");

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

    //Calcular PIB Per Capita e Dsensidade Populacional carta 01
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; //PIB em bilhões, por isso multiplica por 1 bilhão
    densiadePopulacional1 = populacao1 / area1;

    //Calcular PIB Per Capita e Dsensidade Populacional carta 02
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; //PIB em bilhões, por isso multiplica por 1 bilhão
    densiadePopulacional2 = populacao2 / area2;


    //Apresentando os dados inseridos das cartas 1 e 2
    printf("\n==== DADOS INSERIDOS ====\n\n");

    //Carta 01
    printf("** Carta 01 **\n\n");

    printf("Código da Carta: %s\n", codCarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i habitantes\n", populacao1);
    printf("Número de Pontos turísticos: %i\n", pontosTuristico1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiadePopulacional1);
    
    //Carta 02
    printf("\n** Carta 02 **\n\n");

    printf("Código da Carta: %s\n", codCarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i habitantes\n", populacao2);
    printf("Número de Pontos turísticos: %i\n", pontosTuristico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Densidade Populacional: %.2f hab/km²\n\n", densiadePopulacional2);
    
}
