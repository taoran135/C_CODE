#define _CRT_SECURE_NO_WARNINGS
//��ֹ������������Щ��ȫ��صľ�����Ϣ��
#include <stdio.h>
#include<string.h>
//#define MAX 10
//enum sex
//{
//	MALE,
//    FEMALE,
//	SECRET
////MALE,FEMALE,SECRET --ö�ٳ���
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



 //    // const - ������
	//int arr[10] = { 0 };
	//const int  n = 10;//n�Ǳ������������г����ԣ���������˵�ǳ�����
	////int arr[n] = { 0 };
	//// const���εĳ�����
	//const int num = 4;
	//printf("%d\n", num); 
	////num = 8;
	//printf("%d\n", num);
	//3;//���泣��

	//int arr[MAX] = { 0 };
	//printf("%d\n", MAX);

	//enum sex s = MALE;
	//printf("%d\n", MALE);//0
	//printf("%d\n", FEMALE);//1
	//printf("%d\n", SECRET);//2

	//char arr1[] = "abc";//����
	////"abc -- 'a','b','c','\0'(�ַ����Ľ�����־��
	////'\0' --0
	////'a' --97
	////A --65
	////ASCII����
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
	////\32 -- 32��2��8��������
	////32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�
	////32 -- 10���� 26 --> ��ΪASCII��ֵ������ַ�
	//printf("%c\n",'\x61');


	////int input = 0;
	////printf("�������\n");
	////printf("��Ҫ�ú�ѧϰ��?��1/0)>:");
	////scanf("%d",&input);// 1/0
	////if (input == 1)
	////	printf("��offer\n");
	////else
	////	printf("������\n");

	//int line = 0;
	//printf("�������\n");

	//while (line < 20000)
	//{
	//	printf("��һ�д��룺%d\n", line);
	//	line++;
	//}
	//if (line >= 20000)
	//	printf("��offer\n");


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

	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
	//printf("%d\n",arr[9]);//�±����ʽ��������
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

	////�ƣ�2���ƣ�λ������
	//// >> ����
	//// << ����
	//int a = 1;
	////����1ռ4���ֽ� = 32bitλ    
	////00000000000000000000000000000001
	//int b = a << 1;
	//printf("%d\n", b);

	////��2���ƣ�λ������
	//// & ��λ��
	////| ��λ��
	//// ^ ��λ���     
	//int a = 2;
	//int b = 5;
	//int c = a & b;
	//// 010
	//// 101 
	//// 000

	//int d = a | b;
	////111
	//int e = a ^ b;
	//// ���ļ��������
	//// ��Ӧ�Ķ�����λ��ͬ����Ϊ0
	////��Ӧ�Ķ�����λ���죬��Ϊ1
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
	////// ���ϸ�ֵ��
	//printf("%d\n", a);


   ////��Ŀ������
   ////˫Ŀ������
   ////��Ŀ������
   //int a = 10;
   //int b = -a;
   //int c = +3;
   //a + b; // + ˫Ŀ������
   ////c ������0��ʾ�٣�һ�еķ�0������
   //
   //printf("%d\n", a);
   //printf("%d\n", !a);
   ////sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
   //printf("%d\n", sizeof(a));
   //printf("%d\n",sizeof a);
   //printf("%d\n", sizeof(int));
   //int arr[10] = { 0 };//10������Ԫ�ص�����
   //int sz = 0;
   //printf("%d\n", sizeof(arr));
   ////���������Ԫ�ظ���
   //// ���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
   //sz = sizeof(arr) / sizeof(arr[0]);
   //printf(" sz=%d\n", sz);

   //int a = 0;
   //int b = ~a;
   //printf("%d\n",b);//-1
   ////~ --����2���ƣ�λȡ��
   ////00000000000000000000000000000000
   ////11111111111111111111111111111111
   //// 11111111111111111111111111111110
   //// 10000000000000000000000000000001
   ////ԭ�롢���롢����
   ////�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
   // 
   
  //   int a = 10;
	 ////int b = a++;//����++,��ʹ�ã���++
	 //// printf("a =%d b=%d\n", a, b);//11 10
	 ////int b = ++a;//ǰ�� ++����++����ʹ��
	 ////printf("a =%d b=%d\n", a, b);//11 11
	 ////int b = a--;//���� --��,��ʹ�ã���--
	 ////printf("a =%d b=%d\n", a, b);//9 10
	 //int b =-- a;//ǰ�� --����--����ʹ��,
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
	 //arr[4];//--�±����ò�����
	 //int a = 10;
	 //int b = 10;
	 //int sum = Add(a, b);//() --�������ò�����



//	return 0; 
//	
//}
	//ö�ٳ���
	//ö�� -- һһ�о�
	// �Ա��� Ů ����
	//ö�ٹؼ��� --enum

//int main()
//{
//	auto int a = 10;//�ֲ�����--�Զ�����
//	return 0;  
//}

//int main() 
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int����ı������з��ŵ�
//	signed int;
//	unsigned int num = 1;
//	//struct---�ṹ��ؼ���
//	//union --������/������
//	return 0;
//}

//int main() 
//{
//	//typedef --���Ͷ���--�����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//void test()// ������һ����Ϊ test �ĺ�������������������κβ�����
////���Ҳ������κ�ֵ������ζ���ں������ڲ������� return 
//// ��䷵��һ�������ֵ����������ʹ�� return; �������ǰ����������ִ�У���
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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
//	//extern--�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

////�����ⲿ����
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

//�����ʶ������
//#define MAX 100
//#define ���Զ����-������
//Max(int x, int y) 
//{
//	if (x > y)
//		return x;
//	else
//		return  y;
//
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main(void)
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max =%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ
//	*p =20;//*--�����ò�����
//	printf("a=%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
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



