#include <stdio.h>

int main ()
{

  float m[12][12], soma = 0, media = 0, elemnt;
  int i, j, l;
  char op;

  scanf("%d %c", &l, &op);

  for (i = 0; i < 12; i++)
  {

    for (j = 0; j < 12; j++)
    {

      scanf("%f", &elemnt);
      m[i][j] = elemnt;

    }
  }

  if (op == 'S')
  {
    i = l;
    while (i == l)
    {

      for (j = 0; j < 12; j++)
      {

        soma += m[i][j];

      }

      i++;

    }

    printf("%.1f\n", soma);

  }
  else
  {

    if (op == 'M')
    {
      i = l;
      while (i == l)
      {

        for (j = 0; j < 12; j++)
        {

          media += m[i][j];

        }

        i++;

      }

      printf("%.1f\n", media/12);

    }
  }
}