#define _CRT_SECURE_NO_WARNINGS
//禁止编译器发出这些安全相关的警告信息。
#include <stdio.h>
#include<string.h>
//#define MAX 10
//enum sex
//{
//	MALE,
//    FEMALE,
//	SECRET
////MALE,FEMALE,SECRET --枚举常量
//};
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


//int main(void) 
//{ 
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d",&num1,&num2);
 //   sum = num1 + num2;
	//printf("sum = %d\n", sum);



 //    // const - 常属性
	//int arr[10] = { 0 };
	//const int  n = 10;//n是变量，但是又有常属性，所以我们说是常变量
	////int arr[n] = { 0 };
	//// const修饰的常变量
	//const int num = 4;
	//printf("%d\n", num); 
	////num = 8;
	//printf("%d\n", num);
	//3;//字面常量

	//int arr[MAX] = { 0 };
	//printf("%d\n", MAX);

	//enum sex s = MALE;
	//printf("%d\n", MALE);//0
	//printf("%d\n", FEMALE);//1
	//printf("%d\n", SECRET);//2

	//char arr1[] = "abc";//数组
	////"abc -- 'a','b','c','\0'(字符串的结束标志）
	////'\0' --0
	////'a' --97
	////A --65
	////ASCII编码
	//char arr2[] = { 'a','b','c','\0' };
	//char arr3[] = { 'a','b','c' };
	//printf("%d\n",strlen(arr1));
	//printf("%d\n",strlen(arr2));
	//printf("%d\n", strlen(arr3));
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//printf("abc\n");
	//printf("c:\\test\\32\\test.c");
	//printf("(are you ok\?\?)\n");
	//printf("%c\n",'\'');
	//printf("%s\n", "a");
	//printf("%s\n", "\"");
	//printf("%d\n",strlen("c:\test\32\test.c"));
	////\32 -- 32是2个8进制数字
	////32作为8进制代表的那个十进制数字，作为ASCII码值对应的字符
	////32 -- 10进制 26 --> 作为ASCII码值代表的字符
	//printf("%c\n",'\x61');


	////int input = 0;
	////printf("加入比特\n");
	////printf("你要好好学习吗?（1/0)>:");
	////scanf("%d",&input);// 1/0
	////if (input == 1)
	////	printf("好offer\n");
	////else
	////	printf("卖红薯\n");

	//int line = 0;
	//printf("加入比特\n");

	//while (line < 20000)
	//{
	//	printf("敲一行代码：%d\n", line);
	//	line++;
	//}
	//if (line >= 20000)
	//	printf("好offer\n");


	//int num1 = 10;
	//int num2 = 20;
	//int sum = 0;
	//int sum1 = 0;
	//int a = 100;
	//int b = 200;
	//sum = Add(num1, num2);
	//sum1 = Add(a, b);
	////sum = num1 + num2;
	//printf("sum =%d\n", sum);
	//printf("sum1 =%d\n", sum1); 

	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
	//printf("%d\n",arr[9]);//下标的形式访问数组
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;

	//}
	/*char ch[20];
	float arr2[5];*/

	/*int a = 5 / 2;
	printf("%d\n",a);

	int b = 5 % 2;
	printf("%d\n", b);*/

	////移（2进制）位操作符
	//// >> 右移
	//// << 左移
	//int a = 1;
	////整型1占4个字节 = 32bit位    
	////00000000000000000000000000000001
	//int b = a << 1;
	//printf("%d\n", b);

	////（2进制）位操作符
	//// & 按位与
	////| 按位或
	//// ^ 按位异或     
	//int a = 2;
	//int b = 5;
	//int c = a & b;
	//// 010
	//// 101 
	//// 000

	//int d = a | b;
	////111
	//int e = a ^ b;
	//// 异或的计算规律是
	//// 对应的二进制位相同，则为0
	////对应的二进制位相异，则为1
	//// 010
	//// 101 
	////111
	//printf("%d\n", c);
	//printf("%d\n", d);
	//printf("%d\n", e);

 //   int a = 10;
	//////a = a + 10;

	//a += 10;
	//////a = a - 20;

	//a -= 20;
	//////a = a & 2;
	//a &= 2;
	////// 复合赋值符
	//printf("%d\n", a);


   ////单目操作符
   ////双目操作符
   ////三目操作符
   //int a = 10;
   //int b = -a;
   //int c = +3;
   //a + b; // + 双目操作符
   ////c 语言中0表示假，一切的非0都是真
   //
   //printf("%d\n", a);
   //printf("%d\n", !a);
   ////sizeof计算的是变量/类型所占空间的大小，单位是字节
   //printf("%d\n", sizeof(a));
   //printf("%d\n",sizeof a);
   //printf("%d\n", sizeof(int));
   //int arr[10] = { 0 };//10个整形元素的数组
   //int sz = 0;
   //printf("%d\n", sizeof(arr));
   ////计算数组的元素个数
   //// 个数 = 数组总大小/每个元素的大小
   //sz = sizeof(arr) / sizeof(arr[0]);
   //printf(" sz=%d\n", sz);

   //int a = 0;
   //int b = ~a;
   //printf("%d\n",b);//-1
   ////~ --按（2进制）位取反
   ////00000000000000000000000000000000
   ////11111111111111111111111111111111
   //// 11111111111111111111111111111110
   //// 10000000000000000000000000000001
   ////原码、反码、补码
   ////负数在内存中存储的时候，存储的是二进制的补码
   // 
   
  //   int a = 10;
	 ////int b = a++;//后置++,先使用，再++
	 //// printf("a =%d b=%d\n", a, b);//11 10
	 ////int b = ++a;//前置 ++，先++，再使用
	 ////printf("a =%d b=%d\n", a, b);//11 11
	 ////int b = a--;//后置 --，,先使用，再--
	 ////printf("a =%d b=%d\n", a, b);//9 10
	 //int b =-- a;//前置 --，先--，再使用,
	 //printf("a =%d b=%d\n", a, b);//9 9
	 //int c = (int)3.14;
  /*   int a = 3;
	 int b = 5;
	 int c = a && b;
	 printf("c=%d\n", c);
	 int d = a || b;
	 printf("d=%d\n", d);*/
    /* int a = 10;
	 int b = 20;
	 int max = 0;
	 max = (a > b ? a : b);
	 printf("max=%d\n", max);*/
  //   int arr[10] = { 0 };
	 //arr[4];//--下标引用操作符
	 //int a = 10;
	 //int b = 10;
	 //int sum = Add(a, b);//() --函数调用操作符



//	return 0; 
//	
//}
	//枚举常量
	//枚举 -- 一一列举
	// 性别：男 女 保密
	//枚举关键字 --enum

//int main()
//{
//	auto int a = 10;//局部变量--自动变量
//	return 0;  
//}

//int main() 
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int定义的变量是有符号的
//	signed int;
//	unsigned int num = 1;
//	//struct---结构体关键字
//	//union --联合体/共用体
//	return 0;
//}

//int main() 
//{
//	//typedef --类型定义--类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//void test()// 定义了一个名为 test 的函数，这个函数不接受任何参数，
////并且不返回任何值，这意味着在函数体内部不会有 return 
//// 语句返回一个具体的值（不过可以使用 return; 语句来提前结束函数的执行）。
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//int main(void) 
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();//2 2 2 2 2
//		//2 3 4 5 6
//		i++;
//	}
//	return 0;
//}

//int main(void)
//{
//	//extern--声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

////声明外部函数
//extern int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum =%d\n", sum);
//	return 0;
//
//}

//定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
//Max(int x, int y) 
//{
//	if (x > y)
//		return x;
//	else
//		return  y;
//
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main(void)
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max =%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	int* p = &a;//取地址
//	*p =20;//*--解引用操作符
//	printf("a=%d\n", a);
//	//有一种变量是用来存放地址的--指针变量
//	/*printf("%p\n", &a);
//	printf("%p\n", p);*/
//	return 0;
//
//}

//int main(void)
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//8
//	*pc = 'a';
//	printf("%c\n",ch);//a
//	return 0;
//}



