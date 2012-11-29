#include <iostream.h>
class ARRAY {
    int  size;
    int  *p;
    const static int i = 2;//ISO C++ forbids in-class initialization of non-const static member `i' 
public:
    int get(int x);
    ARRAY(int s);
    ARRAY(ARRAY r);
    ~ARRAY( );
};
int ARRAY::get(int x){ return p[x]; }
ARRAY::ARRAY(int s)
{
    int i;
    p=new int[size=s];
    for(i=0; i<s; i++) p[i]=1;
    cout <<"Construct ARRAY("<< s <<")\n";
}
ARRAY::ARRAY(ARRAY r)
{
    int i;
    p = new int [size = r.size];
    for(i = 0; i < size; i ++) p[i] = r.p[i];
    cout <<"Construct ARRAY("<< size <<")\n";
}
ARRAY::~ARRAY( )
{
    int i;
    if(p) { delete p;   p=0;  }
    cout<< "Deconstruct ARRAY("<< size <<")\n";
}
void func(ARRAY y) { cout << "func: "; }
int main(void)
{
    cout <<sizeof(ARRAY)<<endl;
    cout << "main: ";
    ARRAY a(6);
    cout << "main: a[0]=" << a.get(0) << "\n";
    func(a);
    int *q=new int[6];  q[0]=8;
    cout << "main: a[0]=" << a.get(0) << "\n";
    getchar();
    return 0;
}
