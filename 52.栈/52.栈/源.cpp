#include "MyStack.h"

int main(void)
{
	MyStack *pStack = new MyStack(5);
	
	pStack->push('h');//��
	pStack->push('e');
	pStack->push('l');
	pStack->push('l');
	pStack->push('o');//��
	pStack->stackTraverse(true);

	char elem = 0;
	pStack->pop(elem);
	cout << endl;
	cout << elem<<endl;
	pStack->stackTraverse(true);
	if (pStack->stackEmpty())
	{
		cout << "��"<<endl;
	}

	if (pStack->stackFull())
	{
		cout << "��" << endl;
	}
	system("pause");
	return 0;
}