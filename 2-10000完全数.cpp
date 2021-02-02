#include <stdio.h>
int main()
{
   int i,j,sum;//当sum在此处被赋值为0时无法输出结果 
   for(i=2;i<=10000;i++)
   {
   sum=0;//当sum没有被赋值时，也无法输出结果 
   for(j=1;j<i;j++)
   if(i%j==0)
   sum=sum+j;
   if(sum==i)
   printf("%d ",i);
   }
} //赋值在里面 每次i++都能让sum重新为0。 



