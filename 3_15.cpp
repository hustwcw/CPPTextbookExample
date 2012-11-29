#include <iostream.h>
#include <conio.h>
class  TREE{
    int   value;
    TREE  *left, *right;
public:
    TREE (int);
    ~TREE( );
    TREE *find(int);
    void GL(int i);
};
TREE::TREE(int value)   	//��������thisָ��Ҫ����Ķ���
{
    this->value=value;		//�ȼ���TREE::value=value��(*this). value= value
    left=right=0;			//C++�ᳫNULL��0��ʾ
}
TREE::~TREE( ) 			//��������thisָ��Ҫ�����Ķ���
{
    if(left) { delete left; left=0; }
    if(right) { delete right; right=0; }
}
TREE* TREE::find(int v)	//��������thisָ����øú����Ķ���
{
    if(v==value)
        return  this; 		//thisָ���ҵ��Ľڵ�
    if(v<value) 			//��������ʱ�������������������������
return  left!=0?left->find(v):0;
    return  right!=0?right->find(v):0;
}
void TREE::GL(int i)
{
     this->left = new TREE(i);
     }
TREE  root(5);			//�չ���������������root

int main(void)
{
    root.GL(4);
    if(root.find(4)) cout<<"Found \n";
    getch();
    return 0;
}
