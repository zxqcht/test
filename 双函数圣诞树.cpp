#include <stdio.h>
void printStar(int m)
{  int i;
   for(i=0;i<m;i++)
    printf("*");}
void printSpace(int n)
{   int i;
   for(i=0;i<n;i++)
    printf(" "); }   
int main()
{  int i,j,m=2,n,x,y;
   scanf("%d",&x);
   printSpace(x);
   printStar(1);
   printf("\n");
   for(i=x-1,j=3;i>0;j=2*m-1,i--)
   {m++;
    printSpace(i);
    printStar(j);
	printf("\n");}
    for(y=1;y<=x;y++)
    {printSpace(x);
	 printStar(1);
     printf("\n");}
}
