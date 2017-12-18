//ex16
#include<stdio.h>
#include<stdlib.h>
struct person {
	char name;
	char address;
};

typedef struct company{
  struct person ceo;
  struct person employees[100];
}companyData;

int main(){
  int i;
  companyData c,*point,*com;
  point = (companyData*)malloc(sizeof(companyData) * 6);
  com = point;
  while(scanf("%s %s",(*point).employees, (*point).employees) != EOF){
    point++;
  }
  point = com;
  printf("\n");
  for(i = 0; i < 6; i++){
    printf("%s %s\n",(*point).employees, (*point).employees);
    point++;
  }
  printf("\n");
  
}
