#include"IndexException.h"
#include<iostream>
using namespace std;

void test()
{
	//�׳��쳣
	throw IndexException();
}

int main(void)
{

	try {
		test();
	}
	catch (IndexException&e) {
		e.printException();
	}
	system("pause");
	return 0;
}