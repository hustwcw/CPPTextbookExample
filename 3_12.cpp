// 测试malloc free new delete delete[]进行内存分配与回收
// 使用valgrind进行内存泄露检查：valgrind --tool=memcheck --leak-check=full ./test.o
#include <stdlib.h>

class ARRAY
{
	int *a;
	int r,c;
	public:
	ARRAY(int x, int y);
	~ARRAY();
};

ARRAY::ARRAY(int x, int y)
{
	a = new int[(r=x)*(c=y)];
	//a = (int *)malloc((r=x)*(c=y));
}

ARRAY::~ARRAY()
{
	if(a)
	{
		//free(a);
		//delete a;
		delete[] a;
		a=0;
	}
}

int main()
{
	ARRAY *p = new ARRAY(5, 7);
	delete p;
	//free(p);
	return 0;
}
