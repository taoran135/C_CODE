#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	//int ch = 0;
//	//// ctrl + z ��ֹ
// //   //EOF --end of file �ļ�������־ ->ֵΪ -1
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s",password);//�������벢�����password������
//	//����ʹ�� scanf("%s", password); ʱ��password �ᱻ����ָ��������Ԫ�ص�ָ�룬
//	// Ҳ���� &password[0]
//	// ��������ʣ��һ����\n��
//	// ��ȡһ�¡�\n��
//	//getchar();//ֻ�ܶ�ȡһ���ַ�
//	while ((ch = getchar()) != '\n')
//		//�� C �������ͬ��������Ų�ͬ�����ȼ���!= ����������ȼ�Ҫ���� = �������
//		// ���ԣ���ִ�и����ʱ�����ȼ��� getchar() != '\n' ������ʽ��ch ���մ洢��ֵҪô�� 1
//		// ����ȡ�Ĳ��ǻ��з����� Ҫô�� 0����ȡ���ǻ��з���
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar(); // Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	for(;;)
//	{
//		printf("hehe\n"); 
//	}
//
//	return 0;
//}


//int main()
//{
//	// 1---10
//	int i = 1;
//	do {
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}


// ����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int result = 1;
//	scanf("%d", &n);
//	// whileѭ��
//	/*while (i <= n)
//	{
//		result = result * i;
//		i++;
//	}
//	printf("%d",result);*/
//
//	// forѭ��
//	/*for (i=1; i <= n; i++)
//	{
//		result = result * i;
//	}
//	printf("%d", result);*/
//
//	// do...whileѭ��
//	/*do
//	{
//		result = result * i;
//		i++;
//	} 
//	while (i <= n);
//	printf("%d", result);*/
//	return 0;
//
//}

//����1!+2!+...+n!

//int main()
//{
//    int i = 0;
//    int m = 0;
//    int n = 0;
//    int result = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    while (i < n)
//    {
//        i++;
//        result = 1; // ÿ�μ����µĽ׳�ǰ������ result ��ֵΪ 1
//        for (m = 1; m <= i; m++)
//        {
//            result = result * m;
//        }
//        sum = sum + result;
//    }
//    printf("%d", sum);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int result = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		result = result * i;
//		sum = sum + result;
//	}
//	printf("%d", sum);
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);���ܣ�
//��v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���: %d\n", i);
//			break;
//
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ�����\n");
//	return 0;
//	//ʱ�临�Ӷ�Ϊn
//}

////�۰�����㷨�����ֲ����㷨��
////ʱ�临�Ӷ�Ϊlog2(n)
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	
//	return 0;
//
//}

// ��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	// welcome to bit!!!!!!
//	// ####################
//	// w##################!
//	// we################!!
//	// wel##############!!!
//	// .....
//	// welcome to bit!!!!!!
//	// char arr[]= "abc";
//	// char arr1[] = {'a','b','c','\0'};
//	//[1,2.3,\0]
//	// 0��1��2��3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//�� C �����У���������һ������ָ�룬��ָ���������Ԫ�ء�
//		//arr2 �����������ַ�������Ԫ��arr2[0] �ĵ�ַ,printf�����ڴ����ַ������ʱ����Ҫһ��
//		// ָ���ַ�����ʼλ�õ�ָ�롣����Ӹ�ָ����ָ���λ�ÿ�ʼ���������ַ���
//		// ֱ�������ַ���������'\0'
//		Sleep(1000);//1s
//		system("cls"); //ִ��ϵͳ�����һ������ ----cls��clean screen)---�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2); 
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Σ�ֻ���������������룬���������ȷ
// ����ʾ��½�ɹ���������ξ�����������˳�����

int main()
{
    int i = 0;
    char password[20] = { 0 };
    for (i = 0; i < 3; i++)
    {
        printf("���������� :>");
        scanf("%s", password);
        if (strcmp(password , "123456") == 0)// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��--strcmp
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
        {
            printf("�������\n");
        }


    }
    if (i == 3)
    {
        printf("��������������˳�����\n");

    }
    return 0;
}