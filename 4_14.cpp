#include <iostream.h>
class A{
    int a;
public:
    /*
    int f( ){           // this的类型为A * const
        a++;          //正确，可以修改普通数据成员
        cout<<"int f( )"<<endl;
        return a;
    }*/
    int f( )volatile{	// this的类型为volatile A * const
        a++;          //正确，可以修改普通数据成员
        cout<<"int f( )volatile"<<endl;
        return a;
    }
    
    int f( )const volatile{	// this的类型为const volatile * const
        //a++;       	//错误，不能修改普通数据成员
        cout<<"int f( )const volatile"<<endl;
        return a;
    };
    A(int x) { a=x; };
};
A x(3);
const A y(6);
const volatile A z(8);
int main(void) {
    x.f( );	        //普通对象x调用void f( )
    y.f( );			//只读对象y调用void f( )const
    z.f( );			//只读挥发对象z调用void f( )const volatile
    getchar();
    return 0;
}
