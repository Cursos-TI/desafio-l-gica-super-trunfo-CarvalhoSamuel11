#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main (){
    
    float populacao, area, pib;

    float populacao2, area2, pib2;

    printf("A populacao da carta 1 e de : \n");
    scanf("%i", &populacao);

    printf ("a area da carta 1 e: \n");
    scanf("%i", &area);

    printf("o pib da carta 1 e de: \n");
    scanf("%i", &pib);

    printf ("A população da carta 2 e de: \n");
    scanf("%i", &populacao2);

    printf ("A area da carta 2 e de : \n");
    scanf("%i", &area2);

    printf ("O pib da carta 2 e de: \n");
    scanf("%i", &pib2);
    
    if (populacao < populacao2){
        printf("A carta 1 perdeu para carta 2 em populacao. \n");
    } else {
        printf("A carta 1 ganhou da carta 2 em populacao. \n");
    }; 

    if (area < area2){
        printf("a area da carta 1 perdeu em populacao para a carta 2. \n");
    }else {
        printf("A area da carta 1 e maior que a area da carta 2. \n");
    }

    if (pib < pib2){
        printf("O pib da carta 1 e menor que o pib da carta 2. \n");
    }else {
        printf("O pib da carta 1 e maior que o pib da carta 2. \n");
    }

    return 0;
}
