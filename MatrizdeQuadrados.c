#include <stdio.h>
#include <math.h>

void main ()
{

	unsigned short caco, caso = 4, value;
	unsigned short l, c, qtsDigitosAtual, k;
	long double maior;

	scanf("%hu", &caco);
	while (caco--)
	{

		scanf("%hu", &value);

		long double matriz[value][value];

		for (l = 0; l < value; l++)
			for (c = 0; c < value; c++)
			{
				scanf("%Lf", &matriz[l][c]);
				matriz[l][c] *= matriz[l][c];
			}

		printf("Quadrado da matriz #%hu:\n", caso);
		for (l = 0; l < value; l++)
		{	
			
			for (c = 0; c < value; c++)
			{
				maior = 0;

				for (k = 0; k < value; k++)
					if (matriz[k][c] > maior)
						maior = matriz[k][c];



				qtsDigitosAtual = ((floor(log10(maior))) + 1);
				

				if (c != value && c != 0)
					printf(" ");

				printf("%*.Lf", qtsDigitosAtual, matriz[l][c]);
			}


			printf("\n");

		}

		caso++;
		if (caco != 0)
			printf("\n");
	}
    return 0;
}