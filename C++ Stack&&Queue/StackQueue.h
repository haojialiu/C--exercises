#ifndef __STACK_H
#define __STACK_H

#include<iostream>
#include<string.h>
#include<assert.h>
#include<ctype.h>

using namespace std;
typedef int  ElemType;
#define SIZE 10

///栈
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
	//初始化
	Stack();
		//入栈
	bool Push(ElemType val);
		//出栈
	bool Pop(ElemType *res);
		//构造
	Stack(const Stack & src);
		//=重载
	Stack &operator=(const Stack& src);
		//析构
	~Stack();
	void show();
};


//队列
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
	//=重载
	Queue &operator=(const Queue& src);
	//析构
	~Queue();
	void show();
};

#endif