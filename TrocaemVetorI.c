#include <stdio.h>

int main(){
    int i,j,t,vetor[20];
    for(int i=0;i<20;i++){
        //printf("Digite os valores: ");
        scanf("%d",&vetor[i]);
    }

    for(i=0,j=19;i<10;i++,j--){
        t=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=t;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,vetor[i]);
    }
}