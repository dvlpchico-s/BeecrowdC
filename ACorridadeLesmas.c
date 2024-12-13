#include <stdio.h>

int main(){
    int l,velocidade,colocacao;
    //printf("Quantos casos de testes?: ");
    while(scanf("%d",&l)!=EOF){
        velocidade=0;
        colocacao=1;
        for(int i=0;i<l;i++){
            int v;
            //printf("Digite a velocidade (%d)",i+1);
            scanf("%d",&v);

            if(v>velocidade){
                velocidade=v;
                colocacao=1;
            }
            if(velocidade>=10 && velocidade<20){
                colocacao=2;
            }else if(velocidade>=20){
                colocacao=3;
            }
        }
        printf("%d\n",colocacao);
    }
}