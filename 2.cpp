#include<stdio.h>
//按大小输出abc三个数
/*void Compare(int a,int b,int c)
{
int tmp;

 if(a>b)
   {
	   tmp=a;

	   a=b;

	   b=tmp;
 }
 if(a>c)
   {
	   tmp=a;

	   a=c;

	   c=tmp;
 }    
 if(b>c)
 {
	 tmp=b;

	 b=c;

	 c=tmp;
 }  
   printf("%d,%d,%d\n",a,b,c);
}
int main()
{
	Compare(11,7,8);

	return 0;
}*/



//1到100的和
/*void Sum()
{
	int i;

	int a=0;

	for(i=1;i<=100;i++)
	{
	a+=i;
	}
	printf("%d\n",a);
}
int main()
{
	Sum();
	return 0;
}*/


//一个数能否被3和5整除
/*void Decide(int i)
{

	if(i%3==0 && i%5==0)
	{
	printf("%d可以被3和5整除\n",i);
	}
	else
		printf("%d不可以被3和5整除\n",i);
}
int main()
{
	Decide(15);

	Decide(16);

	Decide(39);

	return 0;
}*/


//100到200之间的素数
/*bool IsPrimer(int n)
{
	
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}

	return true;
}
int main()
{
for(int i=100;i<200;i++)
	{
		if(IsPrimer(i))
		{
			printf("%d\n",i);
		}
	}
}*/


//求最大公约数


/*int Times(int m,int n)
{
	int i;
	for(i=n;i>=1;i--)
	{
		if(n % i==0 && m % i==0)
			return i;
	}
}
int main()
{
	
	printf("最大公约数%d\n",Times(30,40));
	printf("最大公约数%d\n",Times(30,15));
		return 0;
}
*/

//一元二次方程
/*#include<math.h>
void Solve(float a,float b,float c)
{
	float t,x1,x2;

	t=b*b-4*a*c;

	if(t == 0)
	{
		x1=-b+sqrt(t);

		printf("有两个相同根x1=x2=%f\n",x1);
	}
	else
	
	{
		x1=-b+sqrt(t);

		x2=-b-sqrt(t);

		printf("有两个不同的根x1=%f,x2=%f\n",x1,x2);

	}

}
int main()
{
	Solve(1,1,-6);
	Solve(1,-2,1);

	return 0;
}*/