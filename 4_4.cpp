#include<string.h>
class  CLERK{
    char *CLERK;				//���ݳ�ԱCLERK��¼ְԱ����
    ::CLERK  *next;  		//�ȼ���class CLERK *next��ָ������ְԱ
public:
    CLERK(char *,::CLERK*);	//�ȼ���CLERK(char *, class CLERK *next)
};
//�����Ĳ�����ͺ����干ͬ�����˺����ľֲ����������ʡ��
//class CLERK *next �е�class������������������������
//�������ݳ�Աchar *CLERK�������Ǵ�ʱ����Ҫ������CLERK��
CLERK::CLERK(char *name, class CLERK *next=0) 
{
    CLERK=new  char[strlen(name)+1];
    strcpy(CLERK ,name);
    CLERK::next=next; 		//CLERK:: next�޶�nextΪ���ݳ�Ա
}
int CLERK;					//�������ͱ���CLERK
class CLERK w("Wan", &n);		//���ʡ��class������������CLERK��
//�����������ͱ���������ʱ��Ҫ����
