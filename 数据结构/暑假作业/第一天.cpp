//#include <stdio.h>
//#include <stdlib.h>
//int f;
//int compare(int t[], int key)
//{
//	for (int i = 3; i >= 0; i--)
//	{
//		if (key == t[i])
//		{
//			return 1;
//		}
//	}
//	return -1;
//}
//int searchKey(int a[][5], int k)
//{
//	int ret;
//	if (k <= a[0][3])
//	{
//		ret = compare(a[0], k);
//	}
//	else if (k <= a[1][3])
//	{
//		ret = compare(a[1], k);
//	}
//	else if (k <= a[2][3])
//	{
//		ret = compare(a[2], k);
//	}
//	else
//	{
//		ret = compare(a[3], k);
//	}
//	return ret;
//}
//int main()
//{
//	//代码题
//	int a[4][5] = { {-5,-4,-3,-2,-1},{3,4,5,6,7},{8,9,10,11,12},{13,14,15,16,17} };
//	printf("请输入要查找的整数：->");
//	int key;
//	(void)scanf("%d", &key);
//	int ret = searchKey(a, key);
//	if (ret == 1)
//	{
//		printf("数组中含有[%d]元素", key);
//	}
//	else
//	{
//		printf("数组中没有[%d]元素", key);
//	}
//	return EXIT_SUCCESS;
//
//
//	////1、
//	//int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	//for (k = 0; k < 4; k++)
//	//{
//	//	q[k] = &a[k * 3];
//	//}
//	//printf("%d\n\n", q[3][1]);
//
//	////2、
//	//int i, j, a = 0;
//	//for (i = 0; i < 2; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		if (j % 2)
//	//		{
//	//			break;
//	//		}
//	//		a++;
//	//	}
//	//	a++;
//	//}
//	//printf("%d\n", a);
//
//	////4、
//	//char a = 1;
//	//int b = 10;
//	//float c = 5.6f;
//	//double d = 9.8;
//	//int ret = a * b + d - c;
//
//	////5、
//	//int a = 100;
//	//a >= 10 || a <= 0;
//
////	//填空
////	//1、
////#define INT_PTR int* 
////	typedef int* int_ptr;
////	INT_PTR a, b;
////	int_ptr c, d;
////	//2、
////	printf("%d\n", f);
//	////3、
//	//int a[4][5];
//	//int* ret = a[1] + 3;
//	//return EXIT_SUCCESS;
//}