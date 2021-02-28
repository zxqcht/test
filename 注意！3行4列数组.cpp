#include <stdio.h>
int main()
{  int i,z,x,q,j,a[3][4];//一开始我定义a[][]是a[i][j],此时的输出结果是有问题的！！！// 
   printf("please input 12 integers:");	
    for(i=0;i<3;i++)
     {
	  for(j=0;j<4;j++)
	 scanf("%d",&a[i][j]);
     }
      for(i=0;i<3;i++)
      {
	   for(j=0;j<4;j++)
	     printf("%d ",a[i][j]);
         printf("\n");
	  }
	  z=a[0][0];x=a[0][0];
	  for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	   if(a[i][j]>z)
	   {
	    z=a[i][j];
       }else x=a[i][j];
       printf("%d %d",z,x);
	  return 0;
}
