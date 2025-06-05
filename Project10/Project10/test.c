#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5)); // 2
//	printf("%d\n", s); // 0
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//// ~ ---按二进制位取反
//	//printf("%d\n", ~a); // -1
//
//	int a = 11;
//	//  0000 0000 0000 0000 0000 0000 0000 1011
//	//  0000 0000 0000 0000 0000 0000 0000 0100
//	//  1<<2;
//	//  0000 0000 0000 0000 0000 0000 0000 1111
//	a = a | (1 << 2);
//	printf("%d\n", a); // 15
//
//	//  0000 0000 0000 0000 0000 0000 0000 1111
//	//  1111 1111 1111 1111 1111 1111 1111 1011
//	//  0000 0000 0000 0000 0000 0000 0000 0100
//	// ~(1<<2);
//	//  0000 0000 0000 0000 0000 0000 0000 1011
//	a = a & ~(1 << 2);
//	printf("%d\n", a); // 11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a); // 前置++，先++，再使用 11
//	printf("%d\n", a++); // 后置++，先使用，再++  10 
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	return 0;
//
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}

//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr)); // 40 
//	printf("%d\n", sizeof(ch));  // 10
//	test1(arr); // 8---首元素的地址(指针）
//	test2(ch);  // 8
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c); // 1
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //++b && d++ 没有参与运算
//	//在 C 语言中，逻辑与（&&）遵循短路求值规则：
//	//若左侧表达式为假（0），则右侧表达式不会被执行
//	 i = a++ || ++b || d++;
//	 //逻辑或（||）的短路规则：若左侧表达式为真（非 0），则右侧表达式不会被执行。
//	printf("a = %d\n b = %d\n c= %d\n d= %d\n", a, b, c, d); // 1 2 3 4(与 ）
//	// 1 3 3 4(或）
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	b  = (a > 5 ? 3 : -3);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[9] = 10;
//	return 0;
//}

//int getmax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	int max = getmax(a, b);
//	// 操作数---getmax ,a,b
//	printf("max =%d\n", max);
//	return 0;
//}

// 学生
// int float
// 创建了一个结构体类型--struct Student
//struct Student
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a = 10;
//	// 使用struct Student 这个类型创建了一个学生对象s1,并初始化
//	struct Student s1 = {"张三",20,"2019010305"};
//	struct Student* ps = &s1;
//	// 结构体指针 -> 成员名
//	/*printf("%s\n", (*ps).name);*/
//	printf("%s\n", ps->name);
//	//printf("%s\n",s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	// 结构体变量.成员名
//	return 0;
//
//}

//int main()
//{
//	char a = 3;
//	// 0000 0000 0000 0000 0000 0000 0000 0011
//	// 0000 0011 --a
//	char b = 127;
//	// 0000 0000 0000 0000 0000 0000 0111 1111
//	// 0111 1111 --b
//	// 0000 0000 0000 0000 0000 0000 1000 0010
//	char c = a + b;
//	// 1000 0010 --c
//	// 1111 1111 1111 1111 1111 1111 1000 0010  --补码
//	// 1000 0000 0000 0000 0000 0000 0111 1110  --原码
//	// -126
//	printf("%d\n", c); // -126
//	return 0;                   
//}

//int main()
//{
//	char a = 0xb6; //1011 0110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6) //整型提升 1111 1111 1111 1111 1111 1111 1011 0110 ！=0xb6
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0; // 结果打印c
//}

//int main()
//{
//	// c只要参与表达式，就会发生整型提升
//	char c = 1;
//	printf("%u\n", sizeof(c)); // 1
//	printf("%u\n", sizeof(+c)); // 4
//	printf("%u\n", sizeof(!c)); // 1
//	//不管操作数是什么类型，!运算的结果不是 0 就是 1，
//	// 并且这个结果属于int类型。不过，C 标准规定sizeof对布尔表达式求值时，结果为 1。
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = b + a * 3;
	return 0;
}