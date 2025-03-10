#include <stdio.h>

int main(){
    int carta;
    char estado;
    char codigo[10];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuriscos;
    float densidade;
    float pibPorCap;

    printf("Digite O Número Da Carta: ");
    scanf(" %i",&carta);
    printf("Digite O Estado: ");
    scanf(" %c",&estado);
    printf("Digite O Nome Da Cidade: ");
    scanf(" %s",&cidade);
    printf("Digite o Numero Da População: ");
    scanf(" %i",&populacao);
    printf("Digite a Área da Cidade: ");
    scanf(" %f",&area);
    printf("Digite O PIB Da Cidade: ");
    scanf(" %f",&pib);
    printf("Digite o Números De Pontos Turísticos: ");
    scanf(" %i",&numeroPontosTuriscos);

    densidade = populacao/area;
    pibPorCap = pib/populacao;

    printf("Segunda carta");
    printf("Carta: %i \n",carta);
    printf("Estado: %c \n", estado);
    printf("Código: %c%i\n",estado,carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %i\n",populacao);
    printf("Área: %fkm²\n",area);
    printf("PIB: %f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos);
    printf("Desnsidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pibPorCap);

    printf("Segunda Carta\n");
    printf("Digite O Número Da Carta: ");
    scanf(" %i",&carta);
    printf("Digite O Estado: ");
    scanf(" %c",&estado);
    printf("Digite O Nome Da Cidade: ");
    scanf(" %s",&cidade);
    printf("Digite o Numero Da População: ");
    scanf(" %i",&populacao);
    printf("Digite a Área da Cidade: ");
    scanf(" %f",&area);
    printf("Digite O PIB Da Cidade: ");
    scanf(" %f",&pib);
    printf("Digite o Números De Pontos Turísticos: ");
    scanf(" %i",&numeroPontosTuriscos);

    densidade = populacao/area;
    pibPorCap = pib/populacao;

    printf("Carta: %i \n",carta);
    printf("Estado: %c \n", estado);
    printf("Código: %c%i\n",estado,carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %i\n",populacao);
    printf("Área: %.2fkm²\n",area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos);
    printf("Desnsidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pibPorCap);

    return 0;
}