// ex 1-6
#include <stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
      return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int input, factor;
  printf("Type in a number: ");
  scanf("%d", &input);
  if(input == 1){ printf("1"); return;}
  factor = getSmallestFactor(input);
    printf("%d ",factor);
    input = input / factor;
    while(!(factor == 0)){
    factor = getSmallestFactor(input);
    if (factor == 0){
      printf("* %d\n", input);
      factor == 0;
    }else{
    printf("* %d ", factor);
    input = input / factor;

    }
}
  
}
