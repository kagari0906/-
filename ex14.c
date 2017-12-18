// ex14
#include<stdio.h>
#include<stdlib.h>

typedef struct item {
  char id[20];
  char name[30];
  int price;
} itemData;

int main(){
  int i=0;
  itemData items[100];
  while( scanf("%s %s %d", items[i].id, items[i].name, &(items[i].price)) != EOF){
  i++;
}
  printf("\n");
  for(i = 0; i < 4; i++){
    printf("商品コード : %s \n", items[i].id);
    printf("商品名 : %s \n", items[i].name);
    printf("値段 : %d \n", items[i].price);
    printf("\n");
  }
}
