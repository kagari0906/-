//ad2
#include <stdio.h>

int power(int a, int b){
  int i = 0;
  int pi = a;
  while(i <= b){
    pi = pi * a;
    i++;
  }
  return pi;
}

int main(){
  int i = 0;
  double arctan1 = 0;
  while(i < 10000){
    arctan1 += (double)power(-1,i) / (i*2 + 1);
    if(i % 100 == 0){
      printf("pi = %f\n", arctan1 * 4);
    }
    i++;
  }
}
