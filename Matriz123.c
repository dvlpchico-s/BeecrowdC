#include <stdio.h>

int main ()
{

	int t, l, c;

	while (scanf("%d", &t) != EOF)
	{
	    int matriz[t][t];

		for (l = 0; l < t; l++)
			for (c = 0; c < t; c++)
			{
				if (l == c)
					matriz[l][c] = 1;
				if (l== t - c - 1)
					matriz[l][c] = 2;
				if (l != c && l != t - c - 1)
					matriz[l][c] = 3;
			}

		for (l = 0; l < t; l++)
		{
			for (c = 0; c < t; c++)
				printf("%d", matriz[l][c]);

			printf("\n");
		}
	}
}