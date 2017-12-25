#include <stdio.h>
#include "linked_list_int.h"


int main(){
  linked_list_int a1 = lli_create();
  int i,t;
  for (i=0; i < 55; ++i) {
    lli_push_back(a1,i*3+1);
    printf("%d ocupados \n",(int)(100*lli_percent_occuped(a1)));
  }
  t = lli_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(a1,i));
  printf("}\n");
  t = lli_insert_at(a1, 55, 31);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", lli_get(a1, i));
  printf("}\n");
  printf("capacidade de a1: %d\n",lli_capacity(a1));
  t = lli_insert_at(a1, 4, 32);
  printf("tamanho de a1: %d\n",t);
  printf("capacidade de a1: %d\n",lli_capacity(a1));
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", lli_get(a1, i));
  printf("}\n");
  t = lli_remove_from(a1, 51);
  printf("tamanho de a1: %d\n",t);
  printf("capacidade de a1: %d\n",lli_capacity(a1));
  printf("%f ocupados \n", 100*lli_percent_occuped(a1));
  printf("a1 = { ");
  for(i = 0; i < t; ++i)
    printf("%d ", lli_get(a1, i));
  printf("}\n");
  for (i=0; i < 51; ++i)
    lli_pop_back(a1);
  t = lli_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(a1,i));
  printf("}\n");
  lli_destroy(a1);
  return 0;
}
