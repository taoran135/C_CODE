#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	//创建一个数组—存放整型—10个
//	int arr[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为0 
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab"; //a,b,\0,0,0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof 计算arr4所占空间的大小
//	// sizeof 计算变量、数组类型的大小--单位是字节 -操作符
//	printf("%d\n", strlen(arr4));//6
//	//strlen 求字符串的长度
//	// strlen 是求字符串长度的--只能针对字符串求长度 ,\0之前的字符个数--库函数 --使用得引头文件
//	//int n = 5;
//	//char ch[n];// 报错
//	
//	return 0;
//}

//int main() 
//{
//	char arr1[] = "abc"; // a, b, c,\0
//	char arr2[] = { 'a','b','c' }; // a,b,c
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //42
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef"; //[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]); //d
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i <len; i++)
//	//{
//	//	printf("%c\n", arr[i]);
//	//}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 数组在内存中是连续存放的
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];
//	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };
//	int arr2[3][4] = { 1,2,3,4,5 };//多出来的部分自动放到下一行
//	return 0;
//}

//二维数组的使用
// 行列下标都是从0开始
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//	return 0;
//}

//冒泡排序 
// 将一个整型数组排序

//当数组作为函数参数时，int arr[] 实际上等价于 int *arr，即它是一个指向整数的指针，
// 而不是真正的数组。这是因为：
//C 语言中，数组作为参数传递时会 "退化" 为指针
//函数无法直接获取数组的长度信息（数组长度需要额外参数传递）,void bubble_sort(int arr[], int size)
//这种写法主要是为了代码可读性，明确表示期望传入一个数组
//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;// 假设这一次要排序的数据已经有序
//	// 确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 对arr进行排序，排成升序
//	//  arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr的首元素地址--&arr[0]
//	bubble_sort(arr,sz); //冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//int sz = sizeof(arr) / sizeof(arr[0]);
	// 1.sizeof（数组名），数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	// 2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);


	return 0;
}

