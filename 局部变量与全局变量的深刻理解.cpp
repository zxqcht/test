#include <stdio.h>
int x=77;
void fn1()
{ printf("fn1():x=%d\n",x);
}
int main()
{ int x=10;
  if(x>0)
  { x=100;//需要在第9行"x=100" 前加上 int 这时该行就变成了在if语句块内定义了一个新的int x，这个x的作用域是if语句块，
          //这时if内的x值为100，if外main内x的值为10，main外x的值为77. 
    x/=2;
    printf("if语句内，x=%d\n",x);
  }
  printf("main方法内，x=%d\n",x);
  fn1();
  return 0;
}
