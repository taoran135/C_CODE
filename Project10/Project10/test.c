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
//	//// ~ ---��������λȡ��
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
//	//printf("%d\n", ++a); // ǰ��++����++����ʹ�� 11
//	printf("%d\n", a++); // ����++����ʹ�ã���++  10 
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
//	test1(arr); // 8---��Ԫ�صĵ�ַ(ָ�룩
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
//	//i = a++ && ++b && d++; //++b && d++ û�в�������
//	//�� C �����У��߼��루&&����ѭ��·��ֵ����
//	//�������ʽΪ�٣�0�������Ҳ���ʽ���ᱻִ��
//	 i = a++ || ++b || d++;
//	 //�߼���||���Ķ�·�����������ʽΪ�棨�� 0�������Ҳ���ʽ���ᱻִ�С�
//	printf("a = %d\n b = %d\n c= %d\n d= %d\n", a, b, c, d); // 1 2 3 4(�� ��
//	// 1 3 3 4(��
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
//	// ������---getmax ,a,b
//	printf("max =%d\n", max);
//	return 0;
//}

// ѧ��
// int float
// ������һ���ṹ������--struct Student
//struct Student
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a = 10;
//	// ʹ��struct Student ������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Student s1 = {"����",20,"2019010305"};
//	struct Student* ps = &s1;
//	// �ṹ��ָ�� -> ��Ա��
//	/*printf("%s\n", (*ps).name);*/
//	printf("%s\n", ps->name);
//	//printf("%s\n",s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	// �ṹ�����.��Ա��
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
//	// 1111 1111 1111 1111 1111 1111 1000 0010  --����
//	// 1000 0000 0000 0000 0000 0000 0111 1110  --ԭ��
//	// -126
//	printf("%d\n", c); // -126
//	return 0;                   
//}

//int main()
//{
//	char a = 0xb6; //1011 0110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6) //�������� 1111 1111 1111 1111 1111 1111 1011 0110 ��=0xb6
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
//	return 0; // �����ӡc
//}

//int main()
//{
//	// cֻҪ������ʽ���ͻᷢ����������
//	char c = 1;
//	printf("%u\n", sizeof(c)); // 1
//	printf("%u\n", sizeof(+c)); // 4
//	printf("%u\n", sizeof(!c)); // 1
//	//���ܲ�������ʲô���ͣ�!����Ľ������ 0 ���� 1��
//	// ��������������int���͡�������C ��׼�涨sizeof�Բ������ʽ��ֵʱ�����Ϊ 1��
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = b + a * 3;
	return 0;
}