#include <stdio.h>
int val, f, com, totalPrint = 0, total = 0, c = 0, catual = 1, i = 0;
int main() {
    scanf("%d", &val);
    scanf("%d", &f);
    scanf("%d", &com);
    
    while (totalPrint != val * val){
        if ((f >= 0) && (com >= 0) && (f < val) && (com < val)){
            if (totalPrint != 0){
                printf(" ");
            }
            printf("%d", com + 1 + f * val);
            totalPrint++;
        }
        c++;
        if (i%4 == 0)
            com += 1;
        else if (i%4 == 1)
            f += 1;
        else if ( i % 4 == 2)
            com -= 1;
        else
            f -= 1;
            
        if (c == catual){
            i++;
            if (i%2 == 0){
                catual++;
            }
            c = 0;
        }
        total++;
    }
printf("\n%d\n", total);
return 0;
}