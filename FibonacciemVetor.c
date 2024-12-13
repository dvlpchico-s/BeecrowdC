#include<stdio.h>
int main()
{
   long long int n,p=0,s=1,prox,k;
   int i,j;
   scanf("%d", &j);
   for(i=1;i<=j;i++,p=0,s=1)
   {
       scanf("%lld",&n);
       n=n+1;
       for (k=0;k<n;k++ )
       {
          if (k<=1) {
            prox=k;
          }
          else
          {
             prox = p + s;
             p = s;
             s = prox;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,prox);
   }
   return 0;
}