#include <stdio.h>  //Ҫ�����������·���û������߼�˼·������������ 
  int prime(int n) 
   { int i,z=0;
     if(n<2)
      return -1;
     for(i=2;i<n;i++)
    { 
	  if(n%i==0)
	   z+=1;
     } 
	 if(z==0)
	  return 1;
	 else
	  return 0; 
	}
  int main()
  {  int j,z,x,q;
     for(j=100;j<=200;j++)
     {
	 if(prime(j)==1)
       printf("%d\n",j);
	}
   } 
 //������1��  
  #include <stdio.h>
  int prime(int n) 
   { int i,z;
     for(i=2;i<n;i++)
    { if(n<2)
      return -1;
	  if(n%i==0)
      return 0;
	  if(n%i!=0)
	  return 1;    } //������һ��ʼд�ĳ��򣬵��������������ʱ����������������Ľ����������Ϊ�ҵ� for ѭ���ô��ˣ�
	                  //���ж�һ�� �ͻ᷵��ֵ������35 �������35/34��   ��Ҳ�ᱻ���� ������ 
	}
  int main()
  {  int j,z,x,q;
     for(j=100;j<=200;j++)
     {if(prime(j)==1)
       printf("%d\n",j);
	}
   } 
   //������2��
   #include <stdio.h>
  int prime(int n) 
   { int i,z=0;
     if(n<2)
      return -1;
     for(i=2;i<n;i++)
    { if(n%i!=0)
	   z=0; 
	  if(n%i==0)
	   z+=1;
     } 
	 if(z==0)
	  return 1;
	 else
	  return 0; 
	}
  int main()
  {  int j,z,x,q;
     for(j=100;j<=200;j++)
     {
	 if(prime(j)==1)
       printf("%d\n",j);
	}
   } 
 
