#include <iostream.h>
struct A{
    virtual void f1( ){ cout<<"A::f1\n"; };
    virtual void f2( ){ cout<<"A::f2\n"; };
    virtual void f3( ){ cout<<"A::f3\n"; };
    virtual void f4( ){ cout<<"A::f4\n"; };
};
class B: A{
    virtual void f1( ){		//virtual��ʡ�ԣ�f1�Զ���Ϊ�麯��
		cout<<"B::f1\n"; 
	};
    void f2( ) { 			//f2�Զ���Ϊ�麯��
		cout<<"B::f2\n"; 
	};
	friend int main(void);
};
class C: B{
    void f4( ) { 			//f4�Զ���Ϊ�麯��
		cout<<"C::f4\n"; 
	};
	friend int main(void);
};
int main(void)
{
    C  c;
    A a;
    cout<<sizeof(a);
    A *p=&c;
    p->f1( );				//����B::f1( )
    p->f2( );				//����B::f2( )
    p->f3( );				//����A::f3( )
    p->f4( );				//����C::f4( )
    p->A::f2( );			//����A::f2( )
    getchar();
    return 0;
}
