#include <stdio.h>
int main()
{ int sum=0;
  int i;
  for(i=1;i<=10;i++)
  { printf("%d\n",i);
    if(i==3)
    goto printf; 
  }
  printf:("½áÊøforÑ­»·ÁË...."); 
}
