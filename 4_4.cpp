#include<string.h>
class  CLERK{
    char *CLERK;				//数据成员CLERK记录职员姓名
    ::CLERK  *next;  		//等价于class CLERK *next，指向其他职员
public:
    CLERK(char *,::CLERK*);	//等价于CLERK(char *, class CLERK *next)
};
//函数的参数表和函数体共同构成了函数的局部作用域。如果省略
//class CLERK *next 中的class，则根据面向对象的作用域访问
//的是数据成员char *CLERK，而不是此时所需要的类型CLERK。
CLERK::CLERK(char *name, class CLERK *next=0) 
{
    CLERK=new  char[strlen(name)+1];
    strcpy(CLERK ,name);
    CLERK::next=next; 		//CLERK:: next限定next为数据成员
}
int CLERK;					//定义整型变量CLERK
class CLERK w("Wan", &n);		//如果省略class，就难于区分CLERK是
//类名还是整型变量名，此时需要类名
