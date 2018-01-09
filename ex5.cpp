/* ex5.cpp */
#include <iostream>
using namespace std;

class person{
public:
  string name;
};

class ticket{
public:
  int id;
  person* user;
  ticket(){user = new person;}
};

class transTicket : public ticket {
public:
  string origin;
  string destination;
  transTicket(): ticket(){};
};

class trainTicket : public transTicket {
public:
  trainTicket(): transTicket(){};
};

int main()
{
  int ticketNum;
  cout << "�`�P�b�g�������w�����܂����H ";
  cin >> ticketNum;
  cout << "\n";
  trainTicket* tickets = new trainTicket [ticketNum];
  for(int i = 0; i < ticketNum; i++){
    tickets[i].id = i+1;
    cout << i+1 << "�l�ڂ̗��p�҂̖��O����͂��Ă�������: ";
    cin >> tickets[i].user->name;
    cout << "  �o���n����͂��Ă�������: ";
    cin >> tickets[i].origin;
    cout << "  �����n����͂��Ă�������: ";
    cin >> tickets[i].destination;
  }
  cout << "\n�`�P�b�g���p�҈ꗗ�F\n";
  for(int i = 0; i < ticketNum; i++){
    trainTicket t = tickets[i];
    cout << " " << t.id << " : " << t.user->name << " : " << t.origin << " => " << t.destination << "\n";
  }
  cout << "\n";
}

