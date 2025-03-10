#include <stdio.h>

int main(){
    int carta1,carta2;
    char estado1,estado2;
    char codigo1[10],codigo2[10];
    char cidade1[10],cidade2[10];
    unsigned long int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int numeroPontosTuriscos1, numeroPontosTuriscos2;
    float densidade1,densidade2;
    float pibPorCap1,pibPorCap2;
    float superPoder1,superPoder2;
    int resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;

    printf("Primeira Carta\n");
    printf("Digite O Número Da Carta: ");
    scanf(" %i",&carta1);
    printf("Digite O Estado: ");
    scanf(" %c",&estado1);
    printf("Digite O Nome Da Cidade: ");
    scanf(" %s",&cidade1);
    printf("Digite o Numero Da População: ");
    scanf(" %lu",&populacao1);
    printf("Digite a Área da Cidade: ");
    scanf(" %f",&area1);
    printf("Digite O PIB Da Cidade: ");
    scanf(" %f",&pib1);
    printf("Digite o Números De Pontos Turísticos: ");
    scanf(" %i",&numeroPontosTuriscos1);

    densidade1 = populacao1/area1;
    pibPorCap1 = pib1/populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroPontosTuriscos1 + pibPorCap1 -densidade1 ;

    
    printf("Carta: %i \n",carta1);
    printf("Estado: %c \n", estado1);
    printf("Código: %c%i\n",estado1,carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %fkm²\n",area1);
    printf("PIB: %f bilhões de reais\n",pib1);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos1);
    printf("Desnsidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPorCap1);

    printf("Segunda Carta\n");
    printf("Digite O Número Da Carta: ");
    scanf(" %i",&carta2);
    printf("Digite O Estado: ");
    scanf(" %c",&estado2);
    printf("Digite O Nome Da Cidade: ");
    scanf(" %s",&cidade2);
    printf("Digite o Numero Da População: ");
    scanf(" %lu",&populacao2);
    printf("Digite a Área da Cidade: ");
    scanf(" %f",&area2);
    printf("Digite O PIB Da Cidade: ");
    scanf(" %f",&pib2);
    printf("Digite o Números De Pontos Turísticos: ");
    scanf(" %i",&numeroPontosTuriscos2);

    densidade2 = populacao2/area2;
    pibPorCap2 = pib2/populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroPontosTuriscos2 + pibPorCap2 -densidade2 ;
    
    printf("Carta: %i \n",carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %c%i\n",estado2,carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2fkm²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos2);
    printf("Desnsidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPorCap2);

    printf ("***Comparação das cartas***\n");

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = numeroPontosTuriscos1 > numeroPontosTuriscos2;
    resultado5 = densidade1 < densidade2;
    resultado6 = pibPorCap1 > pibPorCap2;
    resultado7 = superPoder1 > superPoder2;

    printf ("População: %d\n", resultado1);
    printf ("Área: %d\n", resultado2);
    printf ("PIB: %d\n", resultado3);
    printf ("Pontos turísticos: %d\n", resultado4);
    printf ("Densidade populacional: %d\n", resultado5);
    printf ("PIB Per Capita: %d\n", resultado6);
    printf ("Super Poder: %d\n\n", resultado7);

    return 0;
}