#include<iostream>
#include<stdlib.h>
using namespace std;

template<typename T>
class Carry
{

public:
	Carry(int resize = 10)
	{
//		cout << "Carry(int resize = 0)" << endl;
		_arr = new T[resize];
		_len = resize;
		_sizeVal = 0;
	}

	~Carry()
	{
//		cout << "~Carry()" << endl;
		delete[]_arr;
	}

	Carry(const Carry &src)
	{
//		cout << "Carry(const Carry &src)" << endl;
		_arr = new T[src._len];
		_len = sr._len;
		_sizeVal = src._sizeVal;
		copyFrom(src);
	}

	void copyFrom(const Carry &src)
	{
//		cout << "void copyFrom(const Carry &src)" << endl;
		for (int i = 0; i < src._sizeVal; i++)
		{
			_arr[i] = src._arr[i];
		}
	}

	Carry &operator=(const Carry& src)
	{
//		cout << "Carrty &operator=(const Carry& src)" << endl;
		if (&src == this)
		{
			return *this;
		}

		delete[]_arr;

		_arr = new T[src._len];
		_len = src._len;
		_sizeVal = src._sizeVal;
		copyFrom(src);
	}

	void pushBack(T val)
	{
//		cout << "void pushBack(T val)" << endl;
		if (isFull())
		{
			reSize();
		}
		_arr[_sizeVal++] = val;
	}

	void insert(int pos, T val)
	{
		T tmp = 0;
		for (int i = pos - 1; i < _count + 1; i++)
		{
			tmp = _arr[i];
			_arr[i] = val;
			val = tmp;
		}
		_sizeVal++;
	}

	bool popBack()
	{
//		cout << "bool popBack()" << endl;
		if (isEmpty())
		{
			return false;
		}
		_sizeVal--;
		return true;
	}

	bool deletepos(int pos)
	{
		T tmp = 0;
		for (int i = _pos - 1; i < _count + 1; i++)
		{
			_arr[i] = _arr[i + 1];
		}
		_count--;
	}

	T getBack()
	{
//		cout << "T getBack()" << endl;
		if (isEmpty())
		{
			return T();
		}
		return _arr[_sizeVal - 1];
	}

	bool isFull()
	{
//		cout << "bool isFull()" << endl;
		return _sizeVal == _len;
	}

	bool isEmpty()
	{
//		cout << "bool isEmpty()" << endl;
		return _sizeVal == 0;
	}

	void reSize()
	{
//		cout << "void reSize()" << endl;
		T* tmp = new T[_len + (_len >> 1)];
		for (int i = 0; i < _len; i++)
		{
			tmp[i] = _arr[i];
		}

		delete[]_arr;
		_arr = tmp;
		_len = _len + (_len >> 1);
	}

	void show()	
	{
		for (int i = 0; i < _sizeVal; i++)
		{
			cout << _arr[i] << "  ";
		}
		cout << endl;
	}

	template<typename U>
	int find(U val)
	{
//		cout << "template<typename U> int find(U val)" << endl;
		for (int i = 0; i < _sizeVal; i++)
		{
			if (_arr[i] == val)
			{
				return i;
			}
		}
		return -1;
	}

	typedef char* tchar;
	template<>
	int find<tchar>(tchar val)
	{
//		cout << "template<> int find<char*>(char * val)" << endl;
		for (int i = 0; i < _sizeVal; i++)
		{
			if (strcmp(_arr[i],val) == 0)
			{
				return i;
			}
		}
		return -1;
	}

private:
	T *_arr;
	int _len;
	int _sizeVal;
};


template<typename K> 
class Stack
{
private:
	Carry<K> _carry;
public:
	Stack()
	{
		_carry;
	}

	Stack(const Stack & src)
	{
		_carry = src._carry;
	}

	Stack &operator=(const Stack& src)
	{
		if (&src == this)
		{
			return *this;
		}
		_carry = src._carry;
	}

	void Push(K val)
	{
		_carry.pushBack(val);
	}

	void Pop()
	{
		_carry.popBack();
	}

	K getBack()
	{
		_carry.getBack();
	}

	void show()
	{
		_carry.show();
	}
};

int main()
{
	Stack<int> stack1;
	for (int i = 0; i < 10; i++)
	{
		stack1.Push(i);
	}
	stack1.show();
	Stack<int>stack3(stack1);
	stack3.show();
	Stack<int> stack4;
	stack4 = stack1;
	stack4.show();

	Stack<char *> stack2;
	stack2.Push("hello");
	stack2.Push("world");
	stack2.Push("aaa");
	stack2.show();


	return 0;
}

