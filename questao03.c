#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define tam 13


void inicializar(int tabela[]){
    for(int i=0; i<tam; i++){
        tabela[i]=0;
    }
}

int calculo( int x){
    return x % tam;
}

int inserir(int tabela[], int valor){
    int indice= calculo(valor);
    while(tabela[indice] != 0){
        indice= (indice+1)%tam;

    }
    tabela[indice]= valor;
}

void imprimir(int tabela[]){
    int j;
    for ( j=0; j<tam; j++){
        printf("%d--->%d\n",  j, tabela[j]);
    }
}

int main(){
    int tabela[tam];
    int op;
    int valor;
    inicializar(tabela);
do{
    printf("escolha uma opção a seguir:\n 1- sair\n 2-inserir\n 3-imprimir\n");
    scanf("%d", &op);


    switch(op){
        case 1:
        break;
        case 2:
        printf("Qual valor deseja inserir?\n");
        scanf("%d", &valor);
        inserir (tabela, valor);
        break;
        case 3:
        imprimir (tabela);
        break;
        default:
        printf ("Opção invalida!");
    }
}while(op != 1);
    

    return 0;
    
}