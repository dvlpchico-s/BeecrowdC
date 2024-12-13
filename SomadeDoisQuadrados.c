#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

int main(){
    int n;
    int x,y;
    _Bool sn;
    unsigned p;

    while(scanf("%d",&n)!=EOF){
        x=0;
        y=sqrt(n);
        sn=false;
        while(y>=x){
            p=x*x+y*y;
            if(p==n){
                sn=true;
                break;
            }
            else if(p < n){
                ++x;
            }
            else{
                --y;
            }  
        }
        printf("%s\n",sn ? "YES" : "NO");
    }

}