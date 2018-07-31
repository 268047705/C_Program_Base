#pragma once
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
class List
{
public:
	List(int size);//��ʼ˳���
	~List();//ɾ��˳���
	void ClearList();//���˳���
	bool ListEmpty();//˳����п�
	int ListLength();//��ȡ˳�����
	bool GetElem(int i,int *e);//��ȡָ��Ԫ��
	int LocateElem(int *e);//Ѱ�ҵ�һ������e������Ԫ�ص�λ��
	bool PriorElem(int *currentElem, int *preElem);//��ȡָ��Ԫ�ص�ǰ��
	bool NextElem(int *currentElem, int *nextElem);//��ȡָ��Ԫ�صĺ��
	void ListTraverse();//����˳���
	bool ListInsert(int i,int *Elem);//����Ԫ��
	bool ListDelete(int i,int *Elem);//ɾ��Ԫ��
private:
	int *m_pList;//˳���ָ��
	int m_iSize;//�û�ָ����˳�������
	int m_iLength;//˳�����
};
#endif // !LIST_H
