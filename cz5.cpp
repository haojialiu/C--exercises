/*
����
2��һ�������ֽ��-10��-5��-2      ������Ϊstatic�������������ڣ�����������ȫ����������̬�ֲ�����������"static int counter=1"������ÿ�ζ�ִ�У�
   Ȼ��������Ĳ�ͬ���ú�����˳��û�й涨
10��a.b		-25    
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

11��
   a.a+(b/c)
		a+b/c  
		�ȼ���b/c�ڼ���a����b/c��ֵ
   b.(a+b)/c
		�ȼ���������a+b�ڼ���a+b��ֵ��c
   c.��a*b��%6
		a*b%6   
		�ȼ���a*b��ֵ�������ֵ%6
   d.a*(b%6)
		�ȼ��������ڵ�ֵb%6�ڼ���a*�����ڵ�ֵ
   e.(a+b)==6
		a+b==6
		�ȼ���a+b��ֵ�ٱȽ�a+b��6�Ƿ����
   f.!((a>='0')&&(a<='9'))
		!(a>='0'&&a<='9')
		�ȼ����>=��<=�ڼ���������ڵ�ֵ�ͣ�
   g.((a&0*2f)==(b|1))&&((-c)>0)
		(a&0*2f)==(b|1)&&-c>0
		�ȼ����������ŵ�ֵ�ڼ���-c>0�ټ���==
   h.((a<<b)-3)<(b<<��a+3))
		(a<<b)-3<b<<a+3
		�ȼ������ŵ�ֵ�ټ���-��+�ټ���<<�ټ���<
   i.~(a++)
		~a++
		�ȼ���~�ټ���++
   j.((a==2)||(a==4))&&((b==2)||(b==4))
		(a==2||a==4)&&(b==2||b==4)
		�ȼ��������е�==Ȼ���||�ټ���&&
   k.(a&b)^(a|b)
		a&b^(a|b)
		�ȼ��������е�|�ټ���&����^
   l.(a+(b+c))
		a+(b+c)
		�ȼ��������е�+�ټ����������+
*/




#include<stdio.h>


//3�����������ֵ�������
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
//λ����
/*unsigned character_offset(unsigned bit_number)				//ȷ����λ�������еĵڼ���Ԫ��
{
	return bit_number / CHAR_BIT;							//CHAR_BIT��ʾ�������һ�����Ǽ���λ         
}

unsigned bit_offset(unsigned bit_number)					//ȷ������������������Ǹ�Ԫ�صĵڼ�λ
{
	return bit_number % CHAR_BIT;
}

void set_bit(char bit_array[], unsigned bit_number)			//��������λ����Ϊ1
{
	bit_array[character_offset(bit_number)] |= 1 << bit_offset(bit_number);
	printf("%d\n", bit_array[character_offset(bit_number)]);
}

void clear_bit(char bit_array[], unsigned bit_number)		//��ָ��λ����
{
	bit_array[character_offset(bit_number)] &= ~(1 << bit_offset(bit_number));
	printf("%d\n", bit_array[character_offset(bit_number)]);
}


void assign_bit(char bit_array[], unsigned bit_number, int value)		//�������������0���ָ��λ����
{
	if (value != 0)
		set_bit(bit_array, bit_number);
	else
		clear_bit(bit_array, bit_number);
}

int test_bit(char bit_array[], unsigned bit_number)						//���ָ��λΪ����0�ͷ�������򷵻ؼ�
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


//��ȡ����������������
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