#include <stdio.h>


int main()
{

	int n,m;
	printf("Podaj liczbę wierszy macierzy: \n");
	scanf("%d",&n);
	while(n<=0)
        {
		printf("Liczba wierszy musi być większa od 0: \n");
        	scanf("%d",&n);
	}

	printf("Podaj liczbę kolumn macierzy: \n");
	scanf("%d",&m);
	while(m<=0)
	{
	        printf("Liczba kolumn musi być większa od 0: \n");
	        scanf("%d",&m);
	}

	int tab[m][n];

	int a,b,c;

	printf("Wpisz liczby do macierzy: \n");
	int i;
	for(i=0; i<n; i++)
	{
		for(a=0; a<m; a++)
		scanf("%d",&tab[i][a]);
	}

	printf("\n\n\nMacierz: ");
	for(b=0; b<n; b++)
	{
		printf("\n");
		for(c=0; c<m; c++)
		{
			printf("%d ",tab[b][c]);
		}
	}
	return 0;
}
