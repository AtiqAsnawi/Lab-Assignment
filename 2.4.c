#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
  pid_t wpid;
  int status = 0;

  for(int i = 0; i < 4; i++){
    pid_t pid = fork();

    if(pid == 0){
      char name[30];


