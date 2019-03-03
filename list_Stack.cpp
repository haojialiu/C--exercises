#ifndef MQUEUE_H
#define MQUEUE_H
#include<vector>
#include<iostream>
#define LEN 10

using namespace std;

template<typename T>
class Mstack
{
public:
	class Node;
	Mstack()
	{
		_head = new Node();
		_head->_next = NULL;
	}
	~Mstack()
	{
		while (!isEmpty())
		{
			pop();
		}
//		delete _head;
//		_head = NULL;
	}


	void push(T val)
	{
		Node *str = new Node(val);
		str->_next = _head;
		_head = str;
		/*_head->_next = new Node(val);
		_head = _head->_next;
		_head->_next = NULL;*/
	}


	void pop()
	{
		if (isEmpty())
		{
			throw "queue is empty";
		}
		Node *tmp = _head;
		_head = _head->_next;

		delete tmp;
	}

	T top()
	{
		return _head->_next->_val;
	}

	bool isEmpty()
	{
		return _head == NULL;
	}

	void show()
	{
		Node *str = _head;

		while (str->_next != NULL)
		{
			cout << str->_val << endl;
			str = str->_next;
		}
	}

private:
	class space
	{
	public:
		static space* getSpace()
		{
			if (NULL == _space)
			{
				if (NULL == _space)
				{
					_space = new space();
				}
			}
			return _space;
		}

	private:
		space()
		{
			Node *tmp = new Node[LEN];

			int i = 0;
			for (; i < LEN - 1; i++)
			{
				tmp[i]._next = &tmp[i + 1];
			}
			tmp[i]._next = NULL;

			_pool = &tmp[0];
		}

		static space* _space;
		Node* _pool;

		friend class Node;
	};


	class Node
	{
	private:
		T _val;
		Node *_next;
		static space* _space;
	public:
		Node()
		{
			_next = NULL;
		}

		Node(T val)
		{
			_val = val;
			_next = NULL;
		}

		void *operator new(size_t size)
		{
//			cout << "void *operator new(size_t size)" << endl;
			if (_space->_pool == NULL)
			{
				Node *tmp = new Node[LEN];

				int i = 0;
				for (; i < LEN - 1; i++)
				{
					tmp[i]._next = &tmp[i + 1];
				}
				tmp[i]._next = NULL;

				_space->_pool = &tmp[0];
			}

			Node* mem = _space->_pool;
			_space->_pool = _space->_pool->_next;

			return mem;
		}

		void operator delete(void *p)
		{
//			cout << "void operator delete(void *p)" << endl;
			Node *tmp = (Node*)p;

			tmp->_next = _space->_pool;
			_space->_pool = tmp;
		}

		friend class Mstack;
	};
	Node* _head;
};

template<typename T>
typename Mstack<T>::space*  Mstack<T>::Node::_space = Mstack<T>::space::getSpace();

template<typename T>
typename Mstack<T>::space* Mstack<T>::space::_space = NULL;




int main()
{
	Mstack<int> stack1;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.show();
}
#endif