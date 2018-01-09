/* swap.cpp */
#include <iostream>
using namespace	std;

void func(int &x, int &y){
  int kari;
  kari = x;
  x = y;
  y = kari;
}

int main(){
  int a	= 10;
  int b	= 5;
  func(a,b);
  cout << a << "\n";
  cout << b << "\n";
}


