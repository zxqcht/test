#include <stdio.h>
int main()
{
   int i,j,sum;//��sum�ڴ˴�����ֵΪ0ʱ�޷������� 
   for(i=2;i<=10000;i++)
   {
   sum=0;//��sumû�б���ֵʱ��Ҳ�޷������� 
   for(j=1;j<i;j++)
   if(i%j==0)
   sum=sum+j;
   if(sum==i)
   printf("%d ",i);
   }
} //��ֵ������ ÿ��i++������sum����Ϊ0�� 



