#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include <assert.h>
#include<string.h>

//��һ���ַ����е�Сд��ĸת���ɴ�д��ĸ��Ȼ�������һ�������ļ�test�б��棬�ַ����ã�����
/*int main()
{
	char arr[] = "aAbBcC";

	char brr[100];

	int n = 0;

	for(int i=0; arr[i]!='\0'; i++)
	{
		if(islower(arr[i]))
		{
			brr[n++] = arr[i] - 32;
		}
	}

	brr[n] = '!';

	brr[++n] = '\0';

	FILE *fpa = fopen("test.txt", "wb");

	assert(fpa != NULL);

	fwrite(brr, strlen(brr), 1, fpa);

	fclose(fpa);

	return 0;
}*/


//�����������ļ�A��B�������һ����ĸ������������Ϣ�ϲ�����ĸ˳�����д�����µ��ļ�C��
/*int main()
{
	char tmp;

	char arr[128]={0};

	char brr[128]={0};

	FILE *fpa = fopen("A.txt", "r+");

	FILE *fpb = fopen("B.txt", "r+");

	FILE *fpc = fopen("C.txt", "w+");

	fread(arr, 1, 127, fpa);

	fread(brr, 1, 127, fpb);

	strcat(arr,brr);

	for(int j=0; arr[j]!='\0'; j++)
	{
		for(int n=j+1; arr[n]!='\0'; n++)
		{
			if(arr[n] < arr[j])
			{
				tmp = arr[j];

				arr[j] = arr[n];

				arr[n] = tmp;
			}
		}
	}
	fwrite(arr, strlen(arr), 1, fpc);

	fclose(fpa);
	fclose(fpb);
	fclose(fpc);
	return 0;
}*/



//һ���ṹ����5��ͬѧ��ѧ�š������������ſεĳɼ��������ƽ���ɼ�����ԭ�����ݺ�ƽ���ɼ��Ž������ļ�stud��,����ƽ���ֽ������򣬽�����������ݴ����ļ�stu_sort��
typedef struct record
{
	char num[10];

	char name[20];

	int score[3];
}S_record;

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

	S_record tmp1;

	int tmp2;

	int avg[5] = {0};

	int n = 0;

	FILE *fpa = fopen("stud.txt", "w+");

	FILE *fpb = fopen("stu_sort.txt", "w+");

	input(stu);

	for(n; n<5; n++)
	{
		avg[n] = stu[n].score[0] + stu[n].score[1] + stu[n].score[2];

		fprintf(fpa, "%s    %s    %d %d %d     %d\n",stu[n].num, stu[n].name, stu[n].score[0], stu[n].score[1], stu[n].score[2], avg[n]);
	}
	for(int m=0; m<5; m++)
	{
		for(int i=0; i<5; i++)
		{
			if(avg[i] < avg[m])
			{
				tmp1 = stu[m];

				stu[m] = stu[i];

				stu[i] = tmp1;

				tmp2 = avg[m];

				avg[m] = avg[i];

				avg[i] = tmp2;
			}
		}
	}
	for(int k=0; k<5; k++)
	{
		fprintf(fpb, "%s    %s    %d %d %d     %d\n",stu[k].num, stu[k].name, stu[k].score[0], stu[k].score[1], stu[k].score[2], avg[k]);
	}

	fclose(fpa);

	fclose(fpb);

	return 0;
}