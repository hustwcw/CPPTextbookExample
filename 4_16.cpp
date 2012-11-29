#include <string.h>
#include <stdlib.h>
#include <iostream.h>
class PRODUCT{
    char *name;			//产品名称
    int  price;			//产品价格
    int  quantity;			//产品数量
    mutable int count;		//产品查询次数
public:
    PRODUCT(char *n, int m, int p);
    int buy(int money);
    void get(int &p, int &q)const;
    ~PRODUCT(void);
};
PRODUCT::PRODUCT(char *n, int p, int q)
{
    name=new char[strlen(n)+1];
    strcpy(name, n);
    price=p;
    quantity=q;
    count=0;
}
PRODUCT::~PRODUCT( )
{
    if(name) {
        delete [] name;
        name=0;
    }
}
int PRODUCT::buy(int money)
{
    quantity -=money/price;
    return money%price;
}
void PRODUCT::get(int &p, int &q)const
{
    p=price;
    q=quantity;
    count++;			//count为mutable成员，可以修改
}
int main(int argc, char **argv)
{
    int  p, q;
    if(argc!=4) return 1;
	PRODUCT m(argv[1], atoi(argv[2]), atoi(argv[3]));
    m.get(p, q);
    cout<<"Price="<<p<<"  Quantity="<<q;
    getchar();
    return 0;
}
