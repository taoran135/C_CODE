#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	//����һ�����顪������͡�10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab"; //a,b,\0,0,0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	// sizeof ����������������͵Ĵ�С--��λ���ֽ� -������
//	printf("%d\n", strlen(arr4));//6
//	//strlen ���ַ����ĳ���
//	// strlen �����ַ������ȵ�--ֻ������ַ����󳤶� ,\0֮ǰ���ַ�����--�⺯�� --ʹ�õ���ͷ�ļ�
//	//int n = 5;
//	//char ch[n];// ����
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
//	// �������ڴ�����������ŵ�
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
//	int arr2[3][4] = { 1,2,3,4,5 };//������Ĳ����Զ��ŵ���һ��
//	return 0;
//}

//��ά�����ʹ��
// �����±궼�Ǵ�0��ʼ
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

// ��ά�������ڴ��еĴ洢
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

//ð������ 
// ��һ��������������

//��������Ϊ��������ʱ��int arr[] ʵ���ϵȼ��� int *arr��������һ��ָ��������ָ�룬
// ���������������顣������Ϊ��
//C �����У�������Ϊ��������ʱ�� "�˻�" Ϊָ��
//�����޷�ֱ�ӻ�ȡ����ĳ�����Ϣ�����鳤����Ҫ����������ݣ�,void bubble_sort(int arr[], int size)
//����д����Ҫ��Ϊ�˴���ɶ��ԣ���ȷ��ʾ��������һ������
//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;// ������һ��Ҫ����������Ѿ�����
//	// ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //���������������ʵ����ȫ����
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
//	// ��arr���������ų�����
//	//  arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr����Ԫ�ص�ַ--&arr[0]
//	bubble_sort(arr,sz); //ð��������
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
	// 1.sizeof��������������������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	// 2.&�������������������������飬&��������ȡ��������������ĵ�ַ
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);


	return 0;
}

