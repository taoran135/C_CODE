#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//// ������������С�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);// 2 1 3
//	// �㷨ʵ��
//	// a�з���Сֵ
//	// b��֮
//	// c�з����ֵ
//
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


// ���������������������������Լ����շת�������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��ӡ1000��2000֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2. �ܱ�400������������
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//// ��ӡ100��200֮�������
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt --- ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		// �����жϹ���
//		// 1. �Գ���
//		// ����2->i-1����
//		// 2.���i=a*b����ôa��b��������һ������С��k������ƽ����
//
//
//		/*int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j = i)
//		{
//			printf("%d ", i);
//			count++;
//		}*/
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

// 1---100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i����û��9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	    if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//�������
//����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
            //sum += flag*1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��ʮ�������е����ֵ
//int main()
//{
//	int arr[] = { 34,56,4,21,76,48,49,51,45,78 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


// ��ӡ�˷��ھ���
//int main()
//{
//	int m = 1;
//	int n = 1;
//	int re = 0;
//	for(m=1;m<=9;m++)
//	{
//		for (n = 1; n <= m; n++)
//		{
//			re = m * n;
//			printf("%d*%d=%-2d ",n, m,re);
//			//%2d��ʾ����λ����ʾ�����λ����������ǰ���ÿո�%-2d�ں�
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ��������Ϸ
// 1. ���Ի�������ɳ�һ�������
// 2. ������

#include <stdlib.h>
#include <time.h>
void game()
{
    // 1.����һ�������
    int ret = 0;
    int guess = 0;
    //RAND_MAX 0--32767
    ret = rand()%100+1;//����1-100�����
    printf("%d\n", ret);
    // 2.������
    while (1)
    {
        printf("������\n");
        scanf("%d", &guess);
        if (guess > ret)
        {
            printf("�´���\n");
        }
        if (guess < ret)
        {
            printf("��С��\n");
        }
        else
        {
            printf("��ϲ�㣬�¶���");
            break;
        }
    }
}
void menu()
{
    printf("*****************************************\n");
    printf("********  1.play   0.exit    ************\n");
    printf("*****************************************\n");
}
int main()
{
    int input = 0;
    srand((unsigned int) time( NULL));//srand(unsigned int seed) �������
    // ʱ��� ---> ��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��= ��xxxx����
    // ��ʱ����������������������� 
    // time_t *timer()
    //time(NULL)��time �������� C ��׼�⺯�����������Ƿ��ص�ǰ��ʱ�����
    // Ҳ���Ǵ� 1970 �� 1 �� 1 �� 00:00:00 UTC ����ǰʱ����������������
    // time �����Ĳ���Ϊ NULL ʱ����ֱ�ӷ��ص�ǰʱ�����time �����ķ��������� time_t��
    // ͨ����һ���������͡�
    //(unsigned int)������һ��ǿ������ת���������������ǰ� time �������ص� time_t ���͵�ֵת��
    // Ϊ unsigned int ���͡�������Ϊ srand ����Ҫ����Ĳ�������Ϊ unsigned int��
    //srand(...)��srand ��������������������������������ӡ����Ӳ�ͬ��
    // rand �������ɵ���������оͲ�ͬ��Ҫ�ǲ����� srand ������rand ������Ĭ��ʹ������ 1��
    // ��ͻ�ʹÿ�γ�������ʱ���ɵ������������ͬ��
    do {
        menu();
        printf("��ѡ��>");
        scanf("%d",&input );
        switch (input)
        {
        case 1:
            game();// ��������Ϸ
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����\n");
            break;

        }

    } 
    while (input);
    return 0;
}

// goto���
//int main() 
//{
// //again:
//    printf("hello bit\n");
//    goto again;
//    printf("���\n");
//again:
//    printf("hehe\n");
//    return 0;
//}

//// �ػ�����
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//    char input[20] = { 0 };
//    // shutdown -s(���ùػ��� -t������ʱ��ػ��� 60
//    // shutdown -a(ȡ���ػ���
//    // system����---ִ��ϵͳ����
//    system("shutdown -s -t 60");
//again:
//    printf("��ע�⣬��ĵ��Խ���1�����ڹػ�,�������:��������ȡ���ػ�,������>\n");
//    scanf("%s", input);
//    if (strcmp(input, "������") == 0)//�Ƚ������ַ���
//    {
//        system("shutdown -a");
//    }
//    else 
//    {
//        goto again;
//
//    }
//    return 0;
//}

