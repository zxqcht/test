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
//**********可以把n设置为全局变量，就在最上面设置即可！！！*********************** 
//编写程序，将一个数列实现循环右移一位。
//例如：  输入数列的长度：6
//输入原始数列：1  2  3  4  5  6
//循环右移一位后变为：6  1  2  3  4  5
//数列输入、数列输出、数列右移分别用三个子函数实现。（数列的个数由用户从键盘输入）
 

