#include<stdio.h>
#include<stdlib.h>
#define wielkosc 10

int min(int tab[], int *a)
{
	int minimum= tab[0];
	int i;
	for(i=1; i<10; i++)
	{
		if(tab[i]<minimum)
		{
			minimum=tab[i];
		}
	}
	printf("Najmniejszy element tablicy to: %d \n", minimum);
	*a=minimum;
}

int max(int tab[], int *b)
{
        int maximum= tab[0];
        int i;
        for(i=1; i<10; i++)
        {
                if(tab[i]>maximum)
                {
			maximum=tab[i];
		}
	}
        printf("Największy element tablicy to: %d \n", maximum);
	*b=maximum;
}

int roznica(int *a, int *b)
{
	int wynik= *b-*a;
	printf("%d-%d=%d\n", *b, *a, wynik);
}

int main()
{
	int tab[wielkosc];
	int i;
	for(i=0; i<10; i++)
	{	printf("Podaj wartość nr %d, większą lub równą 0 do tablicy: ", i+1);
		scanf("%d", &tab[i]);
		while(tab[i]<0)
		{
			printf("Podaj wartość nr %d, większą lub równą 0 do tablicy: ", i+1);
         	 	scanf("%d", &tab[i]);
		}
	}

	int liczba, liczba2;
	min(tab, &liczba);
	max(tab, &liczba2);
	roznica(&liczba, &liczba2);

	return 0;
}
