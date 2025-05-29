#include<stdio.h>

void movtorre(int torre ){
    if(torre > 0){
        printf("Direita\n");
        movtorre(torre - 1);
    }

}

void movbispo(int bispo ){
    if(bispo > 0){
        for(int i = 0; i < 1 ; i++){
            printf("cima, ");
            for(int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        }
        movbispo(bispo - 1);
    }
}

void movrainha(int rainha ){
    if(rainha > 0){
        printf("Esquerda\n");
        movrainha(rainha - 1);
    }

}



int main()
{

    int vertical= 0;
    int horizontal = 2;
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
   // movimentação da torre
    printf("***Movimentação da torre***\n");
    movtorre(torre);
    
    // movimentação do Bispo
    printf("***Movimentação do Bispo***\n"); 
    movbispo(bispo);

    // movimentação da rainha
    
    printf("***Movimentação da rainha***\n");
    movrainha(rainha);
    
    // movimento do cavalo
    printf("***Movimentação do cavalo***\n");
    
    for (int i = 0, j = 2; i < 3; i++, j--) {
    if (i < 2) {
        printf("Cima\n");
    } else {
        printf("Direita\n");
    }
}
    
    return 0;
}