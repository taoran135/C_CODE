#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* p = &a; //指针变量
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
//	// 指针类型决定了指针进行解引用操作的时候，能够访问空间的大小(能操作几个字符）
//	//int *p  *p能够访问4个字节
//	//char *p  *p能够访问1个字节
//	//double *p  *p能够访问8个字节
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
//	// 指针类型决定了：指针类型向前或向后走一步走多远(指针的步长)
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
//	int* p = arr; //数组名 --首元素的地址
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
//	//int a; // 局部变量未初始化，默认是随机值
//	int* p; //局部指针变量未初始化，默认为随机值
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