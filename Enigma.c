#include <stdio.h>
#include <string.h>
int main()
{   
    long long int number;
    scanf("%llu",&number);
    char  str[20];
    sprintf(str,"%llu",number);
    int tamanho=strlen(str);
    for (int i=0;i<tamanho/2;i++){
        char t=str[i];
        str[i]=str[tamanho-i-1];
        str[tamanho-i-1]=t;
    }

    printf("%s\n",str);
    return 0;
}