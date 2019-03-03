#include"StackQueue.h"
void Stack::Expand()
{
	ElemType *s = new ElemType[_size * 2];
	assert(s != NULL);

	for (int i = 0; i < _top; ++i)
	{
		s[i] = _data[i];
	}

	free(_data);
	_data = s;
	_size *= 2;
}
bool Stack::IsFull()
{
	if (_top == _size)
	{
		return true;
	}

	return false;
}
bool Stack::IsEmpty()
{
	if (_top == 0)
	{
		return true;
	}

	return false;
}

//初始化
Stack::Stack()
{
	_data = new ElemType[SIZE];
	assert(_data != NULL);
	_size = SIZE;
	_top = 0;
}

//入栈
bool Stack::Push(ElemType val)
{
	if (IsFull())
	{
		Expand();
		if (IsFull())
		{
			return false;
		}
	}

	_data[_top++] = val;
	return true;
}
//出栈
bool Stack::Pop(ElemType *res)
{
	if (IsEmpty())
	{
		return false;
	}

	*res = _data[--_top];
	return true;
}
//构造
Stack::Stack(const Stack & src)
{
	_data = new ElemType[src._size];
	for (int i = 0; i <= src._top; i++)
	{
		_data[i] = src._data[i];
	}
	_top = src._top;
	_size = src._size;
}
//=重载
Stack &Stack::operator=(const Stack& src)
{
	if (this == &src)
	{
		return *this;
	}

	if (_data != NULL)
		delete[]_data;


	_data = new ElemType[src._size];
	for (int i = 0; i <= src._top; i++)
	{
		_data[i] = src._data[i];
	}
	_top = src._top;
	_size = src._size;
}

//析构
Stack::~Stack()
{
	if (NULL != _data)
	{
		delete[]_data;
		_data = NULL;
	}
}

void Stack::show()
{
	for (int i = 0; i < _top; i++)
	{
		cout << _data[i] << endl;
	}
}