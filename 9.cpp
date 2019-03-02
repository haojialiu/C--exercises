#include<stdio.h>

//定义一个结构体变量包括日月年，计算该日在本年中的那一天
/*typedef struct date                                          //定义一个结构体包括日月年
{
	int year;

	int month;

	int day;
}S_date;

int Count(int y,int m,int d)
{
	int arr[] = {0,31,59,90,120,151,181,212,243,273,304,334}; //某月以前月份总天数arr[0]表示一月以前月份的天数

	int sum = 0;

	for(int i=1; i<=12; i++)                                  //循环判断计算这个日期前月份的天数
	{
		if(i == m)
		{
			sum = arr[i-1];
		}
	}
	sum = sum + d;                                            //日期前月份的天数加某天天数等于总天数

	if(y%400==0||(y%4==0&&y%100!=0))                          //判断是否为闰年
	{
		if(m > 2)                                             //如果是闰年刚好月份大于二月的话则要给总天数加一
		{
			sum++;
		}
	}
	return sum;
}

int main()
{
	S_date stu = {2018,4,10};                                //结构体类型定义变量

	printf("%d\n",Count(2018,4,10));

	return 0;
}*/



//写一个打印函数，打印一个学生的成绩数组，数组中有5个学生的数据记录包括num,name,score[3]用主函数输入这些记录用打印函数输出
/*typedef struct record
{
	char num[10];

	char name[20];

	int score[3];
}S_record;

void print(S_record stu[])
{
	for(int i=0; i<5; i++)
	{
		printf("%s,%s,%d,%d,%d\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
	}
}

void input(S_record stu[])
{
	stu[0] = {"01","liu1",{74,55,66}};

	stu[1] = {"02","liu2",{53,22,11}};

	stu[2] = {"03","liu3",{30,50,86}};

	stu[3] = {"04","liu4",{40,10,70}};

	stu[4] = {"05","liu5",{80,90,100}};
}

int main()
{
	S_record stu[5];

	input(stu);

	print(stu);

	return 0;
}*/




//有10个学生，每个学生的数据包括学号，姓名，3门课程的成绩，输入十个学生数据，要求输出三门课程总平均成绩，以及最高分的学生数据
/*typedef struct date
{
	char num[10];

	char name[20];

	int score[3];
}S_date;

int mian()
{
	int avg1 = 0;

	int avg2 = 0;

	int avg3 = 0;

	int max;

	S_date stu[10];

	stu[0] = {"01","liu1",{24,56,49}};

	stu[1] = {"02","liu2",{25,56,89}};

	stu[2] = {"03","liu3",{56,85,95}};

	stu[3] = {"04","liu4",{45,12,26}};

	stu[4] = {"05","liu5",{55,66,77}};

	stu[5] = {"06","liu6",{44,22,99}};

	stu[6] = {"07","liu7",{88,65,95}};

	stu[7] = {"08","liu8",{25,45,78}};

	stu[8] = {"09","liu9",{78,59,26}};

	stu[9] = {"10","liu10",{45,85,95}};

	for(int i=0; i<10; i++)
	{
		avg1 = avg2;

		avg2 = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];

		printf("第%d个学生的平均成绩为%d\n",i + 1,avg);

		if(avg1 <= avg2)
		{
			max = i;

			avg3 = avg2;
		}
	}
	printf("%s,%s,%d,%d,%d,%d",stu[max].num,stu[max].name,stu[max].score[0],stu[max].score[1],stu[max].score[2],avg3);

	return 0;
}*/