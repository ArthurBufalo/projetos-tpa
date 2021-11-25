#include <stdio.h>
#include <locale.h>
#define WIDTH 5
#define HEIGHT 5

int main() {
  setlocale(LC_ALL, "portuguese");
  int matrix[HEIGHT][WIDTH];
  int X;
  
  printf("X = ");
  scanf("%d", &X);
  printf("----------------------\n");

  for(int i = 0; i < HEIGHT; i++) {
    for(int o = 0; o < WIDTH; o++) {
      printf("%d %d: ", i, o);
      scanf("%d", &matrix[i][o]);
    }
  }

  printf("Sua matrix se parece com o seguinte:\n");
  for(int i = 0; i < HEIGHT; i++) {
    for(int o = 0; o < WIDTH; o++) {
      printf("%d ", matrix[i][o]);
    }
    printf("\n");
  }
  printf("---------------------\n");

  for (int i = 0; i < HEIGHT; i++) {
    for (int o = 0; o < WIDTH; o++) {
      if(matrix[i][o] == X) {
        printf("X (%d) encontrado! Na posição %d:%d\n", X, i, o);
        return 0;
      }
      else continue;
    }
  }
  printf("X (%d) não encontrado\n", X);
  return 1;
}
