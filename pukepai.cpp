#include<stdio.h>
//输入一个整型数组，数组里有正数也有负数，数组中一个或连续的多个整数组成一个子数组。求所有子数组的和的最大值。要求时间复杂度O(n)
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


//从扑克牌中随机抽5张排，判断是不是一个顺子，即这5张牌是不是连续的。2~10为数字本身，A为1，J为11，Q为12，K为13，而大，小王可以看成任意数字。

bool Fun(int *arr,int len)
{
	int max = 0;
	int min = 99;
	int count = 0;
	for(int n=0; n<len; n++)					//确认5张牌中除了0，其余数字没有重复的，这里吧两个王看成特殊的数字0；
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

	for(int i = 0; i<len; i++)					//计算出这5个数字的最大值和最小值
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
	if(count == 0)						// 如果没有0，则max-min=4，则为顺子，否则不是
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
	if(count == 1)						//如果有一个0，则max-min=4或者3，则为顺子，否则不是
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
	if(count == 2)						//如果有两个0，则max-min=4或者3或者2，则为顺子，否则不是 
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
		printf("是顺子\n");
	}
	else
	{
		printf("不是顺子\n");
	}
	return 0;
}