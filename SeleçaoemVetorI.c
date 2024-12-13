#include <stdio.h>
int main(){
    int i;
    float a[100];
    for(int i;i<100;i++){
        //printf("Digite o valor (%d): ",i);
        scanf("%f",&a[i]);
    }
    for(int i;i<100;i++){
        if(a[i]<=10){
            printf("A[%d] = %.1f\n",i,a[i]);
        }
    }
}