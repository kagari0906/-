/* ex2 */
#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person friends[100];
  int numberOfFriends;
public:
  addressbook();
  void listFriends();
  void addFriend(string name,string address);
};

// constructor                                                                                                                                                
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n,string a){
  friends[numberOfFriends].name = n;
  friends[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << " : ";
    cout << friends[i].address << "\n";
  }
}

int main()
{
  addressbook abook;
  string name;
  string address;

  while(1){
  cout << "�Z���^�ɓo�^���閼�O����͂��Ă�������(�I������ɂ� quit �Ɠ��͂��Ă�������):";
  cin >> name;
  if(name == "quit"){break;}
  cout << "�Z���^�ɓo�^����Z������͂��Ă��������F";
  cin >> address;
  //  cout << "name.length() = " << name.length() << "\n";                                                                                                    
  abook.addFriend(name,address);
}

  cout << "\n���O���X�g:\n";
  abook.listFriends();
}
