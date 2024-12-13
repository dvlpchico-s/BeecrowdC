#include <stdio.h>
 
#include <stdio.h>
#include <math.h>
#define FALSE 0
#define TRUE 1

int main()
{
    int x;
    unsigned short num, rai, i, j;
    unsigned char prime;

    scanf ("%hd", &num);

    for (i = 0; i < num; i++)
    {
        prime = TRUE;

        scanf ("%d", &x);

        rai = (int)sqrt(x);

        if (x != 2  && x % 2 == 0 || x == 1) {
            prime = FALSE;
        }

        for (j = 3; prime == TRUE && j <= rai; j += 2) {
            if (x % j == 0) {
                prime = FALSE;
            }
        }

        if (prime) {
            printf ("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    return 0;
}