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
  cout << "ZŠ˜^‚É“o˜^‚·‚é–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(I—¹‚·‚é‚É‚Í quit ‚Æ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢):";
  cin >> name;
  if(name == "quit"){break;}
  cout << "ZŠ˜^‚É“o˜^‚·‚éZŠ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F";
  cin >> address;
  //  cout << "name.length() = " << name.length() << "\n";                                                                                                    
  abook.addFriend(name,address);
}

  cout << "ŒŸõ‚·‚éŽ–¼‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ";
  cin >> query;

  cout << "\n–¼‘OƒŠƒXƒg:\n";
  abook.find(query);
}

