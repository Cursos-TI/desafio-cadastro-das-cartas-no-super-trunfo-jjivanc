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
    int opcao;

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

    printf ("***Comparação das cartas, Escolha Uma opção***\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Número de Pontos Turísticos\n");
    printf("5 - Comparar Densidade Populacional\n");
    scanf(" %i",&opcao);

    switch (opcao)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("Carta 1 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: População\n");
            printf("Valor: %lu\n",populacao1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: População\n");
            printf("Valor: %lu\n",populacao2);
        }else if(populacao1 == populacao2){
            printf("Empate\n");
        }
        else{
            printf("Carta 2 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: População\n");
            printf("Valor: %lu\n",populacao1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: População\n");
            printf("Valor: %lu\n",populacao2);
        }
        break;
    case 2:
        if(area1 > area2){
            printf("Carta 1 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Area\n");
            printf("Valor: %.2f\n",area1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Area\n");
            printf("Valor: %.2f\n",area2);
        }else if(area1 == area2){
            printf("Empate\n");
        }
        else{
            printf("Carta 2 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Area\n");
            printf("Valor: %.2f\n",area1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Area\n");
            printf("Valor: %.2f\n",area2);
        }
        break;
    case 3:
        if(pib1 > pib2){
            printf("Carta 1 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: PIB\n");
            printf("Valor: %.2f\n",pib1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: PIB\n");
            printf("Valor: %.2f\n",pib2);
        }else if(pib1 == pib2){
            printf("Empate\n");
        }
        else{
            printf("Carta 2 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: PIB\n");
            printf("Valor: %.2f\n",pib1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: PIB\n");
            printf("Valor: %.2f\n",pib2);
        }
        break;
    case 4:
        if(numeroPontosTuriscos1 > numeroPontosTuriscos2){
            printf("Carta 1 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Pontos Turísticos \n");
            printf("Valor: %i\n",numeroPontosTuriscos1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Pontos Turísticos\n");
            printf("Valor: %i\n",numeroPontosTuriscos2);
        }else if(numeroPontosTuriscos1 == numeroPontosTuriscos2){
            printf("Empate\n");
        }
        else{
            printf("Carta 2 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Pontos Turísticos \n");
            printf("Valor: %i\n",numeroPontosTuriscos1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Pontos Turísticos\n");
            printf("Valor: %i\n",numeroPontosTuriscos2);
        }
        break;
    case 5:
        if(densidade1 > densidade2){
            printf("Carta 2 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Densidade \n");
            printf("Valor: %.2f\n",densidade1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Densidade \n");
            printf("Valor: %.2f\n",densidade2);

        }else if(densidade1 == densidade2){
            printf("Empate\n");
        }
        else{
            printf("Carta 1 Venceu\n");
            printf("Nome Carta 1: %s\n",cidade1);
            printf("Atributo: Densidade \n");
            printf("Valor: %.2f\n",densidade1);
            printf("Nome Carta 2: %s\n",cidade2);
            printf("Atributo: Densidade \n");
            printf("Valor: %.2f\n",densidade2);
        }
        break;
    default:
    printf("Opção Inválida\n");
        break;
    }


    return 0;
}