#include<stdio.h>

//����һ���ṹ��������������꣬��������ڱ����е���һ��
/*typedef struct date                                          //����һ���ṹ�����������
{
	int year;

	int month;

	int day;
}S_date;

int Count(int y,int m,int d)
{
	int arr[] = {0,31,59,90,120,151,181,212,243,273,304,334}; //ĳ����ǰ�·�������arr[0]��ʾһ����ǰ�·ݵ�����

	int sum = 0;

	for(int i=1; i<=12; i++)                                  //ѭ���жϼ����������ǰ�·ݵ�����
	{
		if(i == m)
		{
			sum = arr[i-1];
		}
	}
	sum = sum + d;                                            //����ǰ�·ݵ�������ĳ����������������

	if(y%400==0||(y%4==0&&y%100!=0))                          //�ж��Ƿ�Ϊ����
	{
		if(m > 2)                                             //���������պ��·ݴ��ڶ��µĻ���Ҫ����������һ
		{
			sum++;
		}
	}
	return sum;
}

int main()
{
	S_date stu = {2018,4,10};                                //�ṹ�����Ͷ������

	printf("%d\n",Count(2018,4,10));

	return 0;
}*/



//дһ����ӡ��������ӡһ��ѧ���ĳɼ����飬��������5��ѧ�������ݼ�¼����num,name,score[3]��������������Щ��¼�ô�ӡ�������
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




//��10��ѧ����ÿ��ѧ�������ݰ���ѧ�ţ�������3�ſγ̵ĳɼ�������ʮ��ѧ�����ݣ�Ҫ��������ſγ���ƽ���ɼ����Լ���߷ֵ�ѧ������
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

		printf("��%d��ѧ����ƽ���ɼ�Ϊ%d\n",i + 1,avg);

		if(avg1 <= avg2)
		{
			max = i;

			avg3 = avg2;
		}
	}
	printf("%s,%s,%d,%d,%d,%d",stu[max].num,stu[max].name,stu[max].score[0],stu[max].score[1],stu[max].score[2],avg3);

	return 0;
}*/