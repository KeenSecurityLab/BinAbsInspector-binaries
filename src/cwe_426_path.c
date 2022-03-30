#define _GNU_SOURCE

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

void vulnerable_sub1(){
  popen("ls -la", "wb");
}

void vulnerable_sub2(){
  char foo[128] = {0};
  strcpy(foo, "ls -la");
  popen(foo, "wb");
}

const char *arrgh = "ls -la";

void vulnerable_sub3(){
  system(arrgh);
}

void invulnerable_sub(){
  system("/usr/bin/ls -la");
}

int main(int argc, char **argv, char **envp)
{
  vulnerable_sub1();
  invulnerable_sub();
  vulnerable_sub2();
  invulnerable_sub();
  vulnerable_sub3();
}
