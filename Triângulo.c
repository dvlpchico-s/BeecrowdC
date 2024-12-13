#include <stdio.h>

int main(){
    int a,b,c,d;
    //printf("Digite o tamanho da vareta A,B,C e D separado por espaço: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if ((a + b > c) && (a + c > b) && (b + c > a) || (a + b > d) && (a + d > b) && (b + d > a) || (a + c > d) && (a + d > c) && (c + d > a) || (b + c > d) && (b + d > c) && (c + d > b)){
        printf("S\n");
    }else{
        printf("N\n");
    }
}