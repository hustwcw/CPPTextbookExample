#include <stdio.h>
#include <string.h>
class STRING{
    char *str;
public:
    STRING(char *s);
    virtual ~STRING( ) { if (str) {delete str; str=0;} };
};
STRING::STRING(char *s)
{
    str=new char[strlen(s)+1];
    strcpy(str, s);
}
class CLERK: public STRING{
    STRING clkid;
    int age;
public:
    CLERK(char *n, char *i, int a);
    ~CLERK( ){ }//�Զ�����clkid.~STRING( )��STRING::~STRING( );
};
CLERK::CLERK(char *n, char *i, int a):STRING(n), clkid(i)
{
    age=a;
}
const  int  max=10;
int main(void)
{
    STRING *s[max];
    int a, k, m;
    char n[12], i[12], t[256];
    printf("Please input name, number and age:\n");
    for(k=0; k<max; k++) {
	    gets(t);
        m=sscanf(t,"%8s %8s %d",n,i,&a)!=3;
        s[k]=m?new STRING(n):new CLERK(n,i,a);
    }
    for(k=0; k<max; k++) 
	   delete s[k];//��s[k]ָ��STRING�Ķ�������s[k]->~STRING( )����
			//��s[k]ָ��CLERK�Ķ�������s[k]->~CLERK( )����
   getchar();
   return 0;4
}
