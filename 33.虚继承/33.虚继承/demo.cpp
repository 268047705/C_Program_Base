#include"MigrantWorker.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	/*���μ̳� ��̳кͶ��ؼ̳л���������أ� ��ͼ��������a�Ǹ��࣬b���c�඼�̳���a�࣬��d���ּ̳���b��c��
	��ô����d����������ζ��ؼ̳�a�࣬�ͻ����������ͬ��a�����ݳ�Ա���Ա�������ͻ���ִ������ࡣ
	��α��������ķ������Ϳ���ʹ����̳�virtual*/
	MigrantWorker *m = new MigrantWorker("Miga","200","yellow");
	m->Farmer::printColor();
	m->Worker::printColor();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}