#include<stdio.h>
int main(){
  char ch;
  printf("Enter Character :");
  scanf("%c",&ch);
 
  
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
   {
      printf("Character is alphabet");
    }
  else if(ch>='0' && ch<='9')
   {
      printf("Character is digit");
    }
  else
   {
      printf("Character is special symbol");
    }
  return 0;
}
