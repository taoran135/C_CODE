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
//	//printf("i �ĵ�ַ: %p\n", &i);
//	//printf("arr[12] �ĵ�ַ: %p\n", &arr[12]);
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
//		printf("%d ", 10 - i); //�ϵ� F9�л��ϵ�
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

// ʵ�ִ��� : ��1��+2��+ ...+n! ,���������

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
//��ʼ״̬��
/*arr1: ['#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '\0']
arr2 : ['b', 'i', 't', '\0']

ִ�к�
arr1 : ['b', 'i', 't', '\0', '#', '#', '#', '#', '#', '#', '#', '\0']
arr2 : ['b', 'i', 't', '\0']*/  // ���ֲ���
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
//	char* ret = dest;  // ���� dest ����ʼ��ַ
//	assert(dest !=NULL ); //����
//	assert(src != NULL); //����,assert �� C �����е�һ���꣬�����ڳ�������ʱ���ĳ�������Ƿ�Ϊ�档
//	//�������Ϊ�٣�������ֹ�������������Ϣ�����������߿��ٶ�λ����
//	// ��srcָ������ݿ�����destָ��Ŀռ��У�����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;// ������ʼ��ַ
//			
//}
//int main()
//{
//	// strcpy
//	// �ַ�������
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2)); //bit\0#######
//	//��ʽ������ָ��һ�������ķ���ֱֵ����Ϊ��һ�������Ĳ�����
//	// printf ���յ� arr1 �ĵ�ַ���Ӹõ�ַ��ʼ��ӡ�ַ�����ֱ������ '\0'���γ�����ʽ���á�
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int * p = &num;
//	//*p = 20; // error const����ָ�������*���ʱ�����ε���*p��
//	//Ҳ����˵����ͨ��p���ı�*p (num) ��ֵ������ָ�뱾����޸ģ������ݿɱ䡣 
//	num = 20;
//	// const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
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