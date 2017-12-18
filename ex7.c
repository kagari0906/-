// sample 1-7
#include <stdio.h>
int main(){
  int input;
  printf("数字を入力してください :");
  scanf("%d", &input);
  printf("%d \n", input);
  int res = fact(input);
  printf("%d の階乗は %d \n", input, res);
}

int fact(int a){
  if(a == 0){
    return 1;
  }else if(a > 0){
    return a*fact(a-1);
  }
}
