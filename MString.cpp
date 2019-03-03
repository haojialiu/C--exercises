#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;


class Mstring
{
public:
	Mstring()
	{
		_str = NULL;
//		_size = 0;
	}
	Mstring(char*str)
	{
		int len = strlen(str);
		_str = new char[len + 1];
		int i = 0;
		for (i; str[i] != '\0'; i++)
		{
			_str[i] = str[i];
	//		_size++;
		}
		_str[i] = '\0';
	}
	Mstring(const Mstring &src)
	{
		if (NULL == src._str)
		{
			_str = NULL;
			return;
		}
		//_str = new char[strlen(src._str) + 1];
		//memcpy(getstart(),strlen(getstart())+1,src.getstart,strlen(src.getstart)+1);
		_str = src._str;
		getcount()++;
//		int i = 0;
//		int len = strlen(src._str) + 1;
//		for (i; i<len; i++)
//		{
//			_str[i] = src._str[i];
//		//	_size++;
//		}
////		_str[i] = '\0';
	}

	~Mstring()
	{
		if (NULL == _str)
		{
			return;
		}
		delete[]_str;
		_str = NULL;
	}



	Mstring operator=(const Mstring &src)
	{
		if (&src == this)
		{
			return *this;
		}

		delete[]_str;

		_str = new char[strlen(src._str) + 1];
		int i = 0;
		int len = strlen(src._str);
		for (i; i<len; i++)
		{
			_str[i] = src._str[i];
		//	_size++;
		}
		_str[i] = '\0';
		return *this;
	}

	Mstring(const Mstring &str1, const Mstring &str2)
	{
		if (str1._str == NULL && str2._str == NULL)
		{
			_str = NULL;
			return;
		}
		_str = new char[strlen(str1._str) + strlen(str2._str) + 1];
		memcpy_s(_str,strlen(str1._str)+1,str1._str,strlen(str1._str)+1);
		strcat_s(_str, strlen(str1._str) + strlen(str2._str) + 1,str2._str);
	}


	Mstring operator+(const Mstring &src)
	{
		return Mstring(*this,src);
	}

	bool operator>(const Mstring &src)const
	{
		if ((strcmp(src._str, _str)) > 0)
		{
			return false;
		}
		return true;
	}

	bool operator<(const Mstring &src)const
	{
		if ((strcmp(src._str, _str)) > 0)
		{
			return true;
		}
		return false;
	}

	bool operator==(const Mstring &src)const
	{
		if ((strcmp(src._str, _str)) == 0)
		{
			return true;
		}
		return false;
	}

	bool operator!=(const Mstring &src)const
	{
		if ((strcmp(src._str, _str)) == 0)
		{
			return true;
		}
		return false;
	}

	char& operator[](int pos)
	{
		return _str[pos];
	}
private:
	char * _str;
	int & getcount()
	{
		return *((int*)_str);
	}

	char * getstart()
	{
		return (_str + 4);
	}
//	int _size;
	friend ostream& operator<<(ostream &out, Mstring&src);
	friend istream& operator>>(istream &in, Mstring&src);
};



ostream& operator<<(ostream &out, Mstring&src)
{
	out << src._str;
	return out;
}

istream& operator>>(istream &in, Mstring&src)
{
	in >> src._str;
	return in;
}


int main()
{
	   
	Mstring arr = "abcd";
	cout << arr << endl;

	Mstring brr;
	brr = arr;
	cout << brr << endl;

	Mstring crr(arr);
	cout << crr << endl;

	cout << arr[2] << endl;

	cout << arr + brr << endl;

	Mstring drr = "abc";
	if (drr > arr)
	{
		cout << "大于" << endl;
	}
	else
	{
		cout << "不大于" << endl;
	}

	if (drr < arr)
	{
		cout << "小于" << endl;
	}
	else
	{
		cout << "不小于" << endl;
	}

	if (brr == arr)
	{
		cout << "等于" << endl;
	}
	else
	{
		cout << "不等于" << endl;
	}

	if (brr != arr)
	{
		cout << "不等于" << endl;
	}
	else
	{
		cout << "等于" << endl;
	}
}









