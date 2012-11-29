#include <iostream.h>
#include <conio.h>
class A{
    int  i;
    int *s;
public:
    A(int x) { s=new int[i=x]; cout<<"(C): "<<i<<"\n"; }
    ~A( ) {delete s; cout<<"(D): "<<i<<"\n"; }
};
void sub1(void) {  A &p=*new A(1);delete &p;}
void sub2(void) {  A *q=new A(2); delete q;}
void sub3(void) {  A &p=*new A(3); delete &p; }
void sub4(void) {  A *q=new A(4);  delete q;  }
int main(void)
{
    sub1( );
    sub2( );
    sub3( );
    sub4( );
    getch();
    return 0;
}
