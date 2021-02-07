#include <stdio.h>
void fuc()
{ char c;
  scanf("%c",&c);
  if(c!='\n')
  fuc();
  printf("%c",c);  
}

int main()
{ 
  fuc();
}


