#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 九九乘法表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%-3d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

// 编写一个函数 reverse_string(char* sring) (递归实现）
// 实现：将参数字符串中的字符反向排列
// 要求：不能使用C函数库中字符串操作函数


//void reverse_string(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}



int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
	{
		reverse_string(arr+1);
	}
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	reverse_string(arr );
	printf("%s\n", arr);
	return 0;
}

// 写一个递归函数DigSum(n),输入一个非负整数，返回组成他的数字之和
// 例如 输入：1729  输出：19
//int i = 0;
//int DigSum(unsigned int n)
//{
//	/*i += n % 10;
//	n = n / 10;
//	if (n != 0)
//	{
//		return DigSum(n);
//	}
//	return i;*/
//
//	if (n > 9)
//	{
//		return DigSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int res = DigSum(num);
//	printf("%d\n", res);
//	return 0;
//}

// 编写一个函数实现n的k次方，用递归实现
//double Pow(int n, int k)
//{
//	// n^k =n*n^(k-1)
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}
