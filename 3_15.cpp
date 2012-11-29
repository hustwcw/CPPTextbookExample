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
TREE::TREE(int value)   	//隐含参数this指向要构造的对象
{
    this->value=value;		//等价于TREE::value=value或(*this). value= value
    left=right=0;			//C++提倡NULL用0表示
}
TREE::~TREE( ) 			//隐含参数this指向要析构的对象
{
    if(left) { delete left; left=0; }
    if(right) { delete right; right=0; }
}
TREE* TREE::find(int v)	//隐含参数this指向调用该函数的对象
{
    if(v==value)
        return  this; 		//this指向找到的节点
    if(v<value) 			//条件满足时查找左子树，否则查找右子树
return  left!=0?left->find(v):0;
    return  right!=0?right->find(v):0;
}
void TREE::GL(int i)
{
     this->left = new TREE(i);
     }
TREE  root(5);			//收工函数将析构对象root

int main(void)
{
    root.GL(4);
    if(root.find(4)) cout<<"Found \n";
    getch();
    return 0;
}
