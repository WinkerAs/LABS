#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  char **str; // массив указателей
  int n; // количество строк
  int m; // количество символов в строке
  // Выделить память под массив строк
  printf("\n Input count str ");
  scanf("%d",&n);
  str=(char **)calloc(n,sizeof(char *)); // выделить память под массив указателей
  printf("\n Input char in string ");
  scanf("%d",&m);
  for(int i=0; i<n; i++)
   str[i]=(char *)calloc(m+1,sizeof(char));//выделить память под строку
  // инициализировать массив строк
  printf("\n Input %3d string len %3d символов",n,m);
  for(int i=0; i<n; i++)
   gets(str[i]);

  return 0;
}
