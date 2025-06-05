#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



//int main(void) 
//{
//	//字符串的结束标志是：'\0'
//	"abxcfdef";
//	//隐含'\0'--转义字符---ASCLL码值为0
//	//0---数字0
//	//'0'---ASCLL码值为48
//	//EOF ---end of file ---文件结束标志，值为-1
//	return 0;
//}


//#define MAX(x,y) (x>y?x:y)
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max =%d\n", max);
//	return 0;
//
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = Max(num1, num2);
//	printf("max =%d\n", max);
//	return 0;
//}


//int main() 
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//初始化数组
//	// int指代数组中的元素类型是int
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//报错
//	printf("%d\n", sizeof(arr));//24,计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//6
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//    // ~ --按二进位取反 
//	// 1010
//	//0101
//	printf("%d\n", b);//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//printf("%d\n", &a);
//	//int* p = &a;//p为指针变量，类型为int*
//	//printf("%p\n", p);
//	//*p=20;//*--解引用操作符或间接访问操作符
//	//printf("a=%d\n", a);
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("d=%lf\n", d);
//	printf("pd=%lf\n", *pd);
//	return 0;
//
//}


//结构体
//char int double .....
//人，书...---复杂对象
//姓名+身高+年龄+身份号码...
//书名+作者+出版社+定价+书号...
//复杂对象---结构体---自己创造出来的一种类型

//#include<string.h>
////创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};

//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = {"c语言程序设计",55};
//	struct Book* pb = &b1;
//	strcpy(b1.name, "c++");//name 为数组，无法直接修改
//	printf("书名 :%s\n", b1.name);
//	//strcpy ---string copy---字符串拷贝
//    //利用pb打印出我的书名和价格
//	/*printf("书名 :%s\n", (*pb).name);
//	printf("价格 :%d\n", (*pb).price);*/
//	/*printf("%s\n", pb->name);
//	printf("%d\n", pb->price);*/
//	// . 应用到结构体变量，结构体变量.成员
//	// -> 结构体指针->成员
//	//printf("书名 :%s\n",b1.name);
//	//printf("价格 :%d\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格 :%d\n", b1.price);
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	;//是语句--空语句
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{ 
//		printf("未成年\n");
//		printf("不能谈恋爱\n");//如果不加代码块，执行该语句会报错
//       
//	}
//	//代码块--{}	
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else
//			printf("老不死\n");
//	}
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	//else对应的是离其最近的if，也就是嵌套中的if,输出结果为空
//	return 0;
//
//}


//解决方法
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1) 
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}	
//	else
//		printf("haha\n");
//	return 0;
//
//}


//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("哈哈\n");
//	}
//	return 0;
//}

//1---100的奇数
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("奇数为：%d\n", num);
//		num++;	
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
	/*if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	else if (4 == day)
		printf("星期四\n");
	else if (5 == day)
		printf("星期五\n");
	else if (6 == day)
		printf("星期六\n");
	else
		printf("星期天\n");*/
	//switch (day) 
	/*{
	    case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
	}*/
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//
//}
int main()
{
	/*int i = 1;
	while (i <= 10)
	{	
		if (i == 5)
			break;
		printf("%d\n",i);
	    i++;
	}*/
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d\n", i);
		
	}
	return 0;

}