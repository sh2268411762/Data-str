//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void fun(int x)
//{
//	int sum = 0;
//	int temp = x;
//	while (x != 0)
//	{
//		sum = 10 * sum + x % 10;
//		x /= 10;
//	}
//	if (temp == sum)
//	{
//		printf("%d是一个回文数\n", temp);
//	}
//	else
//	{
//		printf("%d不是一个回文数\n", temp);
//	}
//}
//int main()
//{
//	fun(1234321);
//	fun(231456);
//	fun(6868686);
//	return EXIT_SUCCESS;
//}
//
////struct st
////{
////	char name[10];
////	int age;
////	char gender;
////}std[3], * p = std;
////int main()
////{
////	//int c[] = { 1,3,5 };
////	//int* k = c + 1;//3
////	//printf("%d\n", *++k);//5
////
////
////	//int x = 12;
////	//int* p1 = &x, * p2;
////	//p2 = p1;
////	//printf("%d", *p2);
////
////
////	//scanf("%d", &(*p).age);
////	//scanf("%c", &std[0].gender);
////	//scanf("%c", &(p->gender));
////	//(void)scanf("%s", &std->name);
////
////
////	//int arr[] = { 6,7,8,9,10 };
////	//int* ptr = arr;
////	//*(ptr++) += 123;
////	//printf("%d,%d", *ptr, *(++ptr));
////
////
////	//int k, j, s;
////	//for (k = 2; k < 6; k++, k++)
////	//{
////	//	s = 1;
////	//	for (j = k; j < 6; j++)
////	//	{
////	//		s += j;
////	//	}
////	//}
////	//printf("%d\n", s);
////
////
////	//int a = 2, * p1, ** p2;
////	//p2 = &p1;
////	//p1 = &a;
////	//a++;
////	//printf("%d,%d,%d\n", a, *p1, **p2);
////
////	return EXIT_SUCCESS;
////}