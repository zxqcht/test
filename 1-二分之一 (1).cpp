#include <stdio.h>
int main()
{ int z,x;
  double q,c;
  z=1;
  for(x=1;x<=100;x++)
  { q=z*(1.0/x);
    c=c+q;
    z=-1*z;
  }
  printf("%f",c);
  return 0;
}

