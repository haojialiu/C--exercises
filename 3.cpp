#include<stdio.h>
//10���������������ֵ�� p=(1+r)^n
/*double Count(int n)
{
double p=1;
double r=0.09;

for(int i=1;i<=n;i++)
{
	p=p*(1+r);
}
return p;
}
int main()
{
	printf("%f\n",Count(10));
	return 0;
}*/



/*int main()
{
char c1,c2;
c1=97;
c2=98;
printf("c1=%c,c2=%c\n",c1,c2);
printf("c1=%d,c2=%d\n",c1,c2);
return 0;
}*/
//(1)��������c1=a,c2=b��c1=97,c2=98
//   ��Ϊ%c������ַ���%d��������εģ�a��b��ASCII��ֵ�ֱ���97��98

/*int main()
{
char c1,c2;
c1=197;
c2=198;
printf("c1=%c,c2=%c\n",c1,c2);
printf("c1=%d,c2=%d\n",c1,c2);
return 0;
}*/
//��2��������Ϊc1=?c2=? c1=-59,c2=-58
//     ��Ϊchar��ȡֵ��Χ��-126~127֮�䣬197��198�Ķ������Ǹ���û�ж�Ӧ��ASCII��ֵ�����ǣ�

/*int main()
{
int c1,c2;
c1=97;
c2=98;
printf("c1=%c,c2=%c\n",c1,c2);
printf("c1=%d,c2=%d\n",c1,c2);
return 0;
}*/
//(3)������Ϊc1=ac2=b c1=97,c2=98
//   ��Ϊ%c������ַ���%d��������ε�a��b��ASCII��ֵ�ֱ���97��98


//����һ��С��1000���������ƽ����
/*#include<math.h>
double Sqrt(double n)
{
	double a;
	if(n <=1000 && n >=1)
  {
	  a=(int)sqrt(n);
  }
	else
		return false;
	return a;
}
int main()
{
     printf("root=%f\n",Sqrt(83));
	 printf("root=%f\n",Sqrt(1001));
	 printf("root=%f\n",Sqrt(49));
	 return 0;
}*/

//�������������ֵ
/*int Solve(int x)
{
	int y;
	if(x<1)
	{
		y=x;
	}
	else if(x>=1 && x<10)
		{
			y=2*x-1;
		}
		else
		{
			y=3*x-11;
		}
	return y;
}
int main()
{
	printf("y=%d/n",Solve(2));
}
*/


//��һ���ٷ��Ƴɼ����ֵȼ�
/*int Rank(int n)
{
	char a;

	if(n>90)
	{
	  a='A';
	}
	else if(80<=n && n<=89)
	{
	 a='B';
	}
	else if(n>=70 && n<=79)
	{ 
	 a='C';
	}
	else if(n>=60 && n<=69)
	{
	 a='D';
	}
    else
		a='E';
	  return a;
}
int main()
{
	printf("%c\n",Rank(92));
	printf("%c\n",Rank(82));
	printf("%c\n",Rank(72));
	printf("%c\n",Rank(62));
	printf("%c\n",Rank(52));
	return 0;
}*/

//��һ��������5λ�����������Ǽ�λ��
/*int Number(int n)//��λ��
{
	int i;
	if(n>9999)
	{
		i=5;
	}
	else if(n>999)
	{
		i=4;
	}
	else if(n>99)
	{
		i=3;
	}
	else if(n>9)
	{
		i=2;
	}
	else
		i=1;
	return i;
}
void Amount(int n)//��ÿһλ��
{
	int a,b,c,d,e;
	int i=Number(n);
	if(i==5)
	{
		a=n/10000;
		b=(n/1000)%10;
		c=((n/100)%100)%10;
		d=(((n/10)%1000)%100)%10;
		e=(((n%10000)%1000)%100)%10;

	}
	else if(i==4)
	{
	a=0;
	b=n/1000;
	c=(n/100)%10;
	d=((n/10)%100)%10;
	e=((n%1000)%100)%10;
	}
	else if(i==3)
	{
	a=0;
	b=0;
	c=n/100;
	d=(n/10)%10;
	e=(n%100)%10;
	}
	else if(i==2)
	{
	a=0;
	b=0;
	c=0;
	d=n/10;
	e=n%10;
	}
	else
	{
	a=0;
	b=0;
	c=0;
	d=0;
	e=n;
	}
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d%d%d%d%d\n",e,d,c,b,a);
}

int main()
{
	printf("����һ��%dλ��\n",Number(12345));
	Amount(12345);
	return 0;
}
*/


//����
/*void LiRun(int i)
{
	int n=i/100000;
	switch(n)
	{
	case 0:
	case 1:
		printf("%f\n",i*0.1);
		break;
	case 2:
		printf("%f\n",100000*0.1+(i-100000)*0.075);
		break;
	case 3:
	case 4:
		printf("%f\n",100000*0.1+100000*0.075+(i-200000)*0.05);
		break;
	case 5:
	case 6:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03);
		break;
	case 7:
	case 8:
	case 9:
	case 10:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015);
		break;
	default:
		printf("%f\n",100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01);
		break;
	}
}

int main()
{
	LiRun(10256);
	LiRun(125844);
	LiRun(254865);
	LiRun(1025684);
return 0;
}*/

/*double LiRun(int i)
{
	double a;
	if(i<=100000)
	{
		a=i*0.1;
	}
	else if(i>100000&&i<=200000)
	{
		a=100000*0.1+(i-100000)*0.075;
	}
	else if(i>200000&&i<=400000)
	{
		a=100000*0.1+100000*0.075+(i-200000)*0.05;
	}
	else if(i>400000&&i<=600000)
	{
		a=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;
	}
	else if(i>600000&&i<=1000000)
	{
		a=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
	}
	else
	{
		a=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	}
	return a;
}

int main()
{
	printf("%f\n",LiRun(10256));
	printf("%f\n",LiRun(125844));
	printf("%f\n",LiRun(254865));
	printf("%f\n",LiRun(1025684));
return 0;
}*/

