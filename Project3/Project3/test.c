#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



//int main(void) 
//{
//	//�ַ����Ľ�����־�ǣ�'\0'
//	"abxcfdef";
//	//����'\0'--ת���ַ�---ASCLL��ֵΪ0
//	//0---����0
//	//'0'---ASCLL��ֵΪ48
//	//EOF ---end of file ---�ļ�������־��ֵΪ-1
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
//	int arr[] = { 1,2,3,4,5,6 };//��ʼ������
//	// intָ�������е�Ԫ��������int
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//����
//	printf("%d\n", sizeof(arr));//24,���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//6
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//    // ~ --������λȡ�� 
//	// 1010
//	//0101
//	printf("%d\n", b);//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//printf("%d\n", &a);
//	//int* p = &a;//pΪָ�����������Ϊint*
//	//printf("%p\n", p);
//	//*p=20;//*--�����ò��������ӷ��ʲ�����
//	//printf("a=%d\n", a);
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("d=%lf\n", d);
//	printf("pd=%lf\n", *pd);
//	return 0;
//
//}


//�ṹ��
//char int double .....
//�ˣ���...---���Ӷ���
//����+���+����+��ݺ���...
//����+����+������+����+���...
//���Ӷ���---�ṹ��---�Լ����������һ������

//#include<string.h>
////����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};

//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = {"c���Գ������",55};
//	struct Book* pb = &b1;
//	strcpy(b1.name, "c++");//name Ϊ���飬�޷�ֱ���޸�
//	printf("���� :%s\n", b1.name);
//	//strcpy ---string copy---�ַ�������
//    //����pb��ӡ���ҵ������ͼ۸�
//	/*printf("���� :%s\n", (*pb).name);
//	printf("�۸� :%d\n", (*pb).price);*/
//	/*printf("%s\n", pb->name);
//	printf("%d\n", pb->price);*/
//	// . Ӧ�õ��ṹ��������ṹ�����.��Ա
//	// -> �ṹ��ָ��->��Ա
//	//printf("���� :%s\n",b1.name);
//	//printf("�۸� :%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸� :%d\n", b1.price);
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	;//�����--�����
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{ 
//		printf("δ����\n");
//		printf("����̸����\n");//������Ӵ���飬ִ�и����ᱨ��
//       
//	}
//	//�����--{}	
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else
//			printf("�ϲ���\n");
//	}
//	return 0;
//}

//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	//else��Ӧ�������������if��Ҳ����Ƕ���е�if,������Ϊ��
//	return 0;
//
//}


//�������
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
//		printf("����\n");
//	}
//	return 0;
//}

//1---100������
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("����Ϊ��%d\n", num);
//		num++;	
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
	/*if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	else if (4 == day)
		printf("������\n");
	else if (5 == day)
		printf("������\n");
	else if (6 == day)
		printf("������\n");
	else
		printf("������\n");*/
	//switch (day) 
	/*{
	    case 1:
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
	}*/
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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