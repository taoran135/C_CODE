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


// ����˳���ӡ�޷������ͱ�����ÿһλ
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
//	// �ݹ�
//	print(num);
//	return 0;
//}


// ��ӡ�ַ����ĳ���
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
//	//int len = strlen(arr); //���ַ����ĳ���
//	//printf("%d", len);
//
//	int len = my_strlen(arr); //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d", len);
//	return 0;
//
//}


// ��n�Ľ׳�

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
//	//ret = Fac1(n);// ѭ���ķ�ʽ
//	ret = Fac2(n);// �ݹ�ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//
//}


// ���n��쳲�������
// 1 1 2 3 5 8 13 21 34 55 89...
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3) //���Ե�3��쳲��������ļ������
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
	// TDD -- ������������
	ret = Fib(n);
	printf("%d\n", ret);
	//printf("count=%d\n", count);
	return 0;
}