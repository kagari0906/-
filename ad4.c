// ad4
#include <stdio.h>
#include <math.h>

int main(){
  int i = 1;
  double arctan1 = 0;
  double arctan2 = 0;
  while(i < 1000){
    arctan1 = i * i;
    arctan2 += 1.0 / arctan1;
    i++;
  }
  arctan2 = arctan2 * 6.0;
  printf("%f\n",sqrt(arctan2));
}
