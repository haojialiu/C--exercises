/*
1、
ints		100			ip		112
ints[4]		50			ip[4]	80
ints+4		116			ip+4	128
*ints+4		14			*ip+4	44
*(ints+4)	50			*(ip+4)	80
ints[-2]	错			ip[-2]	20
&ints		100			&ip		错
&ints[4]	116			&ip[4]	128
&ints+4		420			&ip+4	错
&ints[-2]	错			&ip[-2]	104

2、
不相等array[i+j]是给这个数组的下标加i，而i+j[array]是给数组元素加i

8、
a表示一个指针，a指向数组的首地址然后给这个地址加上12，然后间接访问取得这个地址上的内容
b表示一个数组名，然后给这个地址加上12间接访问得到值


10、
int array[4][2]

表达式			值
array			1000
array+2			1008
array[3]		1012
array[2]-1		1006
&array[1][2]	1008
&array[2][0]	1008


11、
int array[4][2][3][6]

表达式				值			x类型
array				1000		int (*x)[2][3][6]
array+2				1288		int (*x)[2][3][6]
array[3]			1432		int (*x)[3][6]
array[2]-1			1216		int (*x)[3][6]
array[2][1]			1360		int (*x)[6]
array[1][0]+1		1168		int (*x)[6]
array[1][0][2]		1192		int *x
array[0][1][0]+2	1080		int *x
array[3][1][2][5]	随机		int x
&array[3][1][2][5]	1572		int *x

13、
int array[4][5][3]

表达式					下标表达式
*array					array[0]
*(array+2)				array[2]
*(array+1)+4			array[1]+4
*(*(array+1)+4)			array[1][4]
*(*(*(array+3)+1)+2)	array[3][1][2]
*(*(*array+1)+2)		array[0][1][2]
*(**array+2)			array[0][0][2]
**(*array+1）			array[0][1][0]
***array				array[0][0][0]


14、
如果i是一个指向整形的指针就没错（?有点不懂a[2,3]）

15、
第二条好，因为第一条前半部分判断则程序会崩溃，而第二条则不会崩溃因为先判断下标是否超出了长度

18、
void function(int (*array)[2][5]);
*/
#include<stdio.h>
//1、给一个四维数组的特定位置赋值
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



//3、判断单位矩阵（主对角线值为1，其余为0）
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
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}

	return 0;
}*/




//4、判断单位矩阵（主对角线值为1，其余为0）参数给指针
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
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}

	return 0;
}*/




//5、矩阵乘法
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

