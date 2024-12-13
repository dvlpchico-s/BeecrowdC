#include <stdio.h>
#include <stdlib.h>
int main(){
    float x,y;
    //printf("Digite uma coordenada para o X: \n");
    scanf("%f",&x);
    //printf("Digite uma coordenada para o Y: \n");
    scanf("%f",&y);
    if (x>0 && y>0)
    {
        printf("Q1\n");
    }
    else if (x<0 && y>0)
    {   
        printf("Q2\n");
    }
    else if (x<0 && y<0)
    {   
        printf("Q3\n");
    }
    else if (x>0 && y<0)
    {
        printf("Q4\n");
    }
    else if (x==0 && y==0)
    {
        printf("Origem\n");
    }
    else if (x==0)
    {
        printf("Eixo Y\n");
    }
    else if (y==0)
    {
        printf("Eixo X\n");
    }
}