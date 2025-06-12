#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//printf("i 的地址: %p\n", &i);
//	//printf("arr[12] 的地址: %p\n", &arr[12]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i); //断点 F9切换断点
//	}
//	return 0;
//}

//int Add(int  x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

// 实现代码 : 求1！+2！+ ...+n! ,不考虑溢出

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//
//			ret *= j;
//
//		}
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src; //'\0'
//}
//初始状态：
/*arr1: ['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '\0']
arr2 : ['b', 'i', 't', '\0']

执行后：
arr1 : ['b', 'i', 't', '\0', '#', '#', '#', '#', '#', '#', '#', '\0']
arr2 : ['b', 'i', 't', '\0']*/  // 保持不变
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//#include <assert.h>
//char*  my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;  // 保存 dest 的起始地址
//	assert(dest !=NULL ); //断言
//	assert(src != NULL); //断言,assert 是 C 语言中的一个宏，用于在程序运行时检查某个条件是否为真。
//	//如果条件为假，它会终止程序并输出错误信息，帮助开发者快速定位问题
//	// 把src指向的内容拷贝到dest指向的空间中，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;// 返回起始地址
//			
//}
//int main()
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2)); //bit\0#######
//	//链式访问是指将一个函数的返回值直接作为另一个函数的参数。
//	// printf 接收到 arr1 的地址，从该地址开始打印字符串，直到遇到 '\0'，形成了链式调用。
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int * p = &num;
//	//*p = 20; // error const放在指针变量的*左边时，修饰的是*p，
//	//也就是说不能通过p来改变*p (num) 的值，限制指针本身的修改，但内容可变。 
//	num = 20;
//	// const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}