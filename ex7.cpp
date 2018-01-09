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

  cout << "–¼‘O‚Í?\n";
  cin >> namae;
  p.setName(namae);
  cout << "\n–¼‘O \n";
  cout << p.getName() << "\n";

}

