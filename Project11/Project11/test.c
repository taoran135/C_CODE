#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* p = &a; //ָ�����
//	return 0;
//}  
// 

//int main()
//{
//	//printf("%d\n", sizeof(char*)); // 8
//	//printf("%d\n", sizeof(short*)); // 8
//	//printf("%d\n", sizeof(int*)); // 8
//	//printf("%d\n", sizeof(double*)); // 8
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/ // 0x00000000
//	char* pa = &a;
//	*pa = 0; // 0x11223300
//	// ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С(�ܲ��������ַ���
//	//int *p  *p�ܹ�����4���ֽ�
//	//char *p  *p�ܹ�����1���ֽ�
//	//double *p  *p�ܹ�����8���ֽ�
//	/*char* pc = &a;*/
//	//printf("%p\n", pa);  // 000000B0DEF9F974
//	//printf("%p\n", pc);  // 000000B0DEF9F974
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa =&a;
//	char* pc = &a;
//	// ָ�����;����ˣ�ָ��������ǰ�������һ���߶�Զ(ָ��Ĳ���)
//	// int*p p+1 --->4
//	// char* p; p+1 -->1
//	// double*p ; p+1--> 8
//	printf("%p\n", pa); //0000009CFCDDF814
//	printf("%p\n", pa+1); //0000009CFCDDF818
//	printf("%p\n", pc); //0000009CFCDDF814
//	printf("%p\n", pc+1);//0000009CFCDDF815
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; //������ --��Ԫ�صĵ�ַ
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	//int a; // �ֲ�����δ��ʼ����Ĭ�������ֵ
//	int* p; //�ֲ�ָ�����δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//
//}

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	
	int* p =test();
	*p = 20;
	return 0;

}