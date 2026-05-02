#include <stdio.h>

int main(){
    
    char estado[20];
    char codigo[4]; // a01 = 3 chars +\0
    char nomecidade[50];
    int população;
    float area;
    float pib;
    int pontosturisticos;

    printf("=== cadastro da carta ===\n");

    printf("digite estados [A-H]: ");
    scanf(" %[^\n]", estado); // espaco entre do %c pra limpar buffer

    printf("digire o codigo da carta [ex: a01]:");
    scanf("%s", codigo);

     printf("digite nome da cidade:");
     scanf(" %[^\n]", nomecidade); // le ate o entre, pego nome com espaco 

     printf("digite a populacao:");
     scanf("%d", &população);

     printf("digite a area[km²]:");
     scanf("%f", &area);

     printf("digite o pib [bilhoes de reas]:");
     scanf("%f", &pib);

     printf("digite os pontos turisticos: ");
     scanf("%d", &pontosturisticos);

     // saida de dados organizada
     printf("\n=== carta 1 ===\n");
     printf("Digite o Estado: %c\n", estado);
     printf("codigo: %s\n",codigo);
     printf("nome cidade: %s\n", nomecidade);
     printf("Populacao: %d\n", população);
     printf("Area: %.2fkm²\n", area);
     printf("Pib: %.2f\n", pib);
     printf("Pontos turisticos: %d\n",pontosturisticos);

     return 0;


}
