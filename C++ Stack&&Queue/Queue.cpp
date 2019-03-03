#include"StackQueue.h"

bool Queue::IsFull()
{
	if ((_tail + 1) % SIZE == _head)
	{
		return true;
	}
	return false;
}
bool Queue::IsEmpty()
{
	if (_head == _tail)
	{
		return true;
	}
	return false;
}

Queue::Queue()
{
	_data = new ElemType[SIZE];
	assert(_data != NULL);
	_head = _tail = 0;
}
bool Queue::PushQue(ElemType val)
{
	if (IsFull())
	{
		return false;
	}

	_data[_tail++] = val;
	_tail %= SIZE;

	return true;
}

bool Queue::PopQue(ElemType *res)
{
	if (IsEmpty())
	{
		return false;
	}

	*res = _data[_head++];
	_head %= SIZE;

	return true;
}
//=жиди
Queue &Queue::operator=(const Queue& src)
{
	if (this == &src)
	{
		return *this;
	}

	if (_data != NULL)
		delete[]_data;


	_data = new ElemType[SIZE];
	int n = _head;

	while (_tail != n)
	{
		_data[n] = src._data[n++];
	}
	_head = src._head;
	_tail = src._tail;
}
Queue::~Queue()
{
	free(_data);
	_data = NULL;
	_head = _tail = 0;
}
void Queue::show()
{
	int n = _head;

	while (_tail != n)
	{
		cout << _data[n++] << endl;
	}
}