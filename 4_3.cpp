static int processes=1;	//�ܵĽ�����
extern int fork( );		//��������ṩ��fork����
class Process{
    int processes; 		//������fork�Ľ�����
public:
    int fork( );
};
int Process::fork( )
{							
    processes++; 		//�����������������򣬷������ݳ�Աprocesses
    ::processes++; 		//����ȫ�ֱ���processes
    return ::fork( );		//��������е�fork����
}
