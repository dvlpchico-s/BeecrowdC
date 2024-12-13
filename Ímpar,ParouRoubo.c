#include<stdio.h>

int main(){

int p, j1, j2, r, a,soma;

    scanf("%d", &p);
    scanf("%d %d", &j1, &j2);
    soma=(j1+j2);
    if(j1>=0 && j2>=0 && j1<=100 && j2<=100){
        scanf("%d", &r);
        scanf("%d", &a);
        if(r==0 && a==1){
            printf("Jogador 1 ganha!\n");
        }
        if(r==1 && a==1){
            printf("Jogador 2 ganha!\n");
        }else{
            if(r==1 && a==0){
                printf("Jogador 1 ganha!\n");
            }else{
                if(r==0 && a==0){
                    if(soma%2==0 && p==1){
                        printf("Jogador 1 ganha!\n");
                    }else{
                        if(soma%2==0 && p==0){
                            printf("Jogador 2 ganha!\n");
                        }else{
                            if(soma%2!=0 && p==1){
                                printf("Jogador 2 ganha!\n");
                            }else{
                                if(soma%2!=0 && p==0){
                                    printf("Jogador 1 ganha!\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}