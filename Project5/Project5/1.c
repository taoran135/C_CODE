#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//// 将三个数按从小到大输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);// 2 1 3
//	// 算法实现
//	// a中放最小值
//	// b次之
//	// c中放最大值
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


// 给定两个数，求这两个数的最大公约数（辗转相除法）
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

//打印1000到2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2. 能被400整除的是闰年
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

//// 打印100到200之间的素数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt --- 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		// 素数判断规则
//		// 1. 试除法
//		// 产生2->i-1的数
//		// 2.如果i=a*b，那么a或b中至少有一个数字小于k的算术平方根
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

// 1---100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i中有没有9
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


//分数求和
//计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100的值，打印出结果
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

//求十个数字中的最大值
//int main()
//{
//	int arr[] = { 34,56,4,21,76,48,49,51,45,78 };
//	int max = arr[0];//最大值
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


// 打印乘法口诀表
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
//			//%2d表示用两位数表示结果，位数不够在其前方用空格，%-2d在后方
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 猜数字游戏
// 1. 电脑会随机生成成一个随机数
// 2. 猜数字

#include <stdlib.h>
#include <time.h>
void game()
{
    // 1.生成一个随机数
    int ret = 0;
    int guess = 0;
    //RAND_MAX 0--32767
    ret = rand()%100+1;//生成1-100随机数
    printf("%d\n", ret);
    // 2.猜数字
    while (1)
    {
        printf("猜数字\n");
        scanf("%d", &guess);
        if (guess > ret)
        {
            printf("猜大了\n");
        }
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了");
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
    srand((unsigned int) time( NULL));//srand(unsigned int seed) 随机种子
    // 时间戳 ---> 当前计算机的时间-计算机的起始时间（1970.1.1.0：0：0）= （xxxx）秒
    // 拿时间戳来设置随机数的生成起点 
    // time_t *timer()
    //time(NULL)：time 函数属于 C 标准库函数，其作用是返回当前的时间戳，
    // 也就是从 1970 年 1 月 1 日 00:00:00 UTC 到当前时间所经过的秒数。
    // time 函数的参数为 NULL 时，会直接返回当前时间戳。time 函数的返回类型是 time_t，
    // 通常是一个整数类型。
    //(unsigned int)：这是一个强制类型转换操作，其作用是把 time 函数返回的 time_t 类型的值转换
    // 为 unsigned int 类型。这是因为 srand 函数要求传入的参数类型为 unsigned int。
    //srand(...)：srand 函数的作用是设置随机数生成器的种子。种子不同，
    // rand 函数生成的随机数序列就不同。要是不调用 srand 函数，rand 函数会默认使用种子 1，
    // 这就会使每次程序运行时生成的随机数序列相同。
    do {
        menu();
        printf("请选择：>");
        scanf("%d",&input );
        switch (input)
        {
        case 1:
            game();// 猜数字游戏
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;

        }

    } 
    while (input);
    return 0;
}

// goto语句
//int main() 
//{
// //again:
//    printf("hello bit\n");
//    goto again;
//    printf("你好\n");
//again:
//    printf("hehe\n");
//    return 0;
//}

//// 关机程序
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//    char input[20] = { 0 };
//    // shutdown -s(设置关机） -t（设置时间关机） 60
//    // shutdown -a(取消关机）
//    // system（）---执行系统命令
//    system("shutdown -s -t 60");
//again:
//    printf("请注意，你的电脑将在1分钟内关机,如果输入:我是猪，就取消关机,请输入>\n");
//    scanf("%s", input);
//    if (strcmp(input, "我是猪") == 0)//比较两个字符串
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

