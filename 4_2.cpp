#include <iostream.h>
#include <conio.h>
class STACK
{
    struct NODE{
        int  val;
        NODE *next;
        NODE(int v){
    val=v;
    next=0;
}
    }*head;

public:
STACK( ){ head=0; }	//���ж���ʡ��ʱʹ��ȱʡ�Ĺ��캯��
    ~STACK( );
    int push(int v);
    int pop(int &v);
};

STACK::~STACK( ) 
{
    NODE *p;
    while(head){
        p=head->next;
        delete head;
        head=p;
    }
}
int STACK::push(int v)
{
    NODE *h=new NODE(v);
    if(h==0) return 0;		//ѹջʧ�ܷ���0
    h->next=head;
    head=h;
    return 1;				//ѹջ�ɹ�����1
}
int STACK::pop(int &v)
{
    NODE *h=head;
    if(h==0) return 0;		//��ջʧ�ܷ���0
    head=h->next;
    v=h->val;				//�����βδ��ջ��Ԫ��
    return 1;				//��ջ�ɹ�����1
}
int main(void)
{
    STACK stk;			//�ȼ���STACK stk( )
    int  v;
    //if(stk.push(1)==0){ cout<<"Stack overflow"; return 0; }
    stk.push(2);stk.push(3);stk.push(4);
    if(stk.pop(v)==0){ cout<<"Stack underflow"; return 0; }
    cout<<v;
    getchar();
    return 0;
}
