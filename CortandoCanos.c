#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define true 1
#define false 0
#define MAXSIZE 2500
#define MAX(a,b) a>b?a:b

int n,v[MAXSIZE],w[MAXSIZE],p[MAXSIZE][MAXSIZE];

int fuc(int,int);
int main(){
    int i,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d %d",&w[i],&v[i]);
        }
        memset(p,-1,sizeof(p));
        printf("%d\n",fuc(0,m));

    }
    return 0;
}

int fuc(int u,int s){
    if(u==n){
        return 0;
    }
    if(s==0){
        return 0;
    }
    if(s<0){
        return INT_MIN;
    }
    if(p[u][s]==-1){
        p[u][s]=MAX(fuc(u+1,s),v[u]+fuc(u,s-w[u]));
    }
    return p[u][s];
}