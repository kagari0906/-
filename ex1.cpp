#include <iostream>
using namespace std;

class person{
public:
  string name;
  string email;
};

int main()
{
  person friends[3];

  for(int i=0; i<3; i++){
    cout << i + 1 << "�Ԗڂ̖��O�́H";
    cin >> friends[i].name;
    cout <<  "���[���A�h���X�́H";
    cin >> friends[i].email;
  }

  cout << "\n���O���X�g:\n";
  for(int i=0; i<3; i++){
    cout << friends[i].name << ":" << friends[i].email << "\n";
  }
}

