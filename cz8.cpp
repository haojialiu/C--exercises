/*
1��
ints		100			ip		112
ints[4]		50			ip[4]	80
ints+4		116			ip+4	128
*ints+4		14			*ip+4	44
*(ints+4)	50			*(ip+4)	80
ints[-2]	��			ip[-2]	20
&ints		100			&ip		��
&ints[4]	116			&ip[4]	128
&ints+4		420			&ip+4	��
&ints[-2]	��			&ip[-2]	104

2��
�����array[i+j]�Ǹ����������±��i����i+j[array]�Ǹ�����Ԫ�ؼ�i

8��
a��ʾһ��ָ�룬aָ��������׵�ַȻ��������ַ����12��Ȼ���ӷ���ȡ�������ַ�ϵ�����
b��ʾһ����������Ȼ��������ַ����12��ӷ��ʵõ�ֵ


10��
int array[4][2]

���ʽ			ֵ
array			1000
array+2			1008
array[3]		1012
array[2]-1		1006
&array[1][2]	1008
&array[2][0]	1008


11��
int array[4][2][3][6]

���ʽ				ֵ			x����
array				1000		int (*x)[2][3][6]
array+2				1288		int (*x)[2][3][6]
array[3]			1432		int (*x)[3][6]
array[2]-1			1216		int (*x)[3][6]
array[2][1]			1360		int (*x)[6]
array[1][0]+1		1168		int (*x)[6]
array[1][0][2]		1192		int *x
array[0][1][0]+2	1080		int *x
array[3][1][2][5]	���		int x
&array[3][1][2][5]	1572		int *x

13��
int array[4][5][3]

���ʽ					�±���ʽ
*array					array[0]
*(array+2)				array[2]
*(array+1)+4			array[1]+4
*(*(array+1)+4)			array[1][4]
*(*(*(array+3)+1)+2)	array[3][1][2]
*(*(*array+1)+2)		array[0][1][2]
*(**array+2)			array[0][0][2]
**(*array+1��			array[0][1][0]
***array				array[0][0][0]


14��
���i��һ��ָ�����ε�ָ���û��?�е㲻��a[2,3]��

15��
�ڶ����ã���Ϊ��һ��ǰ�벿���ж���������������ڶ����򲻻������Ϊ���ж��±��Ƿ񳬳��˳���

18��
void function(int (*array)[2][5]);
*/
#include<stdio.h>
//1����һ����ά������ض�λ�ø�ֵ
/*unsigned char char_value[3][6][4][5] ={
    {
        0
    },
    {
        {
            0
        },
        {
            {0},
            {0,' '},
        },
        {
            {0},
            {0},
            {0,0,0,'A'},
            {0,0,0,0,'x'}
        },
        {
            {0},
            {0},
            {0,0,0xf3},
        },
        {
            {0},
            {0},
            {0,0,0,'\n'}
        },
        {
            0
        }
    },
    {
        {0},
        {
            {0},
            {0,0,0320},
        },
        {
            {0},
            {0,'0'},
            {0,0,'\''},
            {0,'\121'}
        },
        {
            0
        },
        {
            {0},
            {0},
            {0},
            {0,0,'3',3}
        },
        {
            {0},
            {0},
            {0},
            {0,0,0,0,125}
        }
    }
};
int main()
{
    printf("%c ",char_value[1][2][2][3]);
    printf("%d ",char_value[1][1][1][1]);
    printf("%x\n",char_value[1][3][2][2]);
    printf("%c ",char_value[2][4][3][2]);
    printf("%d ",char_value[1][4][2][3]);
    printf("%x\n",char_value[2][2][3][1]);
    printf("%d ",char_value[2][4][3][3]);
    printf("%d ",char_value[2][5][3][4]);
    printf("%c\n",char_value[1][2][3][4]);
    printf("%o ",char_value[2][1][1][2]);
    printf("%c ",char_value[2][2][2][2]);
    printf("%c\n",char_value[2][2][1][1]);
}*/



//3���жϵ�λ�������Խ���ֵΪ1������Ϊ0��
/*bool identity_matrix(int matrix[][10])
{
    int i,j;

    for(i = 0; i < 10; i++)
	{
        for(j = 0; j < 10; j++)
		{
            if(i == j)
			{
                if(matrix[i][j] != 1)

                    return false;
            }
			else
			{
                if(matrix[i][j] != 0)

                    return false;
            }
        }
	}
    return true;
}
int main()
{
	int matrix[10][10]={0};

	for(int i = 0; i<10; i++)
	{
		for(int n = 0; n<10; n++)
		{
			if(i == n)
			{
			matrix[i][n] = 1;
			}
			else
			{
				matrix[i][n] = 0;
			}
		}
	}
	if(identity_matrix(matrix))
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}

	return 0;
}*/




//4���жϵ�λ�������Խ���ֵΪ1������Ϊ0��������ָ��
/*bool identity_matrix(int *matrix,int n)
{
    int row;

    int col;

    for(row = 0; row < n; row++)
	{
        for(col = 0; col < n; col++)
		{
            if(*matrix++ != (row == col))

                return false;
        }
    }
    return true;
}

int main()
{
	int matrix[10][10]={0};

	for(int i = 0; i<10; i++)
	{
		for(int n = 0; n<10; n++)
		{
			if(i == n)
			{
			matrix[i][n] = 1;
			}
			else
			{
				matrix[i][n] = 0;
			}
		}
	}

	int *p = matrix[0];

	if(identity_matrix(p,10))
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}

	return 0;
}*/




//5������˷�
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
    int i,j;
    for(i = 0; i < x; i++)
	{
        for(j = 0; j < z; j++)
		{
            int k;
            int *p1 = m1 + i * y;
            int *p2 = m2 + j;
            for(k = 0; k < y; k++)
			{
                *r += *p1 * *p2;
                p1++;
                p2 += z;
            }
            r++;
        }
    }
}
void main(){
    int a[3][2] = {{2, -6}, {3, 5}, {1, -1}};
    int b[2][4] = {{4, -2, -4, -5}, {-7, -3, 6, 7}};
    int c[3][4] = {0};
	int *m1 = a[0];
	int *m2 = b[0];
	int *r = c[0];
    matrix_multiply(m1,m2,r,3,2,4);
    for(int i = 0; i < 3; i++)
	{
        for(int j = 0; j < 4; j++)
		{
            printf("%d ",c[i][j]);
		}
        printf("\n");
    }
}

