#include <string.h>
#include <alloc.h>
#include <iostream.h>
#include <conio.h>
//using namespace std;
struct STRING{
    char *s;
    STRING(char *);
    ~STRING( );
};
STRING::STRING(char *t)
{
    s=(char *)malloc(strlen(t)+1);
    strcpy(s,t);
    cout<<"CONSTRUCT: "<<s;
}
STRING::~STRING( )
{
//if(s==0)  return;		//去掉本行，s1析构两次
cout<<"DECONSTRUCT: "<<s;
free(s);
s=0;					//在析构后置析构标志
}
int main(void)
{
    STRING s1("String varible 1\n");
    STRING s2("String varible 2\n");
    STRING s3 = STRING("Constant\n");
    //STRING("Constant\n");
    //s1.~STRING();
    //puts(s3.s);
    cout<< "RETURN\n";
    return 0;
}
