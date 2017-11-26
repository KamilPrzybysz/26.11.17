#include<stdio.h>

int main ()
{
  int ref[] = {1,2,3,4,5,6,7,8,9,0};
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 10; indeks++)
  printf("%d\n", ref[indeks]);


  return 0;
}
