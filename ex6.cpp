/* ex6.cpp */
#include <iostream>
#include <stdio.h>
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

class hm{
public:
  int hour;
  int minute;
  hm(){};
};

class trainTicket : public transTicket {
public:
  hm departureTime;
  hm arrivalTime;
  trainTicket(): transTicket(){};
};


int main()
{
  int ticketNum;
  int hour;
  int minute;
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
    printf("  �o���������u:�v�ŋ�؂��ē��͂��Ă��������F ");
    scanf("%d:%d", &hour, &minute);
    tickets[i].departureTime.hour=hour;
    tickets[i].departureTime.minute = minute;
    cout << "  �����n����͂��Ă�������: ";
    cin >> tickets[i].destination;
    printf("  �o���������u:�v�ŋ�؂��ē��͂��Ă��������F ");
    scanf("%d:%d", &hour, &minute);
    tickets[i].arrivalTime.hour=hour;
    tickets[i].arrivalTime.minute = minute;
  }
  cout << "\n�`�P�b�g���p�҈ꗗ�F\n";
  for(int i = 0; i < ticketNum; i++){
    trainTicket t = tickets[i];
    cout << " " << t.id << " : " << t.user->name << " : " << t.origin << " / " \
<< t.departureTime.hour << ":" << t.departureTime.minute << " => " << t.destina\
tion << " / " << t.arrivalTime.hour << ":" << t.arrivalTime.minute << "\n";
  }
  cout << "\n";
}
