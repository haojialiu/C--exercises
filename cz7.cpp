/*
2������ԭ�Ͳ��Ǳ�����һ��ȱ�㣬��Ϊ��ȷ�������Ĳ����Ƿ���ȷ

3������ֵ�����뺯�����Ͳ�ͬ���ѷ���ֵת���ɺͺ�������ֵ������ͬ�����ͷ���

7���������������鳤�ȱ�10��ĵ��ú���������������ܲ���������������ֵ����������鳤��С��10ʱ���ô˺�����ᷢ��Խ�硣

9�������˴�����������Ϊ��ֻ��Ҫ����������ļ��Ϳ��Եõ����������ʵ�ֶ�����ÿ�ζ�д����δ���

10��#include <stdio.h>

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
//1�����õݹ�����ܶ���ʽ
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


//2 �����õݹ������Լ��
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




//4�����һ��������������Ŀ�Ĳ��������������ǵ����ֵ
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




//5����дһ���򻯵�printf

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