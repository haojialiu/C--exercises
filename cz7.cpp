/*
2、函数原型并非必须是一个缺点，因为不确定所给的参数是否正确

3、返回值类型与函数类型不同则会把返回值转换成和函数返回值类型相同的类型返回

7、这个函数如果数组长度比10大的调用函数不会出错，但可能不会求出真正的最大值，但如果数组长度小于10时调用此函数则会发生越界。

9、减少了代码数量，因为在只需要调用这个库文件就可以得到这个函数的实现而不必每次都写出这段代码

10、#include <stdio.h>

int Fibonacci(int n);
static int count;
    
int main()
{
    count = 0;
    Fibonacci(11);
    printf("%d\n",count);
    return 0;
}

int Fibonacci(int n)
{
    count++;
    if(n == 1)
        return 1;
    else if(n == 2)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/
#include<stdio.h>
#include<stdarg.h>
//1、利用递归求厄密多项式
/*int	Hermite(int n,int x)
{
	if(n <= 0)
	{
		return 1;
	}
	else if(n == 1)
	{
		return 2*x;
	}
	else
	{
		return 2 * x * Hermite( n-1 ,x ) - (2 * (n - 1) * Hermite( n-2 ,x ));
	}
}
  int main()
  {
	  printf("%d\n",Hermite(3,2));

	  return 0;
  }*/


//2 、利用递归求最大公约数
/*int Gcd(int m,int n)
{
	int r;

	if(m <= 0 || n <= 0)
		return 0;

	r = m % n;

	if(r == 0)
	{
		return n;
	}
	else if(r > 0)
	{
		return Gcd(n,r);
	}
}

int main()
{
	printf("%d\n",Gcd(75,15));

	return 0;
}*/




//4、检测一个函数中任意数目的参数，并返回他们的最大值
/*int Max_list(int n_values,...)
	{
    va_list va;

    va_start(va,n_values);

	int max = va_arg(va,int);

	for(int i=1; i<n_values; i++)
	{
		int m = va_arg(va,int);

		if(m > max)

        max = m;
	}

	va_end(va);

    return max;
}
int main()
{

	printf("%d\n",Max_list(4,1,2,3,4));

	return 0;
}*/




//5、编写一个简化的printf

/*void print_integer(int a)
{
	printf("%d",a);
}
void print_float(float b)
{
	printf("%d",b);
}
void myprintf(char *string,...)
{
    char *p = string;

    va_list va;

    va_start(va,string);
    
    while(*p != '\0')
	{
        if(*p == '%')
		{
			p++;
			if(*p == 'd')
			{
				print_integer(va_arg(va,int));
			}
			else if(*p == 'f')
			{
				print_float(va_arg(va,float));
			}
			else if(*p == 'c')
			{
				putchar(va_arg(va,int));
			}
			else if(*p == 's')
			{
				char *q = va_arg(va,char *);

                while(*q != '\0')

					putchar(*q++);
			}
        }
		else
		{
            putchar(*p);
        }
        p++;
    }
    va_end(va);
}

int main()
{
	myprintf("%d\n",5);

	myprintf("%f\n",5);

	myprintf("%c\n",'a');

	myprintf("%s\n","abc");

	return 0;
}*/