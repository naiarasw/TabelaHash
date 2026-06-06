#include<stdio.h>
#define tam 5



void gerarfuncao(int k){
    int primos[]={2, 3, 5, 7, 11, 13, 17,19, 23,29};
    for(int i=0;i<tam;i++){
        int a=primos[2*i];
        int b=primos[2*i+1];
        printf("h%d(x)=(%dx+%d) %% %d\n", i+1, a, b, k);
        
    }
}

int main(){
    gerarfuncao(100);
    return 0;
}