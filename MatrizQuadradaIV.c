#include <stdio.h>

void matriz(unsigned short);

int main ()
{

  unsigned short tam;

  while (scanf("%hd", &tam) != EOF)
  {

    matriz(tam);

  }
}

void matriz(unsigned short tamanho)
{

  int m[tamanho][tamanho];
  for (int l = 0; l < tamanho; l++)
    for (int c = 0; c < tamanho; c++)
    {

      if (l == c)
        m[l][c] = 2;
      else if (l == tamanho - c - 1)
        m[l][c] = 3;
      else
        m[l][c] = 0;

    }
  unsigned short inicio = tamanho/3;

  unsigned short fim = tamanho - inicio;

  for (int l = inicio;l < fim; l++){
    for (int c = inicio; c < fim; c++){
        m[l][c] = 1;   
    }
  }

  m[tamanho/2][tamanho/2] = 4;
  for (int l= 0; l< tamanho; l++){
    for (int c = 0; c < tamanho; c++){
      printf("%d", m[l][c]);
    }
    printf("\n");
  }
  printf("\n");
}