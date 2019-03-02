#include<stdio.h>
//筛选法求100以内的素数
/*void Prime(int arr[],int len)
{
	int n,m;

	    for(n=2;n<100;n++)  
    {  
        for(m=n+1;m<=100;m++)  
        {  
            if(arr[m]!=0)  
            {  
                if(arr[m]%n==0)  
                {  
                    arr[m]=0;        
                }  
            }  
        }  
    } 
	for(m=1;m<len;m++)
	{
		if(arr[m]!=0)

			printf("%d\n",arr[m]);
	}
}
int main()
{
	int arr[101];

	for(int i=1;i<=100;i++)
	{
		arr[i]=i;
		
	}
	arr[1]=0;

	int len=sizeof(arr)/sizeof(arr[0]);
	Prime(arr,len);
	return 0;
}*/


//用选择法对10个整数进行排序
/*void Sort(int arr[],int len)
{
	int tmp;

	for(int i=0;i<len;i++)
	{
		for(int n=i+1;n<len;n++)
		{
			if(arr[i]>arr[n])
			{
				tmp=arr[i];

				arr[i]=arr[n];

				arr[n]=tmp;
			}
		}
	}
	for(int m=0;m<len;m++)
	{
		printf("%d  ",arr[m]);
	}

}
int main()
{
	int arr[15]={1,3,4,6,5,2,7,9,8,0};

	int len=sizeof(arr)/sizeof(arr[0]);

	Sort(arr,len);

	return 0;
}*/


//用折半查找法求一个数在数组中的位置
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

	if(Binsearch(arr,len,10))
	{
		printf("这个数在数组中的第%d位\n",Binsearch(arr,len,10));
	}
	else
		printf("无此数");
	return 0;
}*/



//求3*3矩阵对角线之和
/*int Sum(int (*arr)[3])
{
	int tmp=0;

	for(int i=0;i<3;i++)
	{
		for(int n=0;n<3;n++)
		{
			if(i==n||i+n==2)

				tmp+=arr[i][n];
		}
	}
	return tmp;
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	printf("对角线元素和为%d\n",Sum(arr));

}*/


//杨辉三角形
/*void Triangle(int (*arr)[10])
{
	for(int m=0;m<10;m++)
	{
		arr[m][0]=1;
	}
	for(int i=1;i<10;i++)
	{
		for(int n=1;n<10;n++)
		{
			arr[i][n]=arr[i-1][n-1]+arr[i-1][n];
			
			//printf("%d ",arr[i][n]);
		}
		//printf("\n");
	}
	for(int a=0;a<10;a++)
	{
		for(int b=0;b<=a;b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}


}
int main()
{
	int arr[10][10]={1};

	Triangle(arr);
	return 0;
}*/



//找二维数组的鞍点，即这个数在此行最大此列最小
/*void Matrix(int (*a)[3])
{
	int max,y,p;

	for(int i=0;i<3;i++)
	{
		max=a[i][0];

		y=0;

		for(int j=0;j<3;j++)

			if(a[i][j]>max)
			{
				max=a[i][j];

				y=j;
			}
			p=1;

			for(int k=0;k<3;k++)
			{
				if(max>a[k][y])
				{
					p=0;
				}
			}
				if(p==1)
				{
					printf("a[%d][%d]=%d\n",i,y,max);

					break;
				}
	}
	if(p==0)

		printf("meiyou\n");
}

int main()
{
	int a[3][3]={{1,4,6},{7,3,9},{2,5,8}};

	Matrix(a);

	return 0;
}
*/



//翻译密码
/*#include<ctype.h>
void Translate(char arr[])
{
	for(int i=0;arr[i]!='\0';i++)
	{
		if(islower(arr[i]))
		{
			arr[i]='a'+'z'-arr[i];
		}
		if(isupper(arr[i]))
		{
			arr[i]='A'+'Z'-arr[i];
		}
	}
	printf("%s\n",arr);
}
int main()
{
	char arr[6]="agUJ1";

	printf("%s\n",arr);

	Translate(arr);
	
	return 0;
}*/



//将两个字符串链接起来
/*void Link(char arr[],char brr[])
{
	int i=0,n=0;
	while(arr[i]!='\0')
	{
		i++;
	}
	while(brr[n]!='\0')
	{
		arr[i++]=brr[n++];
	}
	arr[i]='\0';

	printf("%s\n",arr);
}

int main()
{
	char arr[10]="abcd";

	char brr[5]="efgh";

	Link(arr,brr);

	return 0;
}*/



//字符串比较
/*void Comper(char arr[],char brr[])
{
	int tmp,i,a=0,b=0;

	for(i=0;arr[i]!='\0'&&brr[i]!='\0';i++)
	{
		if(arr[i]>brr[i])

			tmp=arr[i]-brr[i];

		if(arr[i]<brr[i])

			tmp=arr[i]-brr[i];
	}
	if(arr[i]==brr[i])

		tmp=arr[i]-brr[i];

	printf("%d\n",tmp);
	
}
int main()
{
	char arr[3]="pd";

	char brr[5]="pabc";

	Comper(arr,brr);

	return 0;
}
*/


//数字转变为字符
/*void Change1(int n,char arr[])
{
	int count = 0,power = 1,a=0;
	
	do
	{
		count++;

		n /=10;

	}while(n != 0);

	for(int i = 1;i < count;i++)
	{
		power *= 10;
	} 
		while(n != 0)
		{
			arr[a]=(n/power)+'0';
			
			n %= power;

			power /= 10;

			a++;
		}
	arr[a]='\0';

	printf("%s\n",arr);
}


int main()
{
	char arr[10];

	Change1(1234,arr);

	return 0;
}*/



//字符转变为数字
/*int Change2(char arr[])
{
	int sum=0;

	for(int n=0;arr[n]!='\0';n++)
	{
	    sum*=10;

		sum+=arr[n]-'0';
	}
	return sum;
}
int main()
{
	char arr[5]="1234";

	printf("%d\n",Change2(arr));

	return 0;
}*/
