#include <conio.h>
#include <string.h>
#include <iostream.h>
#include <alloc.h>
class ACCOUNT{
    char password[10];
    int  salary, balance;
public:
    char *name;
    int ACCOUNT::*get(char *item, char * pswd);	//返回成员指针
    ACCOUNT(char *name, char *pswd, int salary, int balance);
};
ACCOUNT::ACCOUNT(char *name, char *pswd, int salary, int balance)
{
    ACCOUNT::name = (char *)malloc(strlen(name)+1);
    strcpy(ACCOUNT::name, name);
    strcpy(password, pswd);
    ACCOUNT::salary=salary;
    ACCOUNT::balance=balance;
}
int ACCOUNT::*ACCOUNT::get(char *item, char *pswd)
{
    if(stricmp(pswd, password)) return 0;
    if(stricmp(item, "salary")==0) return &ACCOUNT::salary;
    if(stricmp(item, "balance")==0) return &ACCOUNT::balance;
    return 0;
}
char *getpswd(const char *name)
{
    int  i=0;
    static char pswd[10];
    cout<<"Mr. "<<name<<", please input your password: ";
    while((pswd[i]=getch( ))!='\r') if(i<9) { i++; }
    pswd[i]=0;
    cout<<"\n\n";
    return pswd;
}
ACCOUNT yang("Yang", "123", 2000, 20000);
ACCOUNT *wang = new ACCOUNT("Wang", "abc", 1000, 10000);
int main(void) {
    ACCOUNT *y=&yang;
    char *pswd=getpswd(yang.name);
    int  ACCOUNT::*p;	//定义数据成员指针p
    p=y->get("balance", pswd);
    if(p==0) {
        cout<<"Password or inquiry item does not exist!\n";
        getchar();
        return 0;
    }
    cout<<"You have $"<<y->*p<<" in account\n";
    cout<<"Your salary is $"<<y->*yang.get("salary", pswd)<<"\n";
    pswd=getpswd(wang->name);
    cout<<"You have $"<<wang->get("balance", pswd)<<"\n";
    cout<<"Your salary is $"<<wang->*wang->get("salary", pswd)<<"\n";
    getchar();
    return 0;
}
