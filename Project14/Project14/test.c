#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 学生信息：学号 姓名 年龄
//int main()
//{
//	// 定义一个学生
//	unsigned int qiqi_number =10001; //学号
//	char qiqi_name[20] = "qiqi"; // 姓名
//	unsigned char qiqi_age = 18; //年龄
//
//	// 输出
//	printf("%ld %s %d\n", qiqi_number, qiqi_name, qiqi_age);
//	// %ld:用于打印 long int 类型的整数（长整型）
//
//	//数组：定义五个学生信息
//	unsigned int numbers[5] = { 10002,10003,10004,10005,10006 };
//	char names[5][20] = { "张三","李四","王五","赵六","顽石老师" };
//	//1. 字符串的本质
//	/*C 语言中没有原生字符串类型，字符串是用字符数组表示的，以'\0'结尾。
//		例如："张三" 实际存储为{ '张', '三', '\0' }，占用 3 个字节*/
//	/*2. 一维数组只能存一个字符串
//		若定义 char names[20]，它只能存储一个长度≤19 的字符串（留 1 字节给'\0'）。
//		若要存 5 个名字，需用二维数组：char names[5][20]。*/
//	/*char names[5][20] 表示：
//		5 个字符串（每行一个名字）。
//		每个字符串最多 19 个字符（第 20 字节存'\0'）。*/
//	unsigned char ages[5] = {12,13,14,15,16};
//
//	// 输出
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%ld %s %d\n", numbers[i], names[i], ages[i]);
//		//names[i] 是第i个字符串的首地址（类型为char* ）
//	}
//
//	// 学生结构---结构体类型
//	Student qiqi = { 10009,"柒柒",18 };
//	Student stu[5] =
//	{
//		{ 10009,"柒柒",18 },
//		{ 10009,"柒柒",18 },
//		{ 10009,"柒柒",18 },
//		{ 10009,"柒柒",18 },
//		{ 10009,"柒柒",18 }
//	};
//	return 0;
//}

// 定义一个学生结构体类型，包含学号，姓名，年龄
//struct Student
//{
//	int number;  //成员变量
//	char name[20];
//	int age;
//}baby,hello;
//
//
//int main()
//{
//	// 定义结构体变量
//	//struct Student才是结构体类型，而Student只是结构体的标签，不能用来定义变量
//
//	struct Student maye;
//	baby;
//	hello;
//
//	// 结构体取别名 typedef int INT;
//	typedef struct Student Student;
//	Student liqi;
//	
//	return 0;
//}


// 结构体变量的初始化，使用{ }聚合方式初始化
//struct Student
//{
//	int number;
//	char name[20];
//	int age;
//};
//int main()
//{
//	//1.全部初始化为0
//	//struct Student maye = { 0 };
//
//	//2.局部初始化
//	//struct Student maye = { 520 }; //初始化第一个，其他的自动初始化为0
//	struct Student maye = { .name ="maye",.number=555};// 指定初始化成员
//	
//	// 用另一个结构体初始化
//	struct Student moy = maye;
//	moy =(struct Student) { 123,"墨影",30 };
//	moy.number = 678;
//	strcpy(moy.name, "九夏");
//	//char *strcpy(char *destination, const char *source);
//	//复制字符串：将 source 指向的字符串（包括终止符 '\0'）复制到 destination 指向的内存空间。
//	//返回值：返回 destination 的指针，便于链式操作。
//	
//	//输出结构体成员
//	printf("%d %s %d\n", maye.number, maye.name, maye.age); // 0 (\0) 0
//	printf("%d %s %d\n", moy.number, moy.name, moy.age);
//
//
//	// 结构体成员的访问方式 成员访问运算符 . ->
//	struct Student stu = { .name ="stu"};
//	// 1.当使用普通的结构体变量，访问成员的时候，使用.访问成员
//	puts(stu.name);
//
//	// 2.当使用结构体指针访问成员的时候，使用->
//	puts((&stu)->name);
//
//	struct Student* pstu = &stu;
//	(*pstu).name;
//	pstu->name;
//	return 0;
//}


// 定义日期结构体，包含年月日
//struct Date
//{
//	short year;
//	short month;
//	short day;
//};
//// 定义Person结构体，包含姓名，年龄，出生日期
//struct Person
//{
//	char name[20];
//	int age;
//	struct Date birth; //出生日期
//};
//struct Person
//{
//	char name[20];
//	int age;
//	struct Date
//	{
//		short year;
//		short month;
//		short day;		
//
//	}birth; //出生日期
//};	
//
//int main()
//{
//	struct Date date = { 2022,5,19 };
//	struct Person maye = { "顽石老师",18, {2004,5,26} };
//	printf("%s %d （%hd %hd %hd)\n", maye.name, maye.age , maye.birth.year, maye.birth.month,maye.birth.day);
//
//	return 0;
//}


struct Tel
{
	char name[20];
	long long tel; //手机号，注意不要越界
};

void showAllTel(struct Tel* tels,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s %lld\n ", tels[i].name, tels[i].tel);
		//printf("%s %lld\n", (tels + i)->name, tels[i].tel);
	}
}

int main()
{
	struct Tel tels[5] = {
		{"老王",15647495834},
		{"顽石",15647495834},
		{"老张",15647495834},
		{"老朱",15647495834},
		{"老廖",15647495834},

	};

     // 循环输入
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %lld", tels[i].name, &tels[i].tel);
	 }
	// 遍历结构体数组
	/*for (int i = 0; i < 5; i++)
	{
		printf("%s %lld\n", tels[i].name, tels[i].tel);
		printf("%s %lld\n",(tels+i)->name, tels[i].tel);
	}*/
	showAllTel(tels, 5);
	return 0;
}