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
int main(void)			//ȫ��mainΪA����ͨ��Ԫ
{
    A a(5);
    cout<<"a.i="<<a.i;		//����˽�г�Ա
    return 0;
}
*/
