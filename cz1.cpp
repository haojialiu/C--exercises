#include<stdio.h>
#include<string.h>
/*
1��ÿ�д��붼�Էֺš�������β�����ʵ��ļ�һЩ�հס������Ǵ���������ױ�����⣬���ӿɶ��ԡ�
2���������԰Ѳ�ͬ���ܵĳ���ֿ�������д������Ҫ�õ��������ʱֻҪ������������ͺã�������Ҫÿ�ζ���д��������������ݡ�
3������鿴�������޸ģ�������������������ֱ����ʶ����Ϣ��
6��C�������ʶ�������沢û�а��������鳤�ȵ���Ϣ��ֻ������ַ��Ϣ���������Ա����޷���顣
*/


//2
/*int main()
{
	int n = 1;

	char buff[128] = {0};

	while(n < 4)
	{
		fgets(buff,128,stdin);

		printf("%d",n++);

		printf("%s\n",buff);
	}

	return 0;
}*/



//3
/*int main()
{
	signed char checksum = -1;

	char c;

	do
	{
		c = getchar();

		checksum += c;

		printf("%c",c);
	}
	while(c != '\n');
	

	printf("%d\n",checksum);

	return 0;
}*/




//4
/*int main()
{
	char arr[1000] = {0};

	char brr[1000] = {0};
	
	int max = 0;

	int len;
	while(strcmp(fgets(arr,1000,stdin),"end\n") != 0)
	{
		len = strlen(arr) - 1;

		printf("%d\n",len);

		if(len > max)
		{
			max = len;

			strcpy(brr,arr);
		}
	}
	printf("%s\n",brr);

	return 0;
}*/