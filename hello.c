/*
 * hello.c
 */
#include <stdio.h>
#include <stdlib.h>
 
#ifndef ARCH
#define ARCH "Undefined"
#endif  

int main() {
  printf("Hola, mi arquitectura es %s\n", ARCH);
  exit(0);
}