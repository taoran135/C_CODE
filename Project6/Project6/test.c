#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	//bit\0#######
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);// bit
//	//strcpy -- string copy ---�ַ�������
//	//strlen ---string length ---�ַ����󳤶�
//	return 0;
//}


//memset
// memory -�ڴ� set ---����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*', 5);
//	printf("%s\n", arr);
//	// ***** world
//	return 0;
//}




//int get_max(int x, int y)
//{
//	int z = 0;
//	z = ((x > y) ? (x) : (y));
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// ������ʹ��
//	int max = get_max(a,b);
//	printf("%d\n", max);
//
//	return 0;
//
//}
//void Swap1(int x, int y)//void��ʾ�޷���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a; //paָ�����
//	*pa = 20;  // �����ò���
//	printf("%d\n", a);
//	return 0;
//}



//#include <math.h>
//// ����������1,�����򷵻�0
//int is_primer(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100��200֮�������
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		// �ж�i�Ƿ�Ϊ����
//	/*	for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//	if (j > sqrt(i)) 
//	{
//		printf("%d\n", i);
//
//	 }*/
//
//		if (is_primer(i) == 1) 
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}

//��ӡ1000��2000֮�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\n", year);
//		}
//
//	}
//
//	return 0;
//}



// ������arr��һ��ָ��
//int binary_search(int arr[], int k ,int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<= right)
//	{
//		int mid = (right + left) / 2;//�м�Ԫ�ص��±�
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//
//		}
//	}
//	return -1;
//	
//		
//
//}
//int main()
//{
//	//���ֲ��� 
//	// ��һ�����������в��Ҿ����ĳ����
//	// ����ҵ��˷�����������±꣬�Ҳ����ķ���-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���: %d\n", ret);
//	}
//	return 0;
//}



//дһ��������ÿ����һ������������ͽ�num��ֵ����1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//# include <string.h>
//int main()
//{
//	int len = 0;
//	// 1.
//	len = strlen("abc");
//	printf("%d\n", len);
//	// 2.
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int  main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//��������
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	// ��������
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

