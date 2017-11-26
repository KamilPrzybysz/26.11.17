#include<stdio.h>

int dec_bin(int a)
{
  int i=0, tab[31];

  while(a!=0)
  {
    tab[i++]=a%2;
    a/=2;
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

  dec_bin(a);
  printf("\n");

  return 0;
}
