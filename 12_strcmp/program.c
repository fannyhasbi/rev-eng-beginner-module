#include <stdio.h>
#include <string.h>

int main(){
  char valid[] = "HAHA";
  char input[] = "HEHE";

  if(strcmp(input, valid) == 0){
    printf("Benar");
  }
  else {
    printf("Salah");
  }

  return 3;
}
