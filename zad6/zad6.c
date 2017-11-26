#include<stdio.h>
#include<stdlib.h>

void swap_integers(int *a, int *b)
{
  printf("Podaj liczbę a: ");
  scanf("%d", a);
  printf("Podaj liczbę b: ");
  scanf("%d", b);

  int temp;
  temp= *b;
  *b= *a;
  *a= temp;
}


int main()
{
  int a;
  int b;

  swap_integers(&a, &b);
  printf("Liczba a to %d, a liczba b to %d.\n", a, b);

  return 0;
}
