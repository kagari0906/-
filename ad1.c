//Ad1
#include <stdio.h>
#include <math.h>

int main(){
  int i = 1;
  double fact = 1;
  double arctan1 = 1;
  while(i < 10){
    fact = fact * i;
    arctan1 += 1.0 / fact;
    i++;
  }
  printf("%f\n",arctan1);
}
