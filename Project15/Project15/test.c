#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 描述一个学生
// 名字，年龄，电话，性别
// struct-结构体关键字 Stu--结构体标签  struct Stu--结构体类型
//struct  Stu  //定义一个结构体类型 --图纸
//{
//	// 成员变量
//	char name[20];
//	short age;    
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct  Stu  
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = {"张三",20,"15249187976","男"};  // 创建结构体变量 --房子
//	// 局部结构体变量
//	Stu s2 = {"旺财",30,"15599345642","保密"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//
//};
//
//int main()
//{
//	struct T t = { "hehe",{100,'w',"hello world",3.14},NULL};
//	printf("%s\n", t.ch); // hehe
//	printf("%s\n", t.s.arr); //hello world 
//	printf("%lf\n", t.s.d); // 3.140000
//	return 0;
//}

//typedef struct  Stu  
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//void Print2(Stu* ps)
//{
//	printf("name :%s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = {"李四",40,"15598886688","男"};
//	// 打印结构体数据
//	Print(s);//结构体传参，要传结构体的地址
//	Print2(&s);//此法更优，节省空间
//	// 函数传参的时候，参数时需要压栈的，如果传递一个结构体对象的时候，结构体过大，
//	// 参数压栈的系统开销比较大，会导致性能的下降
//	return 0;
//}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int a = 10;
	int b = 10;
	int ret = Add(a, b); //传参从右向左传，先传b再传a
	return 0;
}