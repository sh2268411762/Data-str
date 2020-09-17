//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////求一个有序数组中两个元素值相加为k的数字，返回这两个元素的下标。
////要求时间复杂度是O(n),空间复杂度O(1)
//
//
//int* findAddK(int a[], int key,int t[],int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int temp = sz - 1;
//		while ((key - a[i]) != a[temp])
//		{
//			temp--;
//			if (a[temp] < key - a[i] || a[temp] == key - a[i])
//			{
//				break;
//			}
//		}
//		if ((key - a[i]) == a[temp])
//		{
//			t[1] = i;
//			t[0] = temp;
//		}
//	}
//	return t;
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int temp[2] = { 0 };
//	findAddK(arr, 14,temp,sz);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", temp[i]);
//	}
//	return EXIT_SUCCESS;
//}
//
//
////void foo(int b[][3])
////{
////	++b;
////	b[1][1] = 9;
////}
////int main()
////{
////	//unsigned long p[] = { 6,7,8,9,10 };
////	//unsigned long* ptr = p;
////	//*(ptr + 2) += 2;
////	//printf("%d,%d\n", *ptr, *(ptr + 2));
////	
////
////	//char* sz = "abcde";
////	//sz += 2;
////	//printf("%lu\n", sz);
////
////
////	//int i;
////	//char a[20] = { 0 };
////	//for (i = 0; i < 10; i++)
////	//{
////	//	a[i] = '0';
////	//}
////	//printf("%d\n", strlen(a));
////
////
////	//int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
////	//foo(a);
////	//printf("%d\n", a[2][1]);
////
////
////	//int x = 0, y = 0, z = 0;
////	//z = (x == 1) && (y = 2);
////	//printf("%d\n", y);
////
////
////	int i = 10;
////	long long t = sizeof(i++);
////	printf("%d\n", i);
////
////	return EXIT_SUCCESS;
////}