#include<stdio.h>
#include <stdlib.h>
#include<iostream>
#include<stack>
#include<queue>
#include<ctype.h>
#include<string.h>
#include"LinkList.h"


using namespace std;
//一、替换空格
int Replace(char *arr,int len)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ')
		{
			count += 3;
		}
		else
		{
			count++;
		}

	}
	count--;
	while (len>0)
	{
		len--;
		if (arr[len] == ' ')
		{
			arr[count--] = '%';
			arr[count--] = '0';
			arr[count--] = '2';
		}
		else
		{
			arr[count--] = arr[len];
		}
	}
	return 0;
}


//逆序打印链表
void Reverse(LinkList *list)
{
	Node *p = list->head.next;
	stack<Node*> stack1;
	while(p!=NULL)
	{
		stack1.push(p);
		p = p->next;
	}

	while (!stack1.empty())
	{
		Node *pp = stack1.top();
		cout << pp->data << "  ";
		stack1.pop();
	}
	cout << endl;
}


//斐波那契
int Fibonacci(int a, int b, int pos)
{
	if (pos > 1)
	{
		pos--;
		return Fibonacci(b,a+b,pos);
	}
	return a;
}


//求一个数二进制中1的个数
int num1(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = (n - 1) & n;
	}
	return count;
}


//数的整数次方
double Power(double a,int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return a;
	}
	double tmp = Power(a, n / 2);
	tmp *= tmp;
	if (n % 2)
	{
		tmp *= a;
	}
	if (n < 0)
	{
		tmp = 1 / tmp;
	}
	return tmp;
}


//O(1)删除链表结点
void Deletepos(LinkList *list, int pos)
{
	Node *p = list->head.next;
	stack<Node*> stack1;
	while (pos>0 && p->next!=NULL)
	{
		pos--;
		p = p->next;
	}
	p->data = p->next->data;
	p->next = p->next->next;
}


//奇数在偶数前
void OddEven(int arr[],int len)
{
	int tmp = 0;
	int i = 0;
	int j = len - 1;
	while (i < j)
	{
		while (j>i)
		{
			if ((arr[i] % 2 == 0) && (arr[j]%2==1))
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
				i++;
				j--;
			}
			else if ((arr[i] % 2 == 0) && (arr[j] % 2 == 0))
			{
				j--;
			}
			else if ((arr[i] % 2 == 1) && (arr[j] % 2 == 1))
			{
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
	}
}



//1.如何判断合法的IP地址,尽可能考虑各种情况 (腾讯面试题)
bool IsIP(const char *str)
{
	int count2 = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		int count1 = 0;
		int tmp = 0;
		if (isdigit(str[i]) || str[i] == '.')
		{
			for (int j = i; str[j] != '.'&&str[i] != '\0'; j++, i++)
			{
				count1++;
				if (count1 >= 4)
				{
					return false;
				}
				tmp *= 10;
				tmp += str[i] - '0';
				if (tmp > 255)
				{
					return false;
				}
			}
			
			if (str[i] == '.')
			{
				count2++;
			}
			if (str[i] == '.' && (str[i + 1] == '.' || str[i + 1] == '\0'))
			{
				return false;
			}
			
			if (count2 > 3)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}


//2.算法题：求一个有序数组中两个值相加为k的数字，返回这两个数字的下标。(腾讯面试题)
typedef struct Pairs
{
	int _left;
	int _right;
}Pairs;
Pairs SumToK(int *arr, int len, int k)
{
	int left = 0;
	int right = len-1;
	Pairs pairs = {-1,-1};
	while (left < right)
	{
		if (arr[left] + arr[right] < k)
		{
			left++;
		}
		else if (arr[left] + arr[right] > k)
		{
			right--;
		}
		else
		{
			pairs._left = left;
			pairs._right = right;
			break;
		}
	}
	return pairs;
}



//泛型冒泡
template <typename T>
int compare(T a, T b)
{
	if (a > b)
	{
		return 1;
	}
	else if (a < b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
typedef char* TT;
template<>
int compare(const TT a, const TT b)
{
	return strcmp(a, b);
}
template <typename T,typename PRE>
void BubbleSort(T *arr,int len,PRE compare)
{
	T tmp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j+1 < len - i; j++)
		{
			if (compare(arr[j],arr[j + 1])>0)
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}



//将主机序转化为网络序
long Htonl(long a)
{
	long n = 0;
	short m = 0x0001;
	if (*(char *)&m == 0x01)
	{
		for (int i = 0; i<sizeof(a); i++)
		{                                
			n = (n << 8) | (a & 0xff);
			a >>= 8;
		}
		return n;
	}
	else
	{
		return a;
	}
}


//两个队列实现一个栈
template <typename T>
class DouQue_Stack
{
public:
	DouQue_Stack()
	{}
	~DouQue_Stack()
	{}
	void Stack_push(const T& node)
	{
		queue1.push(node);
	}
	void Stack_pop()
	{
		if (!queue2.empty())
		{
			queue2.pop();
		}
		if (!queue1.empty())
		{
			int i = queue1.size();
			while (i > 1)
			{
				queue2.push(queue1.front());
				queue1.pop();
				i--;
			}
			queue1.pop();
			int ii = queue2.size();
			while (ii > 0)
			{
				queue1.push(queue2.front());
				queue2.pop();
				ii--;
			}
		}
		
	}

	T Stack_top()
	{
		T node1;
		if (!queue2.empty())
		{
			node1 = queue2.front();
			return node1;
		}
		if (!queue1.empty())
		{
			int i = queue1.size();
			while (i > 1)
			{
				queue2.push(queue1.front());
				queue1.pop();
				i--;
			}
			node1 = queue1.front();
			queue2.push(queue1.front());
			queue1.pop();
			int ii = queue2.size();
			while (ii > 0)
			{
				queue1.push(queue2.front());
				queue2.pop();
				ii--;
			}
			return node1;
		}
	}
private:
	queue<T> queue1;
	queue<T> queue2;
};



//两个栈实现一个队列
template <typename T>
class DouSta_Queue
{
public:
	DouSta_Queue()
	{}
	~DouSta_Queue()
	{}
	void Queue_push(const T& node)
	{
		stack1.push(node);
	}
	void Queue_pop()
	{
		if (!stack2.empty())
		{
			stack2.pop();
		}
		if (!stack1.empty())
		{
			int i = stack1.size();
			while (i > 0)
			{
				stack2.push(stack1.top());
				stack1.pop();
				i--;
			}
			stack2.pop();
		}

	}

	T Queue_top()
	{
		T node1;
		if (!stack2.empty())
		{
			node1 = stack2.top();
			return node1;
		}
		if (!stack1.empty())
		{
			int i = stack1.size();
			while (i > 0)
			{
				stack2.push(stack1.top());
				stack1.pop();
				i--;
			}
			node1 = stack2.top();
			return node1;
		}
	}
private:
	stack<T> stack1;
	stack<T> stack2;
};

int main()
{
	//替换空格
	/*char arr[20] = "we are happy";
	int len = strlen(arr);
	Replace(arr,len);
	printf("%s\n",arr);*/


	//逆序打印链表
	/*LinkList list;
	InitLinkList(&list);
	for (int i = 0; i < 5; ++i)
	{
		InsertElemToList(&list, i * 10, i);
	}
	ShowElemOfList(&list);
	Reverse(&list);*/


	//斐波那契
	/*for (int i = 1; i < 10; i++)
	{
		cout << Fibonacci(1, 1, i) << endl;
	}*/

	//二进制1的个数
	/*cout << num1(8) << endl;
	cout << num1(9) << endl;
	cout << num1(15) << endl;*/


	//数的整数次方
	/*cout << Power(2, 0) << endl;
	cout << Power(2, 10) << endl;
	cout << Power(2.123, 10) << endl;
	cout << Power(2, -1) << endl;*/


	//O(1)删除链表结点
	//LinkList list;
	//InitLinkList(&list);
	//for (int i = 0; i < 5; ++i)
	//{
	//	InsertElemToList(&list, i * 10, i);
	//}
	//ShowElemOfList(&list);
	////Deletepos(&list, 2);
	//Deletepos(&list, 0);
	//ShowElemOfList(&list);


	//奇数在偶数前
	/*int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	OddEven(arr,len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}*/



	//1.如何判断合法的IP地址,尽可能考虑各种情况 (腾讯面试题)

	//char *arr = "234.234.234.234";
	////char *arr = "234.234.234.";
	////char *arr = ".234.234.234.234";
	////char *arr = "234..234.234";
	////char *arr = "234.888.234.234";
	////char *arr = "23.23.2.2";
	//if (IsIP(arr))
	//{
	//	cout << "合法" << endl;
	//}
	//else
	//{
	//	cout << "不合法" << endl;
	//}


	//2.算法题：求一个有序数组中两个值相加为k的数字，返回这两个数字的下标。(腾讯面试题)
	/*int arr[] = { -16, -11, -10, -5, -2, 0, 1, 5, 8, 11, 16, 18 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Pairs p=SumToK(arr, len, 6);
	if (p._left == -1)
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << p._left << endl;
		cout << p._right << endl;
	}*/


	//泛型冒泡
	/*int arr[] = { 1, 5, 7, 2, 3, 9, 0, 4, 8, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,len,compare<int>);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	char* br[] = { "aaa", "ccc", "bbb","aa","bb"};
	int len1 = sizeof(br) / sizeof(br[0]);
	BubbleSort(br,len1,compare<char *>);
	for (int i = 0; i < len1; i++)
	{
		cout << br[i] << endl;
	}*/


	//将主机序转化为网络序
	/*printf("%x\n", Htonl(0x12345678));*/


	
	//两个队列实现一个栈
	/*DouQue_Stack<int> S;
	for (int i = 0; i < 10; i++)
	{
		S.Stack_push(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << S.Stack_top()<<"   ";
		S.Stack_pop();
	}
	cout << endl;*/


	//两个栈实现一个队列
	DouSta_Queue<int> Q;
	for (int i = 0; i < 10; i++)
	{
		Q.Queue_push(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Q.Queue_top()<<"   ";
		Q.Queue_pop();
	}
	cout << endl;
}


