#include <conio.h>
#include <iostream.h>
class A{
    int  a;
public:
    A(){};							//�Զ����޲ι��캯��
    A(int x){};						//���ع��캯��
    A(int x, int y){};					//���ع��캯��
};
class B{							//δ���幹�캯��
    public: int b;
};
int main(void)
{
    A a[6]={3,(4,5),A(6),A(7,8),A()};	//���Զ��幹�캯������
    A *b=new A[4];				//���Զ����޲ι��캯������
    B c, *d=new B[4];				//��C++ȱʡ�޲ι��캯������
   // cout<<c.b;
    cout<<(d[2]).b;
	delete [ ]b;
 	delete [ ]d;
 	getch();
 	return 0;
}
