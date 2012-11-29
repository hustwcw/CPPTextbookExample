#include <iostream.h>
class A{
    int a;
public:
    int getv( ) { return a; }
    A( ) { a=0; }
    A(int x) { a=x; }
    //friend int main();
};
class B: A{
    int b;
public:
    int getv( ) { return b+A::getv( ); }
    B( ) { b=0; }
    B(int x):A(x) { b=x; }
    friend int main();
};
class C: public A{
    int c;
public:
    int getv( ) { return c+A::getv( ); }
    C( ) { c=0; }
    C(int x):A(x) { c=x; }
};
int main()
{
    A &p=*new C(3);					//ֱ������C�����
    A &q=*new B(5);				//ǿ��ת������B�����
    cout<<"p.getv( )="<<p.getv( )<<"\n";
    cout<<"q.getv( )="<<q.getv( )<<"\n"; 
    delete &p;						//����C(3)�ĸ���A��������C 
    delete &q;						//����B(5)�ĸ���A ��������B 
    getchar();
    return 0;
}
