#include<stdio.h>
int main()
{
  int n;
  printf("Enter value of term:");
  scanf("%d",&n);
  
  int a=0,b=1;
  for(int i=1;i<=n;i++){
    printf("%d\t",a);
    int c=a+b;
    a=b;
    b=c;
  }
  
  return 0;
}
