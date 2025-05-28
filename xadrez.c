#include<stdio.h>

int main()
{
  int torre = 1;
  int bispo = 1;
  int rainha = 1;
   // movimentação da torre
    printf("***Movimentação da torre***\n");
    for(torre ; torre <=5; torre++){
        printf("Direita\n");
    }
    
    // movimentação do Bispo
    printf("***Movimentação do Bispo***\n");
    
    while(bispo <= 5){
        printf("Cima, direita\n");
        bispo++;
    }
    // movimentação da rainha
    
    printf("***Movimentação da rainha***\n");
    do{
        printf("Esquerda\n");
        rainha ++;
    }while(rainha <= 8 );
    return 0;
}