#include <iostream.h>
class A{
    int i;
    friend int main(void)//
    {
           cout<<"This static main\n";
           return 0;
           }	
public:
    A(int x) { i=x; }
};
/*
int main(void)			//全局main为A的普通友元
{
    A a(5);
    cout<<"a.i="<<a.i;		//访问私有成员
    return 0;
}
*/
