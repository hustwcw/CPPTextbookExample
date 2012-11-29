#include <conio.h>
#include <iostream.h>
class A{
    int  a;
public:
    A(){};							//自定义无参构造函数
    A(int x){};						//重载构造函数
    A(int x, int y){};					//重载构造函数
};
class B{							//未定义构造函数
    public: int b;
};
int main(void)
{
    A a[6]={3,(4,5),A(6),A(7,8),A()};	//用自定义构造函数构造
    A *b=new A[4];				//用自定义无参构造函数构造
    B c, *d=new B[4];				//用C++缺省无参构造函数构造
   // cout<<c.b;
    cout<<(d[2]).b;
	delete [ ]b;
 	delete [ ]d;
 	getch();
 	return 0;
}
