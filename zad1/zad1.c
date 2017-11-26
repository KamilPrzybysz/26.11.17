#include <stdio.h>

int silnia()
{

  int n;
  printf("Podaj liczbę n:");
  scanf("%d", &n);
  if(n<=0)
  {
    printf("Podaj liczbę większą od 0\n");
    return 1;
  }
  else
  {
    int a=1;
    long int sil=1;
    while(n>=a)
    {
      sil*=a;
      a++;
    }
   printf("Silnia z %d to %ld\n", n, sil);
}
}

int dwa()
{
    int q=1;
    int i;
    for(i=1; i<=12; i++)
    {
    int a=1;
    long int sil=1;
    while(q>=a)
    {
      sil*=a;
      a++;
    }
 printf("Silnia z %d to %ld\n", q, sil);
  q++;
}

}

int main()
{
silnia();
printf("\n\n");
dwa();

return 0;
}
