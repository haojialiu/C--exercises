#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//�����ַ�����С�������
/*void Compare(char *arr,char *brr,char *crr)
{
	char drr[10];
	if(strcmp(arr,brr) > 0)
	{
		strcpy(drr,arr);

		strcpy(arr,brr);

		strcpy(brr,drr);
	}
	if(strcmp(arr,crr) > 0)
	{
		strcpy(drr,arr);

		strcpy(arr,crr);

		strcpy(crr,drr);
	}
	if(strcmp(brr,crr) > 0)
	{
		strcpy(drr,brr);

		strcpy(brr,crr);

		strcpy(crr,drr);
	}
	printf("%s\n",arr);

	printf("%s\n",brr);

	printf("%s\n",crr);
}
int main()
{
	char arr[100] = "hbc";

	char brr[100] = "cdef";

	char crr[100] = "ger";

	Compare(arr,brr,crr);

	return 0;
}*/


//������ĺ���M��������������ǰ��
/*void Sort(int *arr,int len,int m)
{
	int i;
	int *p = (int *)malloc(len*sizeof(int));

	for(i=0; (len-m+i)<len; i++)
	{
		p[i] = arr[len-m+i];
	}
	for(int n=0; n<len-m; n++)
	{
		p[i++] = arr[n];
	}
	for(int m=0; m<len; m++)
	{
		printf("%d ",p[m]);
	}
	free(p);
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};

	Sort(arr,sizeof(arr)/sizeof(arr[0]),4);

	return 0;
}*/


//��n����˳���ţ���1��3����������3�����˳������ʣ�µ��Ǹ�����ԭ���ļ���//��Щ����
/*void Number(int *arr,int len)
{
	int tmp = 0;

	int sum = 0;

	for(int i=0; ; i++)
	{
		if(arr[i] != 0)
		{
			tmp++;
			
			if(tmp == 3)
			{
				arr[i] = 0;

				tmp = 0;

				sum++;
			}
		}
		if(i == len-1)
		{
			i = 0;
		}
	}
	for(int j=0; j<len; j++)
	{
		if(arr[j] > 0)
		{
			printf("%d\n",j);
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};

	Number(arr,sizeof(arr)/sizeof(int));

	return 0;
}*/



//��һ���ַ����ӵ�m���ַ���ʼ���Ƶ���һ���ַ���
/*void Copy(char *arr,int len,int n)
{
	int a = 0;

	char *p = (char *)malloc(len-n*sizeof(char));

	for(int i=n-1; i<len; i++)
	{
		p[a++] = arr[i];
	}
	printf("%s\n",p);

	free(p);
}
int main()
{
	char arr[]="abcdefg";

	Copy(arr,sizeof(arr)/sizeof(char),4);

	return 0;
}*/



//һ���ַ����������ֺ��ַ�����������������Ϊһ���������������У�ͳ�ƹ��ж��ٸ��������������������Щ��
/*void Statistics(char *arr,int len)
{
	int m = 0;
	int count = 0;
	int power = 1;
	int sum = 0;
	int *p = (int *)malloc(len*sizeof(int));
	 for(int i=0; arr[i]!='\0'; i++)
	 {
		 if(isdigit(arr[i]))
		 {
			 count++;

			 if(isdigit(arr[i+1]) == 0)
			 {
				 for(int j=1; j<count; j++)
				 {
					 power *= 10;
				 }
				 for(int n=i-count+1; n<=i; n++)
				 {
					 sum+=(arr[n]-'0')*power;

					 power /= 10;
				 }
				 p[m++] = sum;
				 count = 0;
				 power = 1;
				 sum = 0;
			 }
		 }
	 }
	 p[m] = '\0';
	 printf("����%d������\n",m);
	 for (int a=0; p[a]!='\0'; a++)
	 {
		 printf("%d\n",p[a]);
	 }
}
int main()
{
	char arr[]="A123x456 17960?302tab5876";

	Statistics(arr,sizeof(arr)/sizeof(int));

	return 0;
}*/