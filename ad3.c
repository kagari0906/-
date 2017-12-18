// ad3
#include <stdio.h>

double mysin(double a){
  int i=1;
  double sin=0;
  double x=1;
  double y=1.0;
  double bunshi=0;
  double bunbo=1.0;
  double bunsu=0;
  while(i<10){
    x = x * a;
    bunshi = x * y;
    bunbo = bunbo * i; 
    if(i % 2 == 0){
    }else{
      bunsu =  bunshi / bunbo;
      sin = sin + bunsu;
      y = y * -1.0;
    }
    i++;
  }
  return sin;
}

double mycos(double a){
  int i=0;
  double cos=1.0;
  double x=1;
  double y=-1.0;
  double bunshi=1;
  double bunbo=1.0;
  double bunsu=0;
  while(i<10){
    if(i == 0){
    }else{      
      x = x * a;
      bunshi = x * y;
      bunbo = bunbo * i; 
      if(i % 2 == 0){
        bunsu =  bunshi / bunbo;
        cos = cos + bunsu;
        y = y * -1.0;
      }else{

      }
    }
    i++;
  }
  return cos;
}


int main(){
  double x = 3.141592653589/6;
  double sin = mysin(x);
  double cos = mycos(x);
  printf("sin(%f) = %f\n", x, sin);
  printf("cos(%f) = %f\n",x, cos);
}
