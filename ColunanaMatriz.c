#include <stdio.h>

int main ()
{

  float m[12][12], SOMA = 0, MEDIA = 0, elemt;
  int i, j, c;
  char operacao;

  scanf("%d %c", &c, &operacao);

  for (i = 0; i < 12; i++)
  {

    for (j = 0; j < 12; j++)
    {

      scanf("%f", &elemt);
      m[i][j] = elemt;

    }
  }

  if (operacao == 'S')
  {

    j = c;
    while (j == c)
    {

      for (i = 0; i < 12; i++)
      {

        SOMA += m[i][j];

      }

      j++;

    }

    printf("%.1f\n", SOMA);

  }
  else
  {

    if (operacao == 'M')
    {

      j = c;
      while (j == c)
      {

        for (i = 0; i < 12; i++)
        {

          MEDIA += m[i][j];

        }

        j++;

      }

      printf("%.1f\n", MEDIA/12);

    }
  }
}