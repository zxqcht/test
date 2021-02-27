#include <stdio.h>
int main()
{  int i,j,q[i];
   int z[3]={3,4,5};
   int x[4]={1,2,7,9};
   for(i=0;i<3;i++)
    q[i]=z[i];
   for(j=0;j<4;j++,i++)
    q[i]=x[j];
	for(i=0;i<7;i++)   
     printf("%d ",q[i]);
   
}
