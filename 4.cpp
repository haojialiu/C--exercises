#include<stdio.h>
//m和n的最大公约数和最小公倍数
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
	printf("最大公约数为%d\n",Gongyue(6,9));

	printf("最小公倍数为%d\n",Gongbei(6,9));

	return 0;
}*/



//判断字符串英文，数字，空格，其他字符数
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
		printf("字母数为%d个\n",ZM);
		}
		else if(n ==' ')
		{
		KG ++;
		printf("空格数为%d个\n",KG);
		}
		else if('0' <= n && '9'>= n)
		{
		SZ ++;
		printf("数字数为%d个\n",SZ);
		}
		else
		{
		QT ++;
		printf("其他字符为%d个\n",QT);
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


//水仙花数
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


//一个数的因子之和等于这个数
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


//2/1+3/2+5/3+8/5.....前20项的和
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



//一个球从100米高度自由落下，每次反弹回原来一半高度，再落下反弹。求第10次落下球经历多少米。第10次反弹多高。
/*int High(int n)
{
	float a = 100;

	float b = 100;

	for(int i = 1;i <= n;i++)
	{
		b += a;

		a = a/2;
	}
	printf("球经历了%f米\n",b);

	printf("第10次反弹%f米\n",a);

	return 0;
}

int main()
{

	High(10);

	return 0;
}*/


//猴子吃桃第一天有若干桃，每一天都吃桃子的一半多一个，第10天只剩一个桃子，问第一天有多少桃子。
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
	printf("第一天有%d个桃子\n",Sum(10));

	return 0;
}*/



//甲队A B C三人，乙队X Y Z三人，A不和X比，C不和X Z比，求比赛名单。
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
							printf("A和%c\nB和%c\nC和%c\n",d,e,f);
						}
					}
				}
			}
		}
	}
	return 0;
}*/