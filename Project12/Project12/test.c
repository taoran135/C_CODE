#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	// 未初始化的指针变量
//	int* p;//局部变量不初始化，里边默认放的是一个随机值
//	*p = 20;
//	return 0;
//}


//数组越界访问
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		 p ++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p =test();
//	printf("%d\n",*p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a; // 初始化,pa是指向int的指针，初始化为变量a的地址
//	int* p = NULL; // NULL --用来初始化指针的，给指针赋值（空指针）
//	pa = NULL; // 将pa重新赋值为NULL，不再指向a
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p - 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n" ,& arr[9] - &arr[0]); // 9 --->元素个数，其中包含 arr[9]
//	return 0;
//

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	// strlen -->求字符串长度
//	// 递归 --> 模拟实现了strlen - 计数的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

#define N_VALUES 5

//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr); // 地址--首元素的地址  000000DE9BB6F7D8
//	printf("%p\n", arr+1); //000000DE9BB6F7DC
//	printf("%p\n", &arr[0]); //0000002B6D0FFC38
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr); // 
//	printf("%p\n", &arr+1);//000000DE9BB6F800
//	//1 .&arr &数组名不是首元素地址---数组名表示整个数组 ---&数组名 取出的是整个数组的地址
//	// 2.sizeof(arr）--- sizeof(数组名） 计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p == %p\n", p + i, &arr[i]);
//	//} // 00000043B7FFFC38 == 00000043B7FFFC38
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa =&pa; //ppa就是二级指针
//	//int*** pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	printf("%d\n", a); //20
//	return 0;
//}

// 指针数组 -- 数组---存放指针的数组
// 数组指针 -- 指针 

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c}; //指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", * (arr2[i]));
//	}
//	return 0;
//}

//void Init_arr(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print_arr(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//void Reverse_arr(int arr[], int len)
//{
//	//// 冒泡排序
//	//int flag = 1;
//	//int i = 0;
//	//for (i = 0; i < len - 1; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		if (arr[j] < arr[j + 1])
//	//		{
//	//			int tmp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = tmp;
//	//			flag = 0;
//	//		}
//	//		if (flag == 1)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//}
//	int left = 0;
//	int right = len - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 初始化
//	/*Init_arr(arr,sz);*/
//	// 打印每个元素
//	Print_arr(arr, sz);
//	// 逆置
//	Reverse_arr(arr, sz);
//	Print_arr(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else 
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a; // c=6 a=6;
//	b = ++c, c++, ++a, a++; // c=8 b=7 a=8  
//	b += a++ + c; // a =9,b =8+8+7 = 23
//	printf("a=%d b=%d c=%d\n", a, b, c);  //a=9 b=23 c=8
//	return 0;
//}

// 求两个int（32位）整数m和n的二进制表达式中，有多少位不同
// 例 输入：1999 2299 输出：7
//0000 0000 0000 0000 0000 0111 1100 1111
//0000 0000 0000 0000 0000 1000 1111 1011
// 1111 0011 0100

//int get_diff_bit(int m,int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//
//	/*return count_bit_one(tmp);*/
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count =get_diff_bit(m, n);
//	printf("count = %d\n", count);
//  return 0;
//}

// 统计二进制中1的个数
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one( int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	// 写一个函数求a的二进制表示中有几个1
//	int count =count_bit_one(num);
//	printf("count = %d\n", count);
//	//system("pause"); // system 库函数 --执行系统命令 --pause(暂停）
//	return 0;
//
//}

// 获取整数二进制序列中所有的奇数位和偶数位，分别打印出其二进制序列，
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位 :\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i)&1);
//	}
//	printf("\n");
//	printf("偶数位 :\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
// 利用指针打印数组
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", * (p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;

}