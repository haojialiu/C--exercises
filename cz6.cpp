/*
4 ��    ������ʿ�ָ���������
5 ��     �У�offset�Ǳ�������3�Ǹ�����    ��������ֱ��������ʽ�����ָ���������Ҫ�����ڴ棬���Գ�����Ч�ʸ�
7 ��

|------------------------����------------------|--------ָ��-------------------|
���ʽ------------��ֵ--------��ֵ��ַ---------|-------��ֵ--------��ֵ��ַ
a.m               1008           1016                  1008           1016
b.v + 1           1037          illegal                1040           illegal
c.j �C 4          0996          illegal                0984           illegal
d.a �C d           12           illegal                 3             illegal
e.v �C w          - 24          illegal                - 6            illegal
f. &c             1056          illegal                1056           illegal
g. &e + 1         1036          illegal                1036           illegal
h. &o �C 4        1080          illegal                1080           illegal
i. &(f + 2)      illegal        illegal                illegal        illegal
j. *g            illegal        illegal                1000            1064
k. *k + 1        illegal        illegal                1045           illegal
l. *(n + 1)      illegal        illegal                1012            1060
m. *h �C 4       illegal        illegal                1076           illegal
n. *(u �C 4)     illegal        illegal               1056            1076
o. *f �C g       illegal        illegal               illegal         illegal
p. *f - *g       illegal        illegal               52              illegal
q. *s - *q       illegal        illegal               - 80            illegal
r. *(r �C t)     illegal        illegal               illegal         illegal
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
//2�����ַ���str�г���substr�ַ���������ɾ��
/*int Del_substr(char *str,char const *substr)
{
	char *p;

	char const *pp;

	while(*str != '\0')
	{
		p = str;
		pp = substr;
		while(*pp != '\0')				//ȷ��str�ַ����к���substr
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
		if(*pp == '\0')					//������\0��֤�������ѭ��˳����������str�ַ����к���substr
		{
			while(*str != '\0')				//�Ѻ�substrһ�����ַ�����ֵɾ��
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



//3�����ַ�����������
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



//5��6�벻������