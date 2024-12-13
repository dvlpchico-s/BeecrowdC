#include <stdio.h>
#include <math.h>
int lista[51];
int total,n;
void cal(int c ,int p){
    if(p==n){
        return;
    }
    if(lista[p]==0){
        lista[p] = c;
        total++;
        return cal(c+1,p);
    }
    for(int i=0;i<=p;i++){
        int r = (int)sqrt(lista[i]+c);
        if(pow(r,2)==lista[i]+c){
            lista[i]=c;
            total++;
            return cal(c+1,p);
        }
    }
    cal(c,p+1);
}
int main(){
    int tst;
    scanf("%d",&tst);
    for(int i=0;i<tst;i++){
        scanf("%d",&n);
        for(int i=0;i<51;i++){
            lista[i]=0;
        }
        total=0;
        cal(1,0);
        printf("%d\n",total);
    }
    return 0;
}