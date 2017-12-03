#include <stdio.h>


int main()
{

	int n,m;
	printf("Podaj liczbę wierszy macierzy: \n");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("Liczba wierszy macierzy musi być większa od 0: \n");
		scanf("%d",&n);
	}

	printf("Podaj liczbę kolumn macierzy: \n");
	scanf("%d",&m);
	while(m<=0)
	{
		printf("Liczba kolumn macierzy musi być większa od 0: \n");
		scanf("%d",&m);
	}
	int macierz13[n][m];
	int macierz14[m][n];

	int i, a, b, c, X, Y;

	printf("Wprowadz liczby: \n");

	for(i=0; i<n; i++)
	{
		for(a=0; a<m; a++)
		scanf("%d",&macierz13[i][a]);
	}
	for(X=0;X<n;X++)
	{
		for(Y=0;Y<m;Y++)
		macierz14[Y][X]=macierz13[X][Y];
	}

	printf("\n\n\nMacierz z zad 13: ");
	for(b=0; b<n; b++)
	{
		printf("\n");
		for(c=0; c<m; c++)
		{
			printf("%d ",macierz13[b][c]);
		}
	}

	printf("\n\n\n Odwrócona macierz: ");
	for(b=0; b<m; b++)
	{
		printf("\n");
		for(c=0; c<n; c++)
		printf("%d ",macierz14[b][c]);
	}

	return 0;
}
