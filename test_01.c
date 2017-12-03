#include <stdio.h>
#include "linked_list_int.h"

int main(){
  linked_list_int l1 = lli_create();
  int i,t,el,r,el1,r1,el2;
  for (i=0; i < 8 ; ++i)
    lli_push_back(l1,i*3+1);
  t = lli_size(l1);
  printf("Tamanho de l1: %d\n",t);
  printf("l1 = { ");
  for (i=0; i < t ; i++)
    printf("%d ", lli_get(l1,i)); 
  printf("}\n");
  printf("Digite um elemento para a busca de indice\n");
  scanf("%d",&el);
  r = lli_find(l1,el);
  printf("O elemento %d se encontra no indice %d\n",el,r);
  printf("Digite um elemento para inserção\n");
  scanf("%d",&el2);
  printf("Digite o indice no qual deseja inserir o elemento\n");
  scanf("%d",&r1);
  lli_insert_at(l1,r1,el2);
  printf("Digite o indice que deseja remover\n");
  scanf("%d",&el1);
  lli_remove_from(l1,el1);
  t = lli_size(l1);
  printf("Tamanho de l1: %d\n",t);
  printf("l1 = { ");
  for (i=0; i < t ; i++)
    printf("%d ", lli_get(l1,i)); 
  printf("}\n");
  for (i=0; i < t ; i++)
    lli_pop_back(l1);
  t = lli_size(l1);
  printf("Tamanho de l1: %d\n",t);
  printf("l1 = { ");
  for (i=0; i < t ; i++)
    printf("%d ", lli_get(l1,i));
  printf("}\n"); 

  lli_destroy(l1); 
  return 0;
}
