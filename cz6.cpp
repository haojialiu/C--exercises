/*
4 、    程序访问空指针会程序崩溃
5 、     有，offset是变量，而3是个常量    常量可以直接以数形式编译进指令，变量还需要访问内存，所以常量的效率高
7 、

|------------------------整型------------------|--------指针-------------------|
表达式------------右值--------左值地址---------|-------右值--------左值地址
a.m               1008           1016                  1008           1016
b.v + 1           1037          illegal                1040           illegal
c.j – 4          0996          illegal                0984           illegal
d.a – d           12           illegal                 3             illegal
e.v – w          - 24          illegal                - 6            illegal
f. &c             1056          illegal                1056           illegal
g. &e + 1         1036          illegal                1036           illegal
h. &o – 4        1080          illegal                1080           illegal
i. &(f + 2)      illegal        illegal                illegal        illegal
j. *g            illegal        illegal                1000            1064
k. *k + 1        illegal        illegal                1045           illegal
l. *(n + 1)      illegal        illegal                1012            1060
m. *h – 4       illegal        illegal                1076           illegal
n. *(u – 4)     illegal        illegal               1056            1076
o. *f – g       illegal        illegal               illegal         illegal
p. *f - *g       illegal        illegal               52              illegal
q. *s - *q       illegal        illegal               - 80            illegal
r. *(r – t)     illegal        illegal               illegal         illegal
s.y > i            0            illegal               0               illegal
t.y > *i         illegal        illegal               illegal         illegal
u. *y > *i       illegal        illegal                 1             illegal
v. **h           illegal        illegal               1080            1020
w.c++              1076         illegal               1076            illegal
x. ++c             1077         illegal               1080            illegal
y. *q++          illegal        illegal               1080            1072
z. (*q)++        illegal        illegal               1080            illegal
aa. *++q         illegal        illegal               1056            1076
bb. ++*q         illegal        illegal               1081            illegal
cc. *++*q        illegal        illegal               illegal         illegal
dd. ++*(*q)++    illegal        illegal               1021            illegal
*/ 



#include<stdio.h>
#include<string.h>
//2、把字符串str中出现substr字符串的内容删掉
/*int Del_substr(char *str,char const *substr)
{
	char *p;

	char const *pp;

	while(*str != '\0')
	{
		p = str;
		pp = substr;
		while(*pp != '\0')				//确定str字符串中含有substr
		{	
			if(*pp == *p)
			{
				pp++;
				p++;
			}
			else
			{
				break;
			}
		}
		if(*pp == '\0')					//若等于\0则证明上面的循环顺序进行完成则str字符串中含有substr
		{
			while(*str != '\0')				//把和substr一样的字符串的值删掉
			{
				*str = *p;
				str++;
				p++;
			}

			return 1;
		}
		
		str++;
	}
	return 0;
}
int main()
{
	char str[] = "abcdefg";

	char *substr = "cdf";

	printf("%d\n",Del_substr(str,substr));

	printf("%s\n",str);

	return 0;
}*/



//3、把字符串反向排序
/*void Reverse_string(char *string)
{
	char *p;

	char tmp;

	p = string;

	while(*p != '\0')
	{
		p++;
	}
	while(string < p)
	{
		tmp = *string;

		*string = *(p-1);

		*(p-1) = tmp;

		string++;

		p--;
	}
}
int main()
{
	char string[] = "abcdefg";

	Reverse_string(string);

	printf("%s\n",string);

	return 0;
}*/



//5和6想不出来了