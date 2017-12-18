// ad5
#include <stdio.h>
#include <stdlib.h>

int myprintf(char* c){
  return putc(c,stdout);

}

int main(){
  int i;
  char* p = (char *)malloc(sizeof(char)*100);
  char* str = (char *)malloc(sizeof(char)*100);
  printf("文字列を入力してください。:");
  scanf("%s", str);
  p = str;
  
  while(*str != '\0'){
    myprintf(*str);
    str++;
  }

  printf("\n");
   
}
