#include<stdio.h>
#include<string.h>
//����
//1��û�����⣬�����������3*x^2-4x+6
//7���д���whileѭ��û�мӴ���������ÿ�ζ�����������ݴ�ӡ����


//1��ƽ����
/*void Square(int n)
{
	float i = 1;
	float tmp = 1;
	while(1)
	{
		i=(tmp+n/tmp)/2;

		if(tmp == i)
		{
			printf("ƽ����Ϊ%f\n",tmp);

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


//6����һ���ַ�������ȡһ�����ַ���
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


//7��ɾ���ַ����ж���Ŀո������һ���ո��ɾ��������Ƕ���ո�ͱ�Ϊһ���ո�
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