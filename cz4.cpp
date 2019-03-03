#include<stdio.h>
#include<string.h>
//问题
//1、没有问题，他计算出来是3*x^2-4x+6
//7、有错误，while循环没有加大括号则不能每次都把输入的内容打印出来


//1、平方根
/*void Square(int n)
{
	float i = 1;
	float tmp = 1;
	while(1)
	{
		i=(tmp+n/tmp)/2;

		if(tmp == i)
		{
			printf("平方根为%f\n",tmp);

			break;
		}
		else
		{
			tmp = i;

			printf("%f\n",tmp);
		}
	}
}
int main()
{
	Square(9);

	return 0;
}*/


//6、在一个字符串中提取一个子字符串
/*int Substr(char dst[], char src[], int start, int len)
{
	int len1 = strlen(src) + 1; 

	int i;

	if(start > len1 || start < 0 || len < 0)
	{
		dst[1] = '\0';
	}
	else
	{
		for(i=0; src[i]!='\0'; i++)
		{
			if(i >= len)
			{
				break;
			}
			else
			{
				dst[i] = src[(start++)-1];
			}
		}
		dst[i] = '\0';
	}
	return strlen(dst)+1;
}
int main()
{
	char src[] = "abcdef";
	
	char dst[128];

	int start = 2;

	int len = 3;

	printf("%d\n",Substr(dst, src, start, len));

	printf("%s\n",dst);

	return 0;
}*/


//7、删掉字符串中多余的空格，如果是一个空格就删掉，如果是多个空格就变为一个空格
void Deblank(char string[])
{
	int n;

	for(int i=0; string[i]!='\0'; i++)
	{
		if(string[i] == ' ' && string[i+1] == ' ')
		{
			for(n=i+1; string[n]!='\0'; n++)
			{
				string[n-1] = string[n];
			}
			string[n-1] = '\0';

			i -= 1;
		}
	}
	printf("%s\n",string);
}
int main()
{
	char string[] = "h e llo     wo rld";

	Deblank(string);

	return 0;
}