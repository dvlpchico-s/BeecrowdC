#include <stdio.h>
 
int main() {
 
    int l,c;
    scanf("%d",&l);
    scanf("%d",&c);
    if (l % 2 == c % 2){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}