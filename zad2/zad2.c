#include<stdio.h>

int dosk(int a)
{
  int suma=0;
  int i;
  for(i=1; i<a; i++)
  {
  if(a%i==0)
  {
    suma=suma+i;
  }
  }
  if(suma==a)
  {
  printf("Liczba %d jest liczbą doskonała.\n", a);
  }
  else
  printf("Liczba %d nie jest liczbą doskonała.\n", a);
}

int don(int n)
{
  int i2;
  for(i2=1; i2<=n; i2++)
  {
    dosk(i2);
  }


}

int main()
{
  printf("Dla podanej liczby:\n\n");

  int a;
  printf("Podaj liczbę: ");
  scanf("%d", &a);
  while(a<=0)
  {
  printf("Podaj liczbę większą od 0: ");
  scanf("%d", &a);
  }

  dosk(a);
  printf("\n\n\n");

  printf("Dla liczby do n:\n\n");

  int n;
  printf("Podaj liczbę: ");
  scanf("%d", &n);
  while(n<=0)
  {
  printf("Podaj liczbę większą od 0: ");
  scanf("%d", &n);
  }

  don(n);
  printf("\n\n\n");

  return 0;
}
