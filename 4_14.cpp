#include <iostream.h>
class A{
    int a;
public:
    /*
    int f( ){           // this������ΪA * const
        a++;          //��ȷ�������޸���ͨ���ݳ�Ա
        cout<<"int f( )"<<endl;
        return a;
    }*/
    int f( )volatile{	// this������Ϊvolatile A * const
        a++;          //��ȷ�������޸���ͨ���ݳ�Ա
        cout<<"int f( )volatile"<<endl;
        return a;
    }
    
    int f( )const volatile{	// this������Ϊconst volatile * const
        //a++;       	//���󣬲����޸���ͨ���ݳ�Ա
        cout<<"int f( )const volatile"<<endl;
        return a;
    };
    A(int x) { a=x; };
};
A x(3);
const A y(6);
const volatile A z(8);
int main(void) {
    x.f( );	        //��ͨ����x����void f( )
    y.f( );			//ֻ������y����void f( )const
    z.f( );			//ֻ���ӷ�����z����void f( )const volatile
    getchar();
    return 0;
}
