//#include <stdio.h>
//#include <stdlib.h>
//
//
//int findMin(int a[], int key)
//{
//	int min = a[0];
//	for (int i = 0; i < key; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//int main()
//{
//	int k = 0;
//	int arr[20] = { 33,22,12,34,34,55,34,76,54,12,33,49,90,88,65,48,39,93,88,20 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("请输入操作数k：->");
//	(void)scanf("%d", &k);
//	if (k <= sz)
//	{
//		int ret = findMin(arr, k);
//		printf("数组前[%d]个数中最小的数是：%d\n", k, ret);
//	}
//	else
//	{
//		printf("数组只有[%d]个数，输入过大！！！\n", sz);
//	}
//	return EXIT_SUCCESS;
//}
//
////int a = 1;
////void test()
////{
////	int a = 2;
////	a += 1;
////}
////#define M(x,y) x%y
////int main()
////{
////	//int count = 0;
////	//int m, n;
////	//for (m = 0, n = -1; n = 0; m++, n++)
////	//{
////	//	n++;
////	//	count++;
////	//}
////	//printf("%d\n", count);
////
////
////	//test();
////	//printf("%d\n", a);
////
////
////	//int x, y;
////	//y = 10;
////	//x = y++;
////	//printf("%d,%d\n", x, y);
////
////	//int i = 0, j = 0;
////	//if ((++i > 0) || (++j > 0))
////	//{
////	//	printf("%d,%d\n", i, j);
////	//}
////
////	//int a = 13, b = 94;
////	//printf("%d\n", M(b, a + 4));
////
////	//int a = 9;
////	//char b = 7;
////	//float c = 7.9f;
////	//double d = 88;
////	//int ret = a * b + d - c;
////
////
////	//int x = 0;
////	//switch (++x)
////	//{
////	//case 0:++x;
////	//case 1:++x;
////	//case 2:++x;
////	//}
////	//printf("%d\n", x);
////	return 0;
////}