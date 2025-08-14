#include <stdio.h> //Cabeçalho de entrada e saída padrão
#include <locale.h> //Para corrigir acentuação

int main(){
    setlocale(LC_ALL, "portuguese");

    //Variáveis primeira carta
    char estado1[20], cidade1[20], codCarta1[20];
    unsigned int populacao1, pontosTuristico1;
    float area1, pib1;
    double densiadePopulacional1, superPoderCarta1, inversoDensidadePopulacional1, pibConvertido1, pibPerCapita1;

    //Variáveis segunda carta
    char estado2[20], cidade2[20], codCarta2[20];
    unsigned int populacao2, pontosTuristico2;
    float area2, pib2;
    double densiadePopulacional2, superPoderCarta2, inversoDensidadePopulacional2, pibConvertido2, pibPerCapita2;

    //Coletando dados primeira carta
    printf("\n|---------------------------------------------------|\n");
    printf("|----------- DIGITE OS DADOS SOLICITADOS -----------|\n");
    printf("|---------------------------------------------------|\n\n");

    printf("PRIMEIRA CARTA\n\n");

    printf("- Estado (de A até H): ");
    scanf("%s", estado1);

    printf("- Código da Carta (O estado + um número de 01 a 04): ");
    scanf("%s", codCarta1);

    printf("- Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("- População: ");
    scanf("%u", &populacao1);

    printf("- Número de Pontos turísticos: ");
    scanf("%u", &pontosTuristico1);

    printf("- Área (Em km²): ");
    scanf("%f", &area1);

    printf("- PIB (em Bilhões): ");
    scanf("%f", &pib1);

    //Coletando dados segunda carta
    printf("\n|---------------------------------------------------|\n");
    printf("|----------- DIGITE OS DADOS SOLICITADOS -----------|\n");
    printf("|---------------------------------------------------|\n\n");

    printf("SEGUNDA CARTA\n\n");

    printf("Estado (de A até H): ");
    scanf("%s", estado2);

    printf("Código da Carta (O estado + um número de 01 a 04): ");
    scanf("%s", codCarta2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%u", &populacao2);
    
    printf("Número de Pontos turísticos: ");
    scanf("%u", &pontosTuristico2);

    printf("Área (Em km²): ");
    scanf("%f", &area2);

    printf("PIB (em Bilhões): ");
    scanf("%f", &pib2);

    //Calcular PIB Per Capita e Dsensidade Populacional carta 01
    pibConvertido1 = (double) (pib1 * 1000000000.0); //PIB em bilhões, por isso multiplica por 1 bilhão
    pibPerCapita1 = (double) (pibConvertido1 / populacao1);
    densiadePopulacional1 = (double) (populacao1 / area1);

    //Calcular PIB Per Capita e Dsensidade Populacional carta 02
    pibConvertido2 = (double) (pib2 * 1000000000.0); //PIB em bilhões, por isso multiplica por 1 bilhão
    pibPerCapita2 = (double) (pibConvertido2 / populacao2);
    densiadePopulacional2 = (double) (populacao2 / area2);

    //Calcular Super Poder carta 1
    inversoDensidadePopulacional1 = (double) (1 / densiadePopulacional1); //Calcula o inerso da densidade populacional
    superPoderCarta1 = (double) (populacao1 + pontosTuristico1 + area1 + pibConvertido1 + pibPerCapita1 + inversoDensidadePopulacional1);

    //Calcular Super Poder carta 2
    inversoDensidadePopulacional2 = (double) (1 / densiadePopulacional2); //Calcula o inerso da densidade populacional
    superPoderCarta2 = (double) (populacao2 + pontosTuristico2 + area2 + pibConvertido2 + pibPerCapita2 + inversoDensidadePopulacional2);


    //Apresentando os dados inseridos das cartas 1 e 2
   printf("\n|---------------------------------------------------|\n");
    printf("|----------------- DADOS INSERIDOS -----------------|\n");
    printf("|---------------------------------------------------|\n\n");

    //Carta 01
    printf("********************* CARTA 01 *********************\n\n");

    printf("CÓDIGO DA CARTA: %s\n", codCarta1);
    printf("ESTADO: %s\n", estado1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %u habitantes\n", populacao1);
    printf("QUANTIDADE DE PONTOS TURÍSTICOS: %u\n", pontosTuristico1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("PIB PER CAPITA: R$ %.2f\n", pibPerCapita1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densiadePopulacional1);
    printf("SUPER POWER: %.2f (°-°)\n\n", superPoderCarta1);

    //Carta 02
    printf("********************* CARTA 02 *********************\n\n");

    printf("CÓDIGO DA CARTA: %s\n", codCarta2);
    printf("ESTADO: %s\n", estado2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %u habitantes\n", populacao2);
    printf("QUANTIDADE DE PONTOS TURÍSTICOS: %u\n", pontosTuristico2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("PIB PER CAPITA: R$ %.2f\n", pibPerCapita2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densiadePopulacional2);
    printf("SUPER POWER: %.2f (°-°)\n\n", superPoderCarta2);

    //COMPARANDO AS CARTAS
    printf("\n|---------------------------------------------------|\n");
    printf("|-------------- COMPARANDO AS CARTAS ---------------|\n");
    printf("|---------------------------------------------------|\n\n\n");

    printf(" ----------------------------\n");
    printf("| LEGENDA: 0 = NÃO - 1 = SIM |\n");
    printf(" ----------------------------\n\n");

    printf("        CARTA 01    X    CARTA 02\n\n");
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - População\n", (populacao1 > populacao2), (populacao2 > populacao1));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - Área\n", (area1 > area2), (area2 > area1));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - Pib\n", (pib1 > pib2), (pib2 > pib2));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - Pontos Turísticos\n", (pontosTuristico1 > pontosTuristico2), (pontosTuristico2 > pontosTuristico1));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - Densidade Populacional\n", (inversoDensidadePopulacional1 > inversoDensidadePopulacional2), (inversoDensidadePopulacional2 > inversoDensidadePopulacional2));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - PIB Per Capita\n", (pibPerCapita1 > pibPerCapita2), (pibPerCapita2 > pibPerCapita1));
    printf("CARTA 01 VENCEU (%d) X CARTA 02 VENCEU (%d) - Super Poder\n\n", (superPoderCarta1 > superPoderCarta2), (superPoderCarta2 > superPoderCarta1));

}
