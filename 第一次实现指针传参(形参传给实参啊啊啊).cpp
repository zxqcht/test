#include <stdio.h>
int scan(int (*p1)[100],int *p2)
{
	int i,b,c;
	printf("please input an integer:");
	scanf("%d",&(*p2));
	printf("please input some numbers:");
	for(i=0;i<*p2;i++)
	scanf("%d",&((*p1)[i]));
 } 
int print(int (*p1)[100],int *p2)
{
	int i;
	for(i=0;i<(*p2);i++)
	printf("%d ",((*p1)[i]));
}
int main()
{
	int i,a[100],z,x,q;
	scan(&a,&z);
	for(i=0;i<=z/2-1;i++)
	{ 
	  x=a[i];
	  a[i]=a[z-1-i];
	  a[z-1-i]=x;
	}
	for(i=0;i<=(z-1)/2-1;i++)
	{ 
	  q=a[i+1];
	  a[i+1]=a[z-1-i];
	  a[z-1-i]=q;
	}
	print(&a,&z);
	
}
//**********���԰�n����Ϊȫ�ֱ������������������ü��ɣ�����*********************** 
//��д���򣬽�һ������ʵ��ѭ������һλ��
//���磺  �������еĳ��ȣ�6
//����ԭʼ���У�1  2  3  4  5  6
//ѭ������һλ���Ϊ��6  1  2  3  4  5
//�������롢����������������Ʒֱ��������Ӻ���ʵ�֡������еĸ������û��Ӽ������룩
 

