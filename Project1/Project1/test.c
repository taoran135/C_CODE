#include <stdio.h>
//����һ����stdio.h���ļ�
//std-��׼  standard  input output
//int num2 = 20;
int main(void) // ������-�������� main��������ֻ��һ��
// int �����͵���˼��mainǰ���int��ʾmain�������÷���һ������ֵ
{
	//���������������Ļ����� hello world
	//����-print function - printf -��ӡ����
    //�⺯��-c���Ա����ṩ������ʹ�õĺ���
	//ʹ�ñ��˵Ķ���-���к�-#include
	//int num1 = 10;
	printf("hello world \n");
	char ch = 'A'; //�ڴ�
	printf("%c\n",ch);  //%c --��ӡ�ַ���ʽ������
	//���ַ�����ʽ��ӡch
	short int age = 20;
	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
	//%d--��ӡ����
	//%c--��ӡ�ַ�
	//%f --��ӡ��������---С��
	// %p --�Ե�ַ����ʽ��ӡ
	// %x --��ӡʮ����������
	//short int --������
	//int -- ����
	//long -- ������
	long num = 100;
	printf("%d\n",num);
	float f = 5.0;
	printf("%f\n", f);
	double d = 3.14;
	printf("%lf\n", d);
	printf("%zd\n", sizeof(char));//1�ֽ�
	printf("%zd\n", sizeof(short));//2
	printf("%zd\n", sizeof(int));//4
	printf("%zd\n", sizeof(long));// 4/8
	printf("%zd\n", sizeof(long long));//8
	printf("%zd\n", sizeof(float));//4
	printf("%zd\n", sizeof(double));//8

	//�����������ĺ�

	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	//��������--ʹ�����뺯��scanf
	scanf_s("%d%d", &num1, &num2);
	//&--ȡ��ַ��
	//c�����﷨�涨������Ҫ�����ڴ�������ǰ�� 
	sum =	num1 + num2;
	printf("sum = %d\n", sum);


	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int val;
	printf("val = %d\n", val);
	return 0;//����0-һ������ֵ
}
