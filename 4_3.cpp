static int processes=1;	//总的进程数
extern int fork( );		//声明类库提供的fork函数
class Process{
    int processes; 		//本进程fork的进程数
public:
    int fork( );
};
int Process::fork( )
{							
    processes++; 		//根据面向对象的作用域，访问数据成员processes
    ::processes++; 		//访问全局变量processes
    return ::fork( );		//调用类库中的fork函数
}
