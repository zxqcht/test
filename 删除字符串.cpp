#include <stdio.h>
int main()
{
	char z[100],c;
	int i,j,l;
	printf("�������ַ���:");
	scanf("%s",&z);
	printf("������Ҫɾ�����ַ���:");
	scanf("%s",&c);
	for(l=0;z[l]!='\0';l++)
	for(i=l;i>=0;i--)
	{
		if(z[i]==c)
		{
			for(j=i;j<l+1;j++)
			z[j]=z[j+1];
		}
	}
	printf("%s",z);
}


