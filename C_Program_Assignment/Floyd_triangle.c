#include<stdio.h>
int main(){
  int n;
  printf("Enter value of n: ");
  scanf("%d",&n);
  int c=1;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          printf("%d ",c++);
      }
      printf("\n");
  }
  return 0;
}
