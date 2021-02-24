#include <stdio.h>
void reverse(int n)
{ int i,z=0,x,q;
  scanf("%d",&n);
  while(n!=0){
  	z=z*10+n%10;
  	n/=10;
  }
  printf("%d",z); 
}
  
int main() 
{ int x;
  printf("please input a number:");
  reverse(x);
}
