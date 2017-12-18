#include <stdio.h>
#include <stdlib.h>
int main(){
  int i;
  printf("文字を5つ入力してください。:\n");
  char* p = (char *)malloc(sizeof(char)*5);
  char* str = (char *)malloc(sizeof(char) * 3);    
  for (i = 0; i < 5; i++){
    scanf("%s", str);
    *p = *str;
    p++;
      }

  p = p-5;
  
  printf("配列の中身は以下の通りです。\n");
  for (i = 0; i < 5; i++){
    printf("値:%c  アドレス:%p\n", *p, p);
    p++;
  }
}
