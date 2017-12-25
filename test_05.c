#include <stdio.h>
#include "linked_list_int.h"


int main(){
  linked_list_int a1 = lli_create();
  int i,t,c;
  for (i=0; i < 1000000 ; ++i) {
    lli_push_back(a1,i*3+1);
    /*printf("%f ocupados\n", lli_percent_occuped(a1));*/
  }
  t = lli_size(a1);
	c = lli_capacity(a1);
  printf("Tamanho de a1: %d %d\n",t,c);
  for (i=0; i < t ; ++i) {
    lli_pop_back(a1);
		/*printf("%f ocupados\n", lli_percent_occuped(a1));*/
	}
  t = lli_size(a1);
	c = lli_capacity(a1);
  printf("Tamanho de a1: %d %d\n", t, c);
  lli_destroy(a1);
  return 0;
}
