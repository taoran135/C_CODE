#include <stdio.h>
void deny(void);
void jolly(void);
//void jolly(void); ��ʾ������һ����Ϊ jolly �ĺ�����
//void ��Ϊ�����������ͣ���ζ�Ÿú���ִ����Ϻ󲻻᷵���κ�ֵ��
//(void) ��Ϊ�����Ĳ����б���ʾ�ú����������κβ�����
void br(void);
void ic(void);
void smile(void);
int main(void)

{
//1.��ϰprintf����
	/*printf("Gustav Mahlar\n");
	printf("Gustav\nMahlar\n");
	printf("Gustav");
	printf("  Mahlar");*/

//2.������ת��Ϊ����������������
	/*int age = 0;
	scanf_s("%d",&age);
	int day = age * 365;
	printf("%d",day);*/

//3.���������Զ��庯����һ����Ϊjolly(),���ڴ�ӡǰ������Ϣ������һ�δ�ӡһ����
// ��һ��������Ϊdeny��������ӡ���һ����Ϣ
	/*jolly();
	jolly();
	jolly();
	deny();*/

//4.���������Զ��庯����һ����Ϊbr����������һ�δ�ӡһ�Ρ�Brazil��Russia����
	//��һ����Ϊic����������һ�δ�ӡ��India��China��������������main���������
	/*br();
	ic();
	printf("India��China\n");
	printf("Brazil��Russia\n");*/

//5.����һ�����ͱ���toes������toes����Ϊ10������toes��������ƽ��
	/*int toes = 10;
	int toes1 = toes * 2;
	int toes2 = toes * toes;
	printf("%d %d", toes1, toes2);*/

//6.�����ض���ʽ��smile
	smile();
	smile();
	printf("smile!\n");
	smile();
	printf("smile!\n");
	smile();


	return 0;
}