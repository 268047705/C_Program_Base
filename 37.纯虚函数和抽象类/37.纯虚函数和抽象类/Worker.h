#ifndef WORKER_H
#define WORKER_H

//�̳�˭����˭
#include"Person.h"

class Worker :public Person
{
public:
	Worker(string name,int age);
	~Worker();
	void work();
	int m_iSalary;
};

#endif WORKER_H