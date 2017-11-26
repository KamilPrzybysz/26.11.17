
#include <stdio.h>
#define wielkosc 10

void print_table(int tab[], int n)
{
  int a;
  int i=0;
  for (i=0;i<10;i++)
  printf("%d\n",*(tab+i));
}

int main()
{
  int tab[wielkosc],a,b;
  for(a=0;a<10;a++)
  {
    printf("Podaj %d element tablicy:\n",a+1);
    scanf("%d",&b);
    tab[a]=b;
  }

  printf("\n\n");
  print_table(tab,10);

  return 0;
}
