#ifndef __STACK_H
#define __STACK_H

#include<iostream>
#include<string.h>
#include<assert.h>
#include<ctype.h>

using namespace std;
typedef int  ElemType;
#define SIZE 10

///ջ
class Stack
{
private:
	ElemType *_data;
	int _size;
	int _top;

	void Expand();
	bool IsFull();
	bool IsEmpty();
	
public:
	//��ʼ��
	Stack();
		//��ջ
	bool Push(ElemType val);
		//��ջ
	bool Pop(ElemType *res);
		//����
	Stack(const Stack & src);
		//=����
	Stack &operator=(const Stack& src);
		//����
	~Stack();
	void show();
};


//����
class Queue
{
private:
	ElemType *_data;
	int _head;
	int _tail;

	bool IsFull();
	bool IsEmpty();
public:
	Queue();
	bool PushQue(ElemType val);
	bool PopQue(ElemType *res);
	//=����
	Queue &operator=(const Queue& src);
	//����
	~Queue();
	void show();
};

#endif