#pragma once
#include"Node.h"
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
class List
{
public:
	List();//���캯��
	~List();//��������
	void ClearList();//�������
	bool ListEmpty();//�����п�
	int ListLength();//������
	bool GetElem(int i, Node *pNode);//��ȡָ��������Ԫ��
	int LocateElem(Node *pNode);//��ȡָ��Ԫ�ص�����
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);//��ȡǰ�����
	bool NextElem(Node *pCurrentNode, Node *pNextNode);//��ȡ��̽��
	void ListTraverse();//����
	bool ListInsert(int i,Node *pNode);//����Ԫ��
	bool ListDelete(int i, Node *pNode);//ɾ��Ԫ��
	bool ListInsertHead(Node *pNode);//������ͷ������
	bool ListInsertTail(Node *pNode);//���뵽�������
private:
	Node * m_pList;
	int m_iLength;
};

#endif // !LIST_H
