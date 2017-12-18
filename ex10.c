#include <stdio.h>
#include <stdlib.h>
int main(){
  printf("整数値を5個入力してください。ひとつ入力するごとに改行を押してください。:\n");
  int i, input[5], *p;
  for (i = 0; i < 5; i++){
    int* p = (int *)malloc(sizeof(int)*5);
    scanf("%d", &input[i]);
    p = &input[i];
      }
  printf("配列の中身は以下の通りです。\n");
  p = &input[0];
  for (i = 0; i < 5; i++){
    printf("値:%d  アドレス:%p\n", *p, p);
    p++;
  }
}
