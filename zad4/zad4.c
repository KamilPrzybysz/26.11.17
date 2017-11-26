#include<stdio.h>

int dec_bin(int a, int b)
{
  int i=0, tab[31];

  while(a!=0)
  {
    tab[i++]=a%b;
    a/=b;
  }
  int j;
  for(j=i-1; j>=0; j--)
  {
  printf("%d", tab[j]);
  }
}

int main()
{
  int a;
  printf("Podaj liczbę większą od 0: ");
  scanf("%d", &a);
  while(a<=0)
  {
    printf("Podaj liczbę większą od 0: ");
    scanf("%d", &a);
  }

  int b;
  printf("Na jaki system chcesz zamienić liczbę (od 0 do 9 włącznie): ");
  scanf("%d", &b);
  while(b<=0)
  {
    printf("Na jaki system chcesz zamienić liczbę (od 0 do 9 włącznie): ");
    scanf("%d", &b);
  }

  dec_bin(a, b);
  printf("\n");

  return 0;
}
