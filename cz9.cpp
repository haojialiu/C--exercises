#include<stdio.h>

//函数返回的是一个指向ch字符在str字符串中最后一次出现的位置的指针。
/*char *my_strnchr(char const *str,int ch)
{
	char const *p = str;

	while(*str != '\0')
	{
		if(*str == ch)
		{
			p = str;
		}
		str++;
	}
	return (char*)p;
}
int main()
{
	char str[]="abcaca";

	printf("%x\n",&str[0]);
	printf("%x\n",&str[5]);
	printf("%x\n",my_strnchr(str,'a'));

	return 0;
}*/




//8、函数返回的是一个指向ch字符在str字符串中最后一次出现的位置的指针。，但它的第三个参数指定ch字符在str字符串中第几次出现，
/*char *my_strnchr(char const *str, int ch, int which)
{
	char const *p = str;

	int count = 0;

	while(*str != '\0')
	{
		if(*str == ch)
		{
			count++;

			if(count = which)
			{
				p = str;
			}
		}
		str++;
	}
	return (char*)p;
}
int main()
{
	char str[]="abada";

	printf("%x\n",&str[0]);
	printf("%x\n",&str[4]);
	printf("%x\n",my_strnchr(str,'a',2));
	printf("%c\n",*my_strnchr(str,'a',2));
	return 0;
}*/




//函数应该在第一个参数中进行查找，并返回匹配第二个参数所包含的字符的数量。
/*int Count_chars(char const *str, char const *chars)
{
	int count = 0;
	char const *p;
	char const *pp;
	while(*str != '\0')
	{
		p = chars;
		pp = str;
		while(*p != '\0')
		{
			if(*pp == *p)
			{
				*pp++;

				*p++;
			}
			else
			{
				break;
			}
			if(*p == '\0')
			{
				count++;

				str = pp-1;
			}

		}
		str++;
	}
	return count;
}
int main()
{
	char str1[]="abcadabcacabcab";
	char str2[]="abc";
	printf("%d\n",Count_chars(str1,str2));

	return 0;
}*/



//将数字num转成给定的进制radix的字符串，如num=100,radix=16,则转成"64"，radix支持2~36
/*void Myitoa(char *str,int num,int radix)
{
	int a = num / radix;
	int b = num % radix;
	char *p = str;
	char *pp = str;
	char tmp;
	while(a != 0)
	{
		*str++ = b + '0';
		b = a % radix; 
		a /= radix;
	}
	*str = b + '0';

	while(*p != '\0')
	{
		if(*p > '9')
		{
			*p += 39;
		}
		p++;
	}
	p--;
	while(pp < p)
	{
		tmp = *pp;
		*pp = *p;
		*p = tmp;
		p--;
		pp++;
	}
}

int main()
{
	char str[128] = {0};
	//Myitoa(str,10,16);
	//Myitoa(str,10,3);
	//Myitoa(str,10,5);
	//Myitoa(str,100,30);
	Myitoa(str,100,20);
	printf("%s\n",str);
	return 0;
}*/

