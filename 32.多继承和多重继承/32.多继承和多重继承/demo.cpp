#include"MigrantWorker.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	//���ؼ̳���ָ��C�̳�B��B�̳�A
	//��̳���ָ��A�̳�B��C
	MigrantWorker *m = new MigrantWorker("001", "Kroos");
	m->carry();
	m->sow();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}