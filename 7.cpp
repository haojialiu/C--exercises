
#include<stdio.h>
#include<ctype.h>

//�ж�һ�����Ƿ�Ϊ����
/*void Prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i != 0)
		{
			if(i=n-1)
				printf("%d������\n",n);
		}
		else if(n%i == 0)
		{
			if(i=n-1)
				printf("%d��������\n",n);
		}
	}
}
int main()
{
	Prime(7);
	Prime(8);
	Prime(9);
	Prime(11);
	return 0;
}*/



//һ�����������е���һλ
/*int Binsearch(int arr[],int len,int n)
{
	int m=len,min=0,max=len-1;

	for(int m=0;m<len;m++)
	{
		if(arr[m]==n)
		{
			break;
		}
		else if(m==len-1)
			return false;
	}

	for(int i=1;i<=len;i++)
	{
		if(arr[(min+max)/2] == n)
		{
			return (min+max)/2+1;

			break;
		}
		else if(arr[(min+max)/2]>n)
		{
			max=(min+max)/2;
		}
		else
			min=(min+max)/2;
	}
}
int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};

	int len=sizeof(arr)/sizeof(arr[0]);

	if(Binsearch(arr,len,8))
	{
		printf("������������еĵ�%dλ\n",Binsearch(arr,len,5));
	}
	else
		printf("�޴���");
	return 0;
}*/




//�ַ���������
/*void Antitone(char arr[])
{
	char tmp;

	for(int i=0; arr[i]!='\0'; i++)
	{
		for(int j=i; arr[j]!='\0'; j++)
		{
			tmp = arr[j];

			arr[j] = arr[i];

			arr[i] = tmp;
		}
	}
}

int main()
{
	char arr[]="abcde";

	printf("%s\n",arr);

	Antitone(arr);

	printf("%s\n",arr);

	return 0;
}*/



//��һ���ַ����е�Ԫ����ĸ���Ƶ���һ���ַ�����
/*void Vowel(char arr[],char brr[])
{
	int n = 0;

	char crr[] = "aoeiuAOEIU";

	for(int i=0; arr[i]!='\0'; i++)
	{
		for(int j=0; crr[j]!='\0'; j++)
		{
			if(arr[i] == crr[j])
			{
				brr[n++] = arr[i];

				break;
			}
		}
	}
}

int main()
{
	char arr[] = "abcdefghiA";

	char brr[10] = "0";

	Vowel(arr,brr);

	printf("%s\n%s\n",arr,brr);

	return 0;
}*/



//ͳ���ַ�������ĸ�����֡��ո������ַ��ĸ���
/*
void Statistics(char arr[])
{
	int letter = 0;

	int space = 0;

	int figure = 0;

	int other = 0;

	for(int i=0; arr[i]!='\0'; i++)
	{
		if(isalpha(arr[i]))

			letter++;

		else if(isdigit(arr[i]))

			figure++;

		else if(arr[i] == ' ')

			space++;

		else

			other++;
	}
	printf("��ĸ%d\n����%d\n�ո�%d\n����%d\n",letter,figure,space,other);
}
int main()
{
	char arr[] = "a 1dF,2fG4hj";

	Statistics(arr);

	return 0;
}*/



//��һ���ַ����������
/*void word(char arr[],char brr[])
{
	int tmp = 0;

	int m = 0;

	int n;

	int max = 0;

	for(int i=0;;i++)
	{
		if(isalpha(arr[i]))
		{	
		tmp++;
		}
		else 
		{
			if(max < tmp)
			{
				max = tmp;

				m = i;
			}
			tmp = 0;
		}
		if(arr[i] == '\0')
		{
			break;
		}
	}
	for(n=m-max; max > 0; n++)
	{
		max--;
		*brr++ = arr[n];
	}
	*brr = '\0';

}
int main()
{
	char arr[] = " hello love you ";

	char brr[20];

	word(arr,brr);

	printf("%s\n",brr);

	return 0;
}*/



//�����ݷ���һ���ַ�������
/*void Sort(char *arr)
{
	int tmp;
	for(int i=0; arr[i]!='\0'; i++)
	{
		for(int n=i; arr[n]!='\0'; n++)
		{
			if(arr[i] > arr[n])
			{
				tmp = arr[i];

				arr[i] = arr[n];

				arr[n] = tmp;
			}
		}
	}
}
int main()
{
	char arr[]="bcdeafgih";

	Sort(arr);

	printf("%s\n",arr);

	return 0;
}*/



//ʮ��������תʮ����
/*int Change(char *arr)
{
	int a;

	int sum=0;
	for(int i=0; arr[i]!='\0'; i++)
	{
		if(arr[i] >='0' && arr[i] <= '9')
		{
			a = arr[i] - '0';
		}
		else
		{
			a = arr[i] - 'A';
		}
		sum = sum*16+a;
	}
	return sum;
}
int main()
{
	char arr[] = "B5C8A";

	printf("%d\n",Change(arr));

	return 0;
}*/



//��һά�����ӡ���������
/*void Delta(int arr[])
{
	for (int i=1; i<11; i++)
	{
		for(int n=i-1; n>0; n--)
		{
			arr[n] = arr[n] + arr[n-1];

			printf("%4d",arr[n]);
		}
		printf("%4d\n",arr[0]);
	}
}

int main()
{
	int arr[11] = { 1 };

	Delta(arr);

	return 0;
}*/



//���������ӡ���������
/*void Delta(int n)
{
	int sum = 1;

	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
		{
			if (j > 1)
			{
				sum = sum * (i-j+1) / (j-1);
			}
			printf("%4d",sum);
		}
		printf("\n");
	}
}
int main()
{
	Delta(10);

	return 0;
}*/




