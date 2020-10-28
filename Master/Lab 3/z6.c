#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define n 3

int main(int argc, char const *argv[]) {

  int *a;  // указатель на массив
  int i, j, m = 3;
  // Выделение памяти
  a = (int*)malloc(n*m * sizeof(int));
  // Ввод элементов массива
  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", (a + i*m + j));
    }
  }
  // Вывод элементов массива
  i = 0;
  j = 0;
  int k = 0;
  int maxNegative = *(a + i*m + j);
  int minPositive = *(a + i*m + j);
  int posi, posj;
  int index = -1;
  int indexj = -1;

  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      if (*(a + i*m + j) > 0)
          k++;
      if (*(a + i*m + j) > 0 && (k==1 || *(a + i*m + j) < minPositive)){
          minPositive = *(a + i*m + j);
      }

      if (*(a + i*m + j) < 0 && index == -1 && indexj == -1){
        index = i;
        indexj = j;
        maxNegative = *(a + index*m + indexj);
      }
      else{
        if (*(a + i*m + j) < 0 && *(a + i*m + j) > *(a + index*m + indexj)){
            index = i;
            indexj = j;
            maxNegative = *(a + index*m + indexj);
        }
      }
    }
    printf("\n");
  }

printf("minPositive -> %d\n", minPositive);
printf("maxNegative -> %d\n", maxNegative);

*(a + index*m + indexj) = minPositive;

  for (i = 0; i<n; i++)  // цикл по строкам
  {
    for (j = 0; j<m; j++)  // цикл по столбцам
    {
      printf("%5d ", *(a + i*m + j)); // 5 знакомест под элемент массива
    }
    printf("\n");
  }

  free(a);
  return 0;
}
