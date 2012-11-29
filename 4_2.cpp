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
STACK( ){ head=0; }	//本行定义省略时使用缺省的构造函数
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
    if(h==0) return 0;		//压栈失败返回0
    h->next=head;
    head=h;
    return 1;				//压栈成功返回1
}
int STACK::pop(int &v)
{
    NODE *h=head;
    if(h==0) return 0;		//出栈失败返回0
    head=h->next;
    v=h->val;				//换名形参存放栈顶元素
    return 1;				//出栈成功返回1
}
int main(void)
{
    STACK stk;			//等价于STACK stk( )
    int  v;
    //if(stk.push(1)==0){ cout<<"Stack overflow"; return 0; }
    stk.push(2);stk.push(3);stk.push(4);
    if(stk.pop(v)==0){ cout<<"Stack underflow"; return 0; }
    cout<<v;
    getchar();
    return 0;
}
