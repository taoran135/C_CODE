#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	//int ch = 0;
//	//// ctrl + z 终止
// //   //EOF --end of file 文件结束标志 ->值为 -1
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s",password);//输入密码并存放在password数组中
//	//当你使用 scanf("%s", password); 时，password 会被当作指向数组首元素的指针，
//	// 也就是 &password[0]
//	// 缓冲区还剩下一个‘\n’
//	// 读取一下‘\n’
//	//getchar();//只能读取一个字符
//	while ((ch = getchar()) != '\n')
//		//在 C 语言里，不同运算符有着不同的优先级。!= 运算符的优先级要高于 = 运算符。
//		// 所以，在执行该语句时，会先计算 getchar() != '\n' 这个表达式。ch 最终存储的值要么是 1
//		// （读取的不是换行符）， 要么是 0（读取的是换行符）
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar(); // Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else 
//	{
//		printf("放弃确认\n");
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


// 计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int result = 1;
//	scanf("%d", &n);
//	// while循环
//	/*while (i <= n)
//	{
//		result = result * i;
//		i++;
//	}
//	printf("%d",result);*/
//
//	// for循环
//	/*for (i=1; i <= n; i++)
//	{
//		result = result * i;
//	}
//	printf("%d", result);*/
//
//	// do...while循环
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

//计算1!+2!+...+n!

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
//        result = 1; // 每次计算新的阶乘前，重置 result 的值为 1
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

//在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,int v[],int n);功能：
//在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
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
//			printf("找到了，下标是: %d\n", i);
//			break;
//
//		}
//	}
//	if (i == sz)
//		printf("找不到了\n");
//	return 0;
//	//时间复杂度为n
//}

////折半查找算法（二分查找算法）
////时间复杂度为log2(n)
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	
//	return 0;
//
//}

// 编写代码，演示多个字符从两端移动，向中间汇聚
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
//	// 0，1，2，3
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
//		//在 C 语言中，数组名是一个常量指针，它指向数组的首元素。
//		//arr2 代表的是这个字符数组首元素arr2[0] 的地址,printf函数在处理字符串输出时，需要一个
//		// 指向字符串起始位置的指针。它会从该指针所指向的位置开始，逐个输出字符，
//		// 直至遇到字符串结束符'\0'
//		Sleep(1000);//1s
//		system("cls"); //执行系统命令的一个函数 ----cls（clean screen)---清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2); 
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登陆三次（只允许输入三次密码，如果密码正确
// 则提示登陆成功，如果三次均输入错误，则退出程序）

int main()
{
    int i = 0;
    char password[20] = { 0 };
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码 :>");
        scanf("%s", password);
        if (strcmp(password , "123456") == 0)// == 不能用来比较两个字符串是否相等，应该使用一个库函数--strcmp
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }


    }
    if (i == 3)
    {
        printf("三次密码均错误，退出程序\n");

    }
    return 0;
}