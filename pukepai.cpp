#include<stdio.h>
//����һ���������飬������������Ҳ�и�����������һ���������Ķ���������һ�������顣������������ĺ͵����ֵ��Ҫ��ʱ�临�Ӷ�O(n)
/*int find(int *arr,int n)  
{  
    int max1 = 0;

	int max2 = 0; 

    for(int i=0; i<n; i++)  
    {  
        if(max2 <= 0) 
		{
            max2 = arr[i];  
		}
        else   
		{
            max2 += arr[i]; 
		}
        if(max1 < max2)
		{
            max1 = max2;  
		}
    }  
    return max1;  
}  
int main()  
{  
    int arr[]={1, -2, 3, 10, -4, 7, 2, -5};   
      
    printf("%d\n",find(arr,sizeof(arr)/sizeof(*arr)));  
  
	return 0;
}*/


//���˿����������5���ţ��ж��ǲ���һ��˳�ӣ�����5�����ǲ��������ġ�2~10Ϊ���ֱ���AΪ1��JΪ11��QΪ12��KΪ13������С�����Կ����������֡�

bool Fun(int *arr,int len)
{
	int max = 0;
	int min = 99;
	int count = 0;
	for(int n=0; n<len; n++)					//ȷ��5�����г���0����������û���ظ��ģ�������������������������0��
	{
		if(arr[n] != 0)
		{
			for(int j=n+1; j<len; j++)
			{
				if(arr[n] == arr[j])
				{
					return false;
				}
			}
		}
	}

	for(int i = 0; i<len; i++)					//�������5�����ֵ����ֵ����Сֵ
	{
		if(arr[i] != 0)
		{
			if(arr[i]>max)
			{
				max = arr[i];
			}
			if(arr[i]<min)
			{
				min = arr[i];
			}
		}
		else
		{
			count++;
		}
	}
	int num = (max - min);
	if(count == 0)						// ���û��0����max-min=4����Ϊ˳�ӣ�������
	{
		if(num == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(count == 1)						//�����һ��0����max-min=4����3����Ϊ˳�ӣ�������
	{
		if((num == 4) || (num == 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(count == 2)						//���������0����max-min=4����3����2����Ϊ˳�ӣ������� 
	{
		if((num == 4) || (num == 3) || (num == 2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
//	int arr[] = {2,3,4,5,6};
//	int arr[] = {0,4,5,3,0};
	int arr[] = {0,1,4,5,6};
	if(Fun(arr,sizeof(arr)/sizeof(arr[0])))
	{
		printf("��˳��\n");
	}
	else
	{
		printf("����˳��\n");
	}
	return 0;
}