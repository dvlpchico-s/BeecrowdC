#include <stdio.h>
#define true 1
#define false 0

int main(){
    int x=0;
    int y,zeros;
    int l,c;
    _Bool bo,ok=true;
    int linha,coluna;
    
    scanf("%d %d",&linha,&coluna);
    for(l=0;l<linha;l++){
        zeros=0;
        bo=true;
        for(c=0;c<coluna;c++){
            scanf("%d",&y);
            if(y==0 && bo){
                zeros++;
            }
            else{
                    bo=false;
            }
        }
        if(l!=0){
            if((zeros>x || (zeros == x && zeros ==coluna)) && ok){
                x=zeros;
            }
            else{
                x=0,ok=false;
            }
        }else{
            x=zeros;
        }
    }
    if(x){
        printf("S\n");
    }else{
        printf("N\n");
    }
}