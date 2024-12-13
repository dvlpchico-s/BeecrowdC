#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    int y;
    int n;
    int carlos,beto,rafa;
//    printf("Digite quantos testes terão: ");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++)
    {
//        printf("Digite o %d numero de X: ",i);
        scanf("%d",&x);
//        printf("Digite o %d numero de y: ",i);
        scanf("%d",&y);
        rafa= pow(3*x,2) + pow(y,2);
        beto= (2*pow(x,2)) + (pow(5*y,2));
        carlos= (-100*x) + pow(y,3);
    
        if (carlos>=beto && carlos>=rafa)
        {
            printf("Carlos ganhou\n");
        }
        else if (rafa>=beto && rafa>=carlos)
        {
            printf("Rafael ganhou\n");
        }
        else if (beto>=rafa && beto>=carlos)
        {
            printf("Beto ganhou\n");    
        }
    }
    return 0;


}