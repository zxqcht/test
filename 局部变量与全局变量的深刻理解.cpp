#include <stdio.h>
int x=77;
void fn1()
{ printf("fn1():x=%d\n",x);
}
int main()
{ int x=10;
  if(x>0)
  { x=100;//��Ҫ�ڵ�9��"x=100" ǰ���� int ��ʱ���оͱ������if�����ڶ�����һ���µ�int x�����x����������if���飬
          //��ʱif�ڵ�xֵΪ100��if��main��x��ֵΪ10��main��x��ֵΪ77. 
    x/=2;
    printf("if����ڣ�x=%d\n",x);
  }
  printf("main�����ڣ�x=%d\n",x);
  fn1();
  return 0;
}
