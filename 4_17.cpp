#include <iostream.h>
class A{
    int  i;
public:
    A(int i) { A::i=i; cout<<"A: i="<<i<<"\n"; };
    ~A( ) { if(i) cout<<"~A: i="<<i<<"\n"; i=0; };
};
void g(A &a) {cout<< "g is running\n"; }
int main(void)
{
    A a(1), b(2);				//����a��b
    A &p=a;					//p�����ù��������a
    A *q=new A(3);			//q����new���ɵ���������
	A &r=p;					//r����p�����õĶ���a
    cout<<"CALL g(b)\n";
    g(b);	
    cout<<"main return\n";	
    delete q;				//q�������ͷ�new����Ķ���
    //q.~A();
    getchar();
    return 0;
}							//�˳�mainʱ�Զ�����a,b
