#include <stdio.h>
#include <string.h>

int main(){
  char pin[3];
  char yoy[] = "ABC";
  char valid[3];
  strcpy(valid, yoy);

  printf("Enter Password : ");
  
  pin[0] = getchar();
  pin[1] = getchar();
  pin[2] = getchar();

  if(strcmp(valid, pin)==0){
    printf("OK");
  }
  else {
    printf("HMM");  
  }

  return 0;
}
