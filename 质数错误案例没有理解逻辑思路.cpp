#include <stdio.h>  //要看错误案例在下方，没有理解逻辑思路！！！！！！ 
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
 //错误案例1：  
  #include <stdio.h>
  int prime(int n) 
   { int i,z;
     for(i=2;i<n;i++)
    { if(n<2)
      return -1;
	  if(n%i==0)
      return 0;
	  if(n%i!=0)
	  return 1;    } //这是我一开始写的程序，当我运行这个程序时出现了奇数都输出的结果，这是因为我的 for 循环用错了，
	                  //它判断一次 就会返回值，例如35 ，（最后35/34）   它也会被认作 质数。 
	}
  int main()
  {  int j,z,x,q;
     for(j=100;j<=200;j++)
     {if(prime(j)==1)
       printf("%d\n",j);
	}
   } 
   //错误案例2：
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
 
