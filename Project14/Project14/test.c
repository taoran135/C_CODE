#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ѧ����Ϣ��ѧ�� ���� ����
//int main()
//{
//	// ����һ��ѧ��
//	unsigned int qiqi_number =10001; //ѧ��
//	char qiqi_name[20] = "qiqi"; // ����
//	unsigned char qiqi_age = 18; //����
//
//	// ���
//	printf("%ld %s %d\n", qiqi_number, qiqi_name, qiqi_age);
//	// %ld:���ڴ�ӡ long int ���͵������������ͣ�
//
//	//���飺�������ѧ����Ϣ
//	unsigned int numbers[5] = { 10002,10003,10004,10005,10006 };
//	char names[5][20] = { "����","����","����","����","��ʯ��ʦ" };
//	//1. �ַ����ı���
//	/*C ������û��ԭ���ַ������ͣ��ַ��������ַ������ʾ�ģ���'\0'��β��
//		���磺"����" ʵ�ʴ洢Ϊ{ '��', '��', '\0' }��ռ�� 3 ���ֽ�*/
//	/*2. һά����ֻ�ܴ�һ���ַ���
//		������ char names[20]����ֻ�ܴ洢һ�����ȡ�19 ���ַ������� 1 �ֽڸ�'\0'����
//		��Ҫ�� 5 �����֣����ö�ά���飺char names[5][20]��*/
//	/*char names[5][20] ��ʾ��
//		5 ���ַ�����ÿ��һ�����֣���
//		ÿ���ַ������ 19 ���ַ����� 20 �ֽڴ�'\0'����*/
//	unsigned char ages[5] = {12,13,14,15,16};
//
//	// ���
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%ld %s %d\n", numbers[i], names[i], ages[i]);
//		//names[i] �ǵ�i���ַ������׵�ַ������Ϊchar* ��
//	}
//
//	// ѧ���ṹ---�ṹ������
//	Student qiqi = { 10009,"����",18 };
//	Student stu[5] =
//	{
//		{ 10009,"����",18 },
//		{ 10009,"����",18 },
//		{ 10009,"����",18 },
//		{ 10009,"����",18 },
//		{ 10009,"����",18 }
//	};
//	return 0;
//}

// ����һ��ѧ���ṹ�����ͣ�����ѧ�ţ�����������
//struct Student
//{
//	int number;  //��Ա����
//	char name[20];
//	int age;
//}baby,hello;
//
//
//int main()
//{
//	// ����ṹ�����
//	//struct Student���ǽṹ�����ͣ���Studentֻ�ǽṹ��ı�ǩ�����������������
//
//	struct Student maye;
//	baby;
//	hello;
//
//	// �ṹ��ȡ���� typedef int INT;
//	typedef struct Student Student;
//	Student liqi;
//	
//	return 0;
//}


// �ṹ������ĳ�ʼ����ʹ��{ }�ۺϷ�ʽ��ʼ��
//struct Student
//{
//	int number;
//	char name[20];
//	int age;
//};
//int main()
//{
//	//1.ȫ����ʼ��Ϊ0
//	//struct Student maye = { 0 };
//
//	//2.�ֲ���ʼ��
//	//struct Student maye = { 520 }; //��ʼ����һ�����������Զ���ʼ��Ϊ0
//	struct Student maye = { .name ="maye",.number=555};// ָ����ʼ����Ա
//	
//	// ����һ���ṹ���ʼ��
//	struct Student moy = maye;
//	moy =(struct Student) { 123,"īӰ",30 };
//	moy.number = 678;
//	strcpy(moy.name, "����");
//	//char *strcpy(char *destination, const char *source);
//	//�����ַ������� source ָ����ַ�����������ֹ�� '\0'�����Ƶ� destination ָ����ڴ�ռ䡣
//	//����ֵ������ destination ��ָ�룬������ʽ������
//	
//	//����ṹ���Ա
//	printf("%d %s %d\n", maye.number, maye.name, maye.age); // 0 (\0) 0
//	printf("%d %s %d\n", moy.number, moy.name, moy.age);
//
//
//	// �ṹ���Ա�ķ��ʷ�ʽ ��Ա��������� . ->
//	struct Student stu = { .name ="stu"};
//	// 1.��ʹ����ͨ�Ľṹ����������ʳ�Ա��ʱ��ʹ��.���ʳ�Ա
//	puts(stu.name);
//
//	// 2.��ʹ�ýṹ��ָ����ʳ�Ա��ʱ��ʹ��->
//	puts((&stu)->name);
//
//	struct Student* pstu = &stu;
//	(*pstu).name;
//	pstu->name;
//	return 0;
//}


// �������ڽṹ�壬����������
//struct Date
//{
//	short year;
//	short month;
//	short day;
//};
//// ����Person�ṹ�壬�������������䣬��������
//struct Person
//{
//	char name[20];
//	int age;
//	struct Date birth; //��������
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
//	}birth; //��������
//};	
//
//int main()
//{
//	struct Date date = { 2022,5,19 };
//	struct Person maye = { "��ʯ��ʦ",18, {2004,5,26} };
//	printf("%s %d ��%hd %hd %hd)\n", maye.name, maye.age , maye.birth.year, maye.birth.month,maye.birth.day);
//
//	return 0;
//}


struct Tel
{
	char name[20];
	long long tel; //�ֻ��ţ�ע�ⲻҪԽ��
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
		{"����",15647495834},
		{"��ʯ",15647495834},
		{"����",15647495834},
		{"����",15647495834},
		{"����",15647495834},

	};

     // ѭ������
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %lld", tels[i].name, &tels[i].tel);
	 }
	// �����ṹ������
	/*for (int i = 0; i < 5; i++)
	{
		printf("%s %lld\n", tels[i].name, tels[i].tel);
		printf("%s %lld\n",(tels+i)->name, tels[i].tel);
	}*/
	showAllTel(tels, 5);
	return 0;
}