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
    A &p=*new C(3);					//直接引用C类对象
    A &q=*new B(5);				//强制转换引用B类对象
    cout<<"p.getv( )="<<p.getv( )<<"\n";
    cout<<"q.getv( )="<<q.getv( )<<"\n"; 
    delete &p;						//析构C(3)的父类A而非子类C 
    delete &q;						//析构B(5)的父类A 而非子类B 
    getchar();
    return 0;
}
