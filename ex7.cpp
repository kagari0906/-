/* ex7.cpp */
#include <iostream>
using namespace std;

class person{
protected:
  string name;
public:
  void setName(string n){name = n;}
  string getName(){return name;}
};


int main(){
  person p;
  string namae;

  cout << "名前は?\n";
  cin >> namae;
  p.setName(namae);
  cout << "\n名前 \n";
  cout << p.getName() << "\n";

}

