#include <string.h>
#include <iostream.h>
class TUTOR{
    char  	name[20];
    const 	char sex;
    int  	salary;
public:
    TUTOR(const char *name, const TUTOR *t);
    TUTOR(const char *name, char gender, int salary);
    const char *getname( ) { return name; }
    char *setname(const char *name);
};
TUTOR::TUTOR(const char *n, const TUTOR *t): sex(t->sex)
{
    strcpy(name,n);
    salary=t->salary;
}
TUTOR::TUTOR(const char *n, char g, int s): sex(g)
{
    strcpy(name,n);
    salary=s;
}
char *TUTOR::setname(const char *nm)
{
    char *p = nm +1;
    p[0] = 'b';
    cout<<nm;
    return strcpy(name, nm);
}
int main(void)
{
    TUTOR  wang("wang", 'F', 2000);
    TUTOR  yang("yang", &wang);
    //*wang.getname( )='W';	//错误，不能修改wang.getname( )指向的字符
    *yang.setname("Zang")='Y';
    getchar();
    return 0;
}
