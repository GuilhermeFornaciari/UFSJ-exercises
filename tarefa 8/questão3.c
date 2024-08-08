#include<stdio.h>
#include<stdlib.h>
#include "complex.h"

struct n_complexo {
  complex value;
};
struct n_complexo soma(struct n_complexo n1, struct n_complexo n2){
  struct  n_complexo valorResultante = {
    n1.value + n2.value
  };
  return valorResultante;
}
int main(){
  return 0;
}