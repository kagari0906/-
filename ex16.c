//ex16
#include<stdio.h>
#include<stdlib.h>
typedef struct person {
	char name[100];
	char address[100];
}personData;

typedef struct company{
  personData ceo;
  personData employees[100];
}companyData;

int main(){
  int i;
  companyData c;

  scanf("%s",c.ceo.name);
  printf("経営者名 %s\n",c.ceo.name);
  scanf("%s",c.ceo.address);
  printf("経営者の住所 %s\n",c.ceo.address);

  printf("\n以下従業員の名前と住所一覧\n");
  
  while(scanf("%s %s",c.employees[i].name,c.employees[i].address) != EOF){
    printf("%s %s\n",c.employees[i].name,c.employees[i].address);
    i++;
  }
}
