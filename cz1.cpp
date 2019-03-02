#include<stdio.h>
#include<string.h>
/*
1、每行代码都以分号‘；’结尾，并适当的加一些空白。这样是代码更加容易被人理解，增加可读性。
2、这样可以把不同功能的程序分开，当编写程序需要用到这个声明时只要引用这个声明就好，而不需要每次都编写这个声明，方便快捷。
3、方便查看，方便修改，可以是这个常量变成你直观认识的信息。
6、C的数组标识符，里面并没有包含该数组长度的信息，只包含地址信息，所以语言本身无法检查。
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