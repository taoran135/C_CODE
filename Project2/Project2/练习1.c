#include <stdio.h>
void deny(void);
void jolly(void);
//void jolly(void); 表示声明了一个名为 jolly 的函数。
//void 作为函数返回类型，意味着该函数执行完毕后不会返回任何值。
//(void) 作为函数的参数列表，表示该函数不接受任何参数。
void br(void);
void ic(void);
void smile(void);
int main(void)

{
//1.练习printf函数
	/*printf("Gustav Mahlar\n");
	printf("Gustav\nMahlar\n");
	printf("Gustav");
	printf("  Mahlar");*/

//2.将年龄转换为天数，不考虑闰年
	/*int age = 0;
	scanf_s("%d",&age);
	int day = age * 365;
	printf("%d",day);*/

//3.调用两个自定义函数，一个名为jolly(),用于打印前三条消息，调用一次打印一条，
// 另一个函数名为deny（），打印最后一条消息
	/*jolly();
	jolly();
	jolly();
	deny();*/

//4.调用两个自定义函数，一个名为br（），调用一次打印一次“Brazil，Russia”；
	//另一个名为ic（），调用一次打印“India，China”，其他内容在main函数中完成
	/*br();
	ic();
	printf("India，China\n");
	printf("Brazil，Russia\n");*/

//5.创建一个整型变量toes，并将toes设置为10，计算toes的两倍和平方
	/*int toes = 10;
	int toes1 = toes * 2;
	int toes2 = toes * toes;
	printf("%d %d", toes1, toes2);*/

//6.生成特定形式的smile
	smile();
	smile();
	printf("smile!\n");
	smile();
	printf("smile!\n");
	smile();


	return 0;
}