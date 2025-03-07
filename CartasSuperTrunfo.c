#include <stdio.h>

int main(){
    int carta;
    char estado;
    char codigo[];
    char cidade[];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuriscos;

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


    printf("Carta: %i \n",carta);
    printf("Estado: %c \n", estado);
    printf("Código: %c%i\n",estado,carta);
    printf("Nome da Cidade: %c \n", cidade);
    printf("População: %i\n",populacao);
    printf("Área: %fkm²\n",area);
    printf("PIB: %f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos);

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


    printf("Carta: %i \n",carta);
    printf("Estado: %c \n", estado);
    printf("Código: %c%i\n",estado,carta);
    printf("Nome da Cidade: %c \n", cidade);
    printf("População: %i\n",populacao);
    printf("Área: %fkm²\n",area);
    printf("PIB: %f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %i\n",numeroPontosTuriscos);
    return 0;
}