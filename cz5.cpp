/*
问题
2、一共有三种结果-10、-5、-2      首先因为static扩充其生命周期，变量储存在全局区声明静态局部变量，所以"static int counter=1"并不会每次都执行，
   然后编译器的不同调用函数的顺序没有规定
10、a.b		-25    
   b.b++	-25 
   c.--a	9    
   d.a/6	1    
   e.a%6	4
   f.b%10	-5
   g.a<<2	40
   h.b>>3	-4
   i.a>b	1
   j.b=a	10
   k.b==a	0
   l.a&b	2
   m.a^b	-19
   n.a|b	-17
   o.-b		24
   p.c&&a	0
   q.c||a	1
   r.b?a:c	10
   s.a+=2	12
   t.b&=20	4
   u.b>>=3	-4
   v.a%=6	4
   w.d=a>b	1
   x.a=b=c=d		3
   y.e=d+(c=a+b)+c	-27
   z.a+b*3	-65
   aa.b>>a-4	-1
   bb.a!=b!=c	1
   cc.a==b==c	1
   dd.d<a<e		1
   ee.e>a>d		0
   ff.a-10>b+10	1
   gg.a&0*1==b&0*1	0
   hh.a|b<<a&b		-25590
   ii.a>c||++a>b	1
   jj.a>c&&++a>b	1
   kk.!~b++			0
   ll.b++&a<=30		1
   mm.a-b,c+=d,e-c	17
   nn.a<<=3>0		20
   00.a<<=d>20?b&&c++:d--	80

11、
   a.a+(b/c)
		a+b/c  
		先计算b/c在计算a加上b/c的值
   b.(a+b)/c
		先计算括号中a+b在计算a+b的值除c
   c.（a*b）%6
		a*b%6   
		先计算a*b的值再用这个值%6
   d.a*(b%6)
		先计算括号内的值b%6在计算a*括号内的值
   e.(a+b)==6
		a+b==6
		先计算a+b的值再比较a+b和6是否相等
   f.!((a>='0')&&(a<='9'))
		!(a>='0'&&a<='9')
		先计算出>=和<=在计算出括号内的值和！
   g.((a&0*2f)==(b|1))&&((-c)>0)
		(a&0*2f)==(b|1)&&-c>0
		先计算两个括号的值在计算-c>0再计算==
   h.((a<<b)-3)<(b<<（a+3))
		(a<<b)-3<b<<a+3
		先计算括号的值再计算-和+再计算<<再计算<
   i.~(a++)
		~a++
		先计算~再计算++
   j.((a==2)||(a==4))&&((b==2)||(b==4))
		(a==2||a==4)&&(b==2||b==4)
		先计算括号中的==然后和||再计算&&
   k.(a&b)^(a|b)
		a&b^(a|b)
		先计算括号中的|再计算&再算^
   l.(a+(b+c))
		a+(b+c)
		先计算括号中的+再计算括号外的+
*/




#include<stdio.h>


//3、二进制数字倒序排列
/*unsigned int reverse_bits(unsigned int value)     
{
		unsigned int tmp = 0;
		int i;
		for (i = 1; i != 0; i <<= 1)
		{
			tmp <<= 1;
			if (value & 1)
				tmp |= 1;
			value >>= 1;
		}
		return tmp;
}

int main()
{
	unsigned int value;
	value = 25;
	printf("%u", reverse_bits(value));
	return 0;
}*/



#include<LIMITS.H>
//位数组
/*unsigned character_offset(unsigned bit_number)				//确定该位是数组中的第几个元素
{
	return bit_number / CHAR_BIT;							//CHAR_BIT表示计算机是一个数是几个位         
}

unsigned bit_offset(unsigned bit_number)					//确定这个数在这个数组的那个元素的第几位
{
	return bit_number % CHAR_BIT;
}

void set_bit(char bit_array[], unsigned bit_number)			//把所给的位设置为1
{
	bit_array[character_offset(bit_number)] |= 1 << bit_offset(bit_number);
	printf("%d\n", bit_array[character_offset(bit_number)]);
}

void clear_bit(char bit_array[], unsigned bit_number)		//把指定位清零
{
	bit_array[character_offset(bit_number)] &= ~(1 << bit_offset(bit_number));
	printf("%d\n", bit_array[character_offset(bit_number)]);
}


void assign_bit(char bit_array[], unsigned bit_number, int value)		//所给数字如果是0则把指定位清零
{
	if (value != 0)
		set_bit(bit_array, bit_number);
	else
		clear_bit(bit_array, bit_number);
}

int test_bit(char bit_array[], unsigned bit_number)						//如果指定位为不是0就返回真否则返回假
{
	if ((bit_array[character_offset(bit_number)] & 1 << bit_offset(bit_number)) != 0)
		return 1;
	else
		return 0;
}

int main()
{
	char bit_array[] = {11,12,13};
	set_bit(bit_array,10);
	clear_bit(bit_array, 10);
	assign_bit(bit_array, 10,1);
	printf("%d\n",test_bit(bit_array, 10));
}*/


//提取浮点数的整数部分
/*int Myftol(double f)         
{
	return (int)f;
}

int main()
{
	double f = 22.222;
	printf("%d",Myftol(f));
	return 0;
}*/