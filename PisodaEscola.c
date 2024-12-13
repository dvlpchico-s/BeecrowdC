#include <stdio.h>
 
int main() {
 
    int l,c;
    int laj1,laj2;
    scanf("%d",&l);
    scanf("%d",&c);
    laj1=l*c+(l-1)*(c-1);
    laj2=2*(l-1)+2*(c-1);
    printf("%d\n",laj1);
    printf("%d\n",laj2);
    return 0;
}