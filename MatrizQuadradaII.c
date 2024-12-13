#include <stdio.h>

int main(){
    int t,l,c;
    while(1){
        scanf("%d",&t);
        int matriz[t][t];
        if (t==0){
            return 0;
        }
        for(l=0;l<t;l++){
            for(c=0;c<t;c++){
                if(l==c){
                    matriz[l][l]=1;
                }if(l<c){
                    matriz[l][c]=c-l+1;
                }if(l>c){
                    matriz[l][c]=l-c+1;
                }
            }
        }
        for(l=0;l<t;l++){
            for(c=0;c<t;c++){
                if (c==0){
                    printf("%3d",matriz[l][c]);
                }else{
                    printf(" %3d",matriz[l][c]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}