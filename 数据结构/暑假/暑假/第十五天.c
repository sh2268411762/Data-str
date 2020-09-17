//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//int fun(char* s1, char* s2)
//{
//	int i = 0;
//	while (s1[i] == s2[i] && s2[i] != '\0')
//	{
//		i++;
//	}
//	return (s1[i] == '\0' && s2[i] == '\0');
//}
//int main()
//{
//	//char a[] = "123456789";
//	//char* p = a;
//	//int i = 0;
//	//while (*p)
//	//{
//	//	if (i % 2 == 0)
//	//	{
//	//		*p = '!';
//	//	}
//	//	i++;
//	//	p++;
//	//}
//	//puts(a);
//
//
//	//char str[] = "ABCDEFG";
//	//char* p1, * p2;
//	//p1 = "abcd";
//	//p2 = "efgh";
//	//strcpy(str + 1, p2 + 1);
//	//strcpy(str + 3, p1 + 3);
//	//printf("%s\n", str);
//
//
//	//char* s1 = "abcdef";
//	//char* s2 = "abcdef";
//	//int ret = fun(s1, s2);
//	//printf("%d\n", ret);
//
//
//	//unsigned int a = 0xFFFFFFF7;
//	//unsigned char i = (unsigned char)a;
//	//char* b = (char*)&a;
//	//printf("%8x,%8x\n", i, *b);
//
//
//	//int j = 4;
//	//int i = j;
//	//for (; i <= 2 * j; i++)
//	//{
//	//	switch (i / j)
//	//	{
//	//	case 0:
//	//	case 1:printf("*");
//	//		break;
//	//	case 2:printf("#");
//	//	}
//	//}
//
//
//	//int x = 1, y = 012;
//	//printf("%d", y * x++);
//
//	return EXIT_SUCCESS;
//}