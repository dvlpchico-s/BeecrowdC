#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{

    long long c, gl;
    long long sub[30] = {0};

    scanf("%lld %lld", &c, &gl);

    long long sum = 0;
    for (size_t i = 0; i < 30; ++i){
        scanf("%lld", &sub[i]), sum += sub[i];
    }
    long long mean = 0;
    long long days = 0;

    while (c < gl)
    {

        for (size_t i = 0; i < 30 && c < gl; ++i)
        {
            mean = ceil(sum / 30.0);
            c += mean;
            sum = sum + (mean - sub[i]);
            sub[i] = mean;
            ++days;
        }
    }

    printf("%lld\n", days);

    return 0;
}