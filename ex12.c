#include <stdio.h>
#include <stdlib.h>
int main(){
  int i;
  printf("文字列を入力してください。:");
  char* p = (char *)malloc(sizeof(char)*100);
  char* str = (char *)malloc(sizeof(char)*100);    
  scanf("%s", str);
  p = str;

  
  while(*p != '\0'){
    printf("%c", *p);
    p++;
  }

    printf("\n");
    
  while(p >= str){
    printf("%c", *p);
    p--;
  }

    printf("\n");
}
