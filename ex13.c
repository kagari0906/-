#include <stdio.h>
#include <stdlib.h>
int main(){
  int x, y;
  printf("２つの整数値を入力してください:");
  scanf("%d %d", &x, &y);
    printf("変数xの値は %d, 変数yの値は %d です.\n", x, y);
    void swap(int *x, int *y){
      int work;
      work = *x;
      *x = *y;
      *y = work;
    }
    swap(&x,&y);
    printf("swap()を呼び出した後の変数xの値は %d, 変数yの値は %d です.\n", x, y);  
}
