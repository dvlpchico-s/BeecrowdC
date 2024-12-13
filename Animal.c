#include <stdio.h>
#include <string.h>
int main(){
    char tipo1[20];
    char tipo2[20];
    char tipo3[20];
    //printf("Digite- VERTEBRADO ou INVERTEBRADO: \n");
    scanf("%s",&tipo1);  
    int tamanho1=strlen(tipo1);
    if(tamanho1==10){
        //printf("Digite- AVE ou MAMIFERO: \n");
        scanf("%s",&tipo2);
        int tamanho2=strlen(tipo2);
        if(tamanho2==3){
            //printf("Digite- CARNIVORO ou ONIVORO: \n");
            scanf("%s",&tipo3);
            int tamanho3=strlen(tipo3);
            if(tamanho3==9){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }
        else{
            //printf("Digite- ONIVORO ou HERBIVORO: \n");
            scanf("%s",&tipo3);
            int tamanho3=strlen(tipo3);
            if(tamanho3==7){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        //printf("Digite- INSETO ou ANELIDEO: \n");
        scanf("%s",&tipo2);
        int tamanho2=strlen(tipo2);
        if(tamanho2==6){
            //printf("Digite-HEMATOFAGO ou HERBIVORO: \n");
            scanf("%s",&tipo3);
            int tamanho3=strlen(tipo3);
            if(tamanho3==10){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            //printf("Digite- HEMATOFAGO ou ONIVORO: ");
            scanf("%s",&tipo3);
            int tamanho3=strlen(tipo3);
            if(tamanho3==7){
                printf("minhoca\n");
            }else{
                printf("sanguessuga\n");
            }
        }
    }
    return 0;
}