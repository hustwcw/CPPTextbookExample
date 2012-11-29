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
    A a(1), b(2);				//构造a，b
    A &p=a;					//p本身不用构造和析构a
    A *q=new A(3);			//q引用new生成的无名对象
	A &r=p;					//r引用p所引用的对象a
    cout<<"CALL g(b)\n";
    g(b);	
    cout<<"main return\n";	
    delete q;				//q析构并释放new分配的对象
    //q.~A();
    getchar();
    return 0;
}							//退出main时自动析构a,b
