#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


// 按照顺序打印无符号整型变量的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	// 递归
//	print(num);
//	return 0;
//}


// 打印字符串的长度
//#include <string.h>
//int my_strlen(char* str)
//{
//	/*int  count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr); //求字符串的长度
//	//printf("%d", len);
//
//	int len = my_strlen(arr); //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d", len);
//	return 0;
//
//}


// 求n的阶乘

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);// 循环的方式
//	ret = Fac2(n);// 递归的方式
//	printf("%d\n", ret);
//	return 0;
//
//}


// 求第n个斐波那契数
// 1 1 2 3 5 8 13 21 34 55 89...
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3) //测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	// TDD -- 测试驱动开发
	ret = Fib(n);
	printf("%d\n", ret);
	//printf("count=%d\n", count);
	return 0;
}