#include <stdio.h>

int main(){

  
    // carta 1
    char estado1[20];
    char codigo1[4]; // a01 = 3 chars +\0
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float superpoder1; 

    // carta 2
    char estado2[20];
    char codigo2[4]; // a01 = 3 chars +\0
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float superpoder2;

    // cadastro da carta 1
    printf("=== cadastro da carta 1 ===\n");

    printf("digite estados [A-H]: ");
    scanf(" %[^\n]", estado1); // espaco entre do %c pra limpar buffer

    printf("digire o codigo da carta [ex: a01]:");
    scanf("%s", codigo1);

     printf("digite nome da cidade:");
     scanf(" %[^\n]", nomecidade1); // le ate o entre, pego nome com espaco 

     printf("digite a populacao:");
     scanf("%d", &populacao1);

     printf("digite a area[km²]:");
     scanf("%f", &area1);

     printf("digite o pib [bilhoes de reas]:");
     scanf("%f", &pib1);

     printf("digite os pontos turisticos: ");
     scanf("%d", &pontosturisticos1);
    
     // calcuçulo de carta 1
     if(area1> 0) {
        densidade_populacional1 = populacao1 / area1;
     } else {
        densidade_populacional1 = 0;
     
     }

     // pib per capita:
     if(populacao1 > 0) {
        pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
     } else {
        pib_per_capita1 = 0;
     }

     // calculo do suoer poder da carta 2

     superpoder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + pontosturisticos1;
      

     printf("\n=== cadastro da carta 2 ===\n");

     printf("digite estado [A-H]:");
     scanf(" %[^\n]", estado2);

     printf("digite o codigo da carta[ex: a01]:");
     scanf("%s", codigo2);

     printf("digite nome da cidade:");
     scanf(" %[^\n]", nomecidade2);

     printf("digite a populacao:");
     scanf("%d", &populacao2);

     printf("digite a area[km2]:");
     scanf("%f", &area2);

     printf("digite o pib[bilhoes de reais]:");
     scanf("%f", &pib2);

     printf("digite os pontos turisticos:");
     scanf("%d", &pontosturisticos2);
     
     // calculo da carta 2
     if(area2> 0) {
        densidade_populacional2 = populacao2 / area2;
     } else {
        densidade_populacional2 = 0;
     }

     // pib per capita
     if(populacao2 > 0) {
        pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
     } else {
        pib_per_capita2 = 0;
     }

     // calculo do super podr da carta 2
     superpoder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + pontosturisticos2;

     // saida de dados organizada
     printf("\n=== carta 1 ===\n");
     printf("Digite o Estado: %s\n", estado1);
     printf("codigo: %s\n",codigo1);
     printf("nome cidade: %s\n", nomecidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2fkm²\n", area1);
     printf("Pib: %.2f\n", pib1);
     printf("Pontos turisticos: %d\n",pontosturisticos1);
     printf("densidade populacional: %.2f\n", densidade_populacional1);
     printf("Pib per capita: %.2f\n", pib_per_capita1);
     printf("super poder: %.2f\n", superpoder1);

     printf("\n=== carta 2 ===\n");
     printf("digite estado: %s\n", estado2);
     printf("digite o codigo da carta: %s\n", codigo2);
     printf("digite nome da cidade: %s\n",nomecidade2);
     printf("digite a populacao: %d\n", populacao2);
     printf("digite a area[km²]: %.2f\n", area2);
     printf("digite o pib[bilhoes de reais]: %.2f\n", pib2);
     printf("digite os pontos turisticos: %d\n", pontosturisticos2);
     printf("densidade populacional: %.2f\n", densidade_populacional2);
     printf("Pib per capita: %.2f\n", pib_per_capita2);
     printf("super poder: %.2f\n", superpoder2);

     // comparacao do super poder das cartas
      int opcao;
       do { 
        printf("\n=== menu super trunfo ===\n");
        printf("1 - comparar populacao\n");
        printf("2 - comparacao area\n");
        printf("3 - comparacao pib\n");
        printf("4 - comparar superpoder\n");
        printf("0 - sair\n");
        printf("escolha uma opcao:");
        scanf("%d", &opcao);

        switch (opcao){
         case 1:
         if (populacao1 > populacao2){
            printf("carta 1 venceu na populacao1!\n");
         } else if (populacao2 > populacao1){
            printf("carta 2 venceu na populacao!\n");
          }else{
            printf("enpate na populacao!\n");
          }
         break;
            case 2:
         if (area1 > area2){
            printf("carta 1 venceu na area!\n");
         } else if (area2 > area1){
            printf("carta 2 venceu na area!\n");
         }else{
            printf("empate na area!\n");
         }
         
       break;
           case 3:
          if (pib1 > pib2){
            printf("carta 1 venceu no pib!\n");
          } else if (pib2 > pib1){
            printf("carta 2 venceu no pib!\n");
          }else{
            printf("empate no pib!\n");
          }
       break;
           case 4:
           if (superpoder1 > superpoder2){
              printf("carta1 venceu no super poder!\n");
           }else if(superpoder2 > superpoder1){
             printf("carta2 venceu no super poder\n");
           }else{
            printf("empate no super poder!\n");
           }
       break;
           case 0:
           printf("saindo...\n");
       break;    
          default:
          printf("opcao invalida!\n");
         }

          } while (opcao!=0);
   
        return 0;
         }
      