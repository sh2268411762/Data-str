//#include <stdio.h>
//#include <stdlib.h>
////һ�����������������������֮�⣬���������ֶ����������Ρ�
////��д�����ҳ�������ֻ����һ�ε����֡���������Ϊ{ 1��3��5��7��1��3��5��9 }���ҳ�7��9��
//
//void findOneDig(int a[],int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < length; j++)
//		{
//			if (a[j] == a[i])
//			{
//				flag++;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", a[i]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,1,3,5,9 };
//	int sz = sizeof(arr) / sizeof(0);
//	findOneDig(arr, sz);
//	return EXIT_SUCCESS;
//}
//
//
//
////int f(int x, int y)
////{
////	return (x & y) + ((x ^ y) >> 1);
////}
////void fun(int x, int y, int* c, int* d)
////{
////	*c = x + y;
////	*d = x - y;
////}
////int main()
////{
////	//int ret = f(2, 4);
////	//printf("%d\n", ret);
////
////
////	//int i;
////	//int count = 0;
////	//for (i = 0; i <= 11; i++)
////	//{
////	//	count++;
////	//}
////	//printf("%d\n", count);
////
////
////	int a = 4, b = 3, c = 0, d = 0;
////	fun(a, b, &c, &d);
////	printf("%d,%d\n", c, d);
////
////	return EXIT_SUCCESS;
////}