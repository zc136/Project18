//���鴫��
#include<stdio.h>

////void test (int arr[])
////{}
////void test(int arr[10])
////{}
//void test(int *arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	
//}
void test(int arr[3][5])
{}
void test(int arr[][5])
{}
void test(int arr[3][])//  ���ַ�ʽ���󣬶�ά�������п���ʡ�ԣ������в�����ʡ��
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
	test1(arr);
	test2(arr);
	return 0;
}