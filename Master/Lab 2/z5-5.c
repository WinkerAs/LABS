#include <stdio.h>
#define  n 3
#define  m 3
int main(int argc, char const *argv[]) {

  int a[n][m];
  int buf;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("a[%d][%d] = ", i, j);
      scanf("%d\n", &a[i][j]);
    }
  }

  printf("\n\n");
      for(int k = 0; k < n; k++){
          for(int s = 0; s < m; s++){
              for(int i = 0; i < n; i++){
                  for(int j = 0; j < m; j++){
                      if(a[k][s] > a[i][j]){
                          buf = a[k][s];
                          a[k][s] = a[i][j];
                          a[i][j] = buf;
                      }
                  }
              }
          }
      }

      for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
              printf("%d ", a[i][j]);
          }
          printf("\n");
      }


  return 0;
}
