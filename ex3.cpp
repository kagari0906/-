/* ex3 */
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
  void find(string query);
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

void addressbook::find(string q){
  for(int i = 0; i < numberOfFriends; i++){
    if(friends[i].name == q){
      cout << friends[i].name << " : ";
      cout << friends[i].address << "\n";
      break;
    }
    if(i == numberOfFriends-1){
      cout << "return no_one\n";
      break;
    }
  }
}

int main()
{
  addressbook abook;
  string name;
  string address;
  string query;

  while(1){
  cout << "�Z���^�ɓo�^���閼�O����͂��Ă�������(�I������ɂ� quit �Ɠ��͂��Ă�������):";
  cin >> name;
  if(name == "quit"){break;}
  cout << "�Z���^�ɓo�^����Z������͂��Ă��������F";
  cin >> address;
  //  cout << "name.length() = " << name.length() << "\n";                                                                                                    
  abook.addFriend(name,address);
}

  cout << "�������鎁������͂��Ă�������: ";
  cin >> query;

  cout << "\n���O���X�g:\n";
  abook.find(query);
}

