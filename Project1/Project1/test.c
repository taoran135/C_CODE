#include <stdio.h>
//包含一个叫stdio.h的文件
//std-标准  standard  input output
//int num2 = 20;
int main(void) // 主函数-程序的入口 main函数有且只有一个
// int 是整型的意思，main前面的int表示main函数调用返回一个整型值
{
	//这里完成任务，在屏幕上输出 hello world
	//函数-print function - printf -打印函数
    //库函数-c语言本身提供给我们使用的函数
	//使用别人的东西-打招呼-#include
	//int num1 = 10;
	printf("hello world \n");
	char ch = 'A'; //内存
	printf("%c\n",ch);  //%c --打印字符格式的数据
	//以字符的形式打印ch
	short int age = 20;
	printf("%d\n", age);//%d -- 打印整型十进制数据
	//%d--打印整型
	//%c--打印字符
	//%f --打印浮点数字---小数
	// %p --以地址的形式打印
	// %x --打印十六进制数字
	//short int --短整型
	//int -- 整型
	//long -- 长整型
	long num = 100;
	printf("%d\n",num);
	float f = 5.0;
	printf("%f\n", f);
	double d = 3.14;
	printf("%lf\n", d);
	printf("%zd\n", sizeof(char));//1字节
	printf("%zd\n", sizeof(short));//2
	printf("%zd\n", sizeof(int));//4
	printf("%zd\n", sizeof(long));// 4/8
	printf("%zd\n", sizeof(long long));//8
	printf("%zd\n", sizeof(float));//4
	printf("%zd\n", sizeof(double));//8

	//计算两个数的和

	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	//输入数据--使用输入函数scanf
	scanf_s("%d%d", &num1, &num2);
	//&--取地址符
	//c语言语法规定，变量要定义在代码块的最前面 
	sum =	num1 + num2;
	printf("sum = %d\n", sum);


	//未声明的标识符
	//声明extern外部符号的
	extern int val;
	printf("val = %d\n", val);
	return 0;//返回0-一个整型值
}
