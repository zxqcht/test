#include <stdio.h>
int main()
{  int x,y,i,j;
  printf("Please input the height and the width of the tree:");
   scanf("%d%d",&x,&y);
   for(i=1;i<=x;i++)
   { for(j=1;j<25-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
     printf("*");
     printf("\n");
   }
    for(i=1;i<=y;i++)
    { for(j=1;j<25-1;j++)
    printf(" ");
    printf("*\n");
	}
	return 0;
}
