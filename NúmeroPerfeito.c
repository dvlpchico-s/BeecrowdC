#include <stdio.h>
int main ()
{
    int num,prova,teste;
    //printf("Quantos testes deseja fazer: ");
    scanf("%d",&teste);
    for(int i=0;i<teste;i++)
    {
        //printf("Teste (%d)\n",i+1);
        //printf("Digite o numero escolhido pelo user: ");
        scanf("%d",&num);
        prova=0;
        for (int j=1;j<num;j++)
        {
            if (num%j==0)
            {
                prova+=j;
            }
        }
        if (num==prova)
        {
            printf("%d eh perfeito\n",num);
        }
        if (num!=prova)
        {
            printf("%d nao eh perfeito\n",num);;
        }        
    }
    prova=0;
    return 0;
}