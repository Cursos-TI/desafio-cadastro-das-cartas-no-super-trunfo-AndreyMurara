#include <stdio.h>

int main(){

    int Populacao, NumeroDePontosTuristicos;
    int Populacao2, NumeroDePontosTuristicos2;
    float area, PIB;
    float area2, PIB2;
    char Estado[8];
    char Estado2[8];     
    char CodCarta[4];
    char CodCarta2[4];     
    char NomeCidade[200]; 
    char NomeCidade2[200];    

    printf("Insira os dados da carta 1: \n");
    
    printf("Estado(De 'A' - 'H'): \n");
    scanf("%s", Estado);


    printf("Codigo da carta(Exemplo: C01): \n");
    scanf("%s", CodCarta);

    printf("Nome da Cidade(Usar '_' ou '-' para espaços): \n");
    scanf("%s", NomeCidade);

    printf("Insira a população da sua cidade(Favor, sem usar '. , - _'): \n");
    scanf("%d", &Populacao);

    printf("Insira a area da cidade(Favor, sem usar '. , - _'): \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade(Favor, sem usar '. , - _'): \n");
    scanf("%f", &PIB);

    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("\nInsira os dados da carta 2: \n");
    
    printf("Estado(De 'A' - 'H'): \n");
    scanf("%s", Estado2);


    printf("Codigo da carta(Exemplo: C01): \n");
    scanf("%s", CodCarta2);

    printf("Nome da Cidade(Usar '_' ou '-' para espaços): \n");
    scanf("%s", NomeCidade2);

    printf("Insira a população da sua cidade(Favor, sem usar '. , - _'): \n");
    scanf("%d", &Populacao2);

    printf("Insira a area da cidade(Favor, sem usar '. , - _'): \n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade(Favor, sem usar '. , - _'): \n");
    scanf("%f", &PIB2);

    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);


    printf("\n-- -- --Dados atuais da carta de numero 1-- -- -- \n");
    printf("Estado: %s \nCodigo da carta: %s \nNome da cidade: %s \nPopulação: %d", Estado, CodCarta, NomeCidade, Populacao);
    printf("\nArea: %.2f Km² \nPIB: %.2f \nPontos Turisticos: %d", area, PIB, NumeroDePontosTuristicos);

    printf("\n\n-- -- --Dados atuais da carta de numero 2-- -- -- \n");
    printf("Estado: %s \nCodigo da carta: %s \nNome da cidade: %s \nPopulação: %d", Estado2, CodCarta2, NomeCidade2, Populacao2);
    printf("\nArea: %.2f Km² \nPIB: %.2f \nPontos Turisticos: %d\n", area2, PIB2, NumeroDePontosTuristicos2);

    return 0;
}