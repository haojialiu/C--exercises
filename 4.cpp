#include<stdio.h>
//m��n�����Լ������С������
/*int Gongyue(int m,int n)
{
	for(int i=n;;i--)
	{
		if(n%i==0 && m%i==0)

			return i;
	}
}
int Gongbei(int m,int n)
{
	for(int i=n;;i++)
	{
		if(i%n==0 && i%m==0)

			return i;
	}
}
int main()
{
	printf("���Լ��Ϊ%d\n",Gongyue(6,9));

	printf("��С������Ϊ%d\n",Gongbei(6,9));

	return 0;
}*/



//�ж��ַ���Ӣ�ģ����֣��ո������ַ���
/*int main()
{
	int ZM = 0;
	int SZ = 0;
	int KG = 0;
	int QT = 0;
	char n;
	while ((n =getchar())='\n')
	{	
		if('a' <= n && n <='z'|| 'A' <= n && 'Z' >=n)
		{
        ZM ++;
		printf("��ĸ��Ϊ%d��\n",ZM);
		}
		else if(n ==' ')
		{
		KG ++;
		printf("�ո���Ϊ%d��\n",KG);
		}
		else if('0' <= n && '9'>= n)
		{
		SZ ++;
		printf("������Ϊ%d��\n",SZ);
		}
		else
		{
		QT ++;
		printf("�����ַ�Ϊ%d��\n",QT);
		}
	}
	return 0;
}*/



//a+aa+aaa+aaaa
/*int Sum(int n,int a)                           
{
	int b=a;

	int tmp=a;

	for(int i=2;i<=n;i++)
	{
		a=a*10+b;

		tmp+=a;
	}
	return tmp;
}

int main()
{
	printf("%d\n",Sum(2,3));

	printf("%d\n",Sum(3,2));

	printf("%d\n",Sum(3,3));

	return 0;
}*/



//1!+2!+3!+....+20!
/*int Factorial(int n)
{
	int a = 1;

	int b = 0;

	for(int i = 1;i <= n;i++)
	{
		a *= i;

		b += a;
	}
	return b;
}
int main()
{
	printf("%d\n",Factorial(20));

	return 0;
}*/


//ˮ�ɻ���
/*int main()
{
	int a;
	int b;
	int c;
	for(int i = 100;i <= 999;i ++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(((a*a*a)+(b*b*b)+(c*c*c)) == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/


//һ����������֮�͵��������
/*int main()
{

	int n=1000;

	for(int i=1;i <= n;i++)
	{
		int sum=0;

		for(int m=1;m <i;m++)
		{
			if(i%m == 0)

				sum +=m; 
		}
		if(sum == i)

			printf("%d\n",i);
	}
}*/


//2/1+3/2+5/3+8/5.....ǰ20��ĺ�
/*float Gongshi()
{
	float a=1;

	float b=2;

	float c;

	float sum=0;

	for(int i=1;i<=20;i++)
	{
	sum+=b/a;

	c=b;

	b+=a;

	a=c;
	}
	return sum;
}

int main()
{
	printf("%f",Gongshi());
	return 0;
}*/



//һ�����100�׸߶��������£�ÿ�η�����ԭ��һ��߶ȣ������·��������10���������������ס���10�η�����ߡ�
/*int High(int n)
{
	float a = 100;

	float b = 100;

	for(int i = 1;i <= n;i++)
	{
		b += a;

		a = a/2;
	}
	printf("������%f��\n",b);

	printf("��10�η���%f��\n",a);

	return 0;
}

int main()
{

	High(10);

	return 0;
}*/


//���ӳ��ҵ�һ���������ң�ÿһ�춼�����ӵ�һ���һ������10��ֻʣһ�����ӣ��ʵ�һ���ж������ӡ�
/*int Sum(int n)
{
	int a = 1;

	for(int i = n;i > 1;i--)
	{
		a = (a+1)*2;
	}
	return a;
}
int main()
{
	printf("��һ����%d������\n",Sum(10));

	return 0;
}*/



//�׶�A B C���ˣ��Ҷ�X Y Z���ˣ�A����X�ȣ�C����X Z�ȣ������������
/*int main()
{
	char d;

	char e;

	char f;

	for (d = 'x'; d <= 'z'; d++)
	{
		for (e = 'x'; e <= 'z'; e++)
		{
			if (d != e)
			{
				for (f = 'x'; f <= 'z'; f++)
				{
					if (d != f && e != f)
					{
						if (d != 'x' && f != 'x' && f != 'z')
						{
							printf("A��%c\nB��%c\nC��%c\n",d,e,f);
						}
					}
				}
			}
		}
	}
	return 0;
}*/