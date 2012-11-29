#include <iostream.h>
struct A{ A( ) { cout<<'A';} };
struct B {
    const A a;
    B( ) { cout<<'B';} 
};
struct C{ C(){ cout<<'C';} };
struct D{ D( ) { cout<<'D';} };
struct E:A{ E(){ cout<<'E';} };
struct F:virtual B,virtual C{ F() { cout<<'F';} };
struct G:virtual B{ G( ) { cout<<'G';} };
struct H:virtual C, virtual D{ H( ) { cout<<'H';} };
struct I:E, F, virtual G, H{
    E  e;
    F  f;
    I( ) { cout<<'I';}
};
int main(void) { I  i; getchar();return 0;}
