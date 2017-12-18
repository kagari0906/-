//ex17
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
  char name[50];
  char address[80];
  struct node* next;
}node;

int main(){
  node *a, *head;
  head = (node*)malloc(sizeof(node));
  a = head;
  
  while(scanf("%s %s", a->name, a->address)!=EOF){
    node *x;
    x = (node*)malloc(sizeof(node));
    a->next = x;
    a = a->next;
  }
  a->next = NULL;
  
  a = head;
  
  while(a->next->next != NULL){
    printf("name: %s\n", a->name);
    a = a->next;
  }
    
}
