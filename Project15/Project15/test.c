#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ����һ��ѧ��
// ���֣����䣬�绰���Ա�
// struct-�ṹ��ؼ��� Stu--�ṹ���ǩ  struct Stu--�ṹ������
//struct  Stu  //����һ���ṹ������ --ͼֽ
//{
//	// ��Ա����
//	char name[20];
//	short age;    
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct  Stu  
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = {"����",20,"15249187976","��"};  // �����ṹ����� --����
//	// �ֲ��ṹ�����
//	Stu s2 = {"����",30,"15599345642","����"};
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
//	// ��Ա����
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
//	Stu s = {"����",40,"15598886688","��"};
//	// ��ӡ�ṹ������
//	Print(s);//�ṹ�崫�Σ�Ҫ���ṹ��ĵ�ַ
//	Print2(&s);//�˷����ţ���ʡ�ռ�
//	// �������ε�ʱ�򣬲���ʱ��Ҫѹջ�ģ��������һ���ṹ������ʱ�򣬽ṹ�����
//	// ����ѹջ��ϵͳ�����Ƚϴ󣬻ᵼ�����ܵ��½�
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
	int ret = Add(a, b); //���δ������󴫣��ȴ�b�ٴ�a
	return 0;
}