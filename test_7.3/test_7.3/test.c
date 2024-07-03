#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 5;
//	//scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || j == 0 || i ==n-1 || j==n-1)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 6;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j || i + j == n - 1)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[7] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int sum = 0;
//	int min = 100;
//	int max = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//		sum += arr[i];
//	}
//	sum = sum - max - min;
//	double average = 0.0;
//	average = sum / (sz - 2);
//	printf("%.2lf", average);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year,&month) != EOF)
//	{
//		int day = days[month];
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			{
//				day = day + 1;
//				printf("%d\n", day);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[6] = { 1,6,9,22,30 };
//	int n = 5;
//	//scanf("%d", &n);
//	int i = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	int num = 8;
//	//scanf("%d", &num);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > num)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = num;
//			break;
//		}
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//模拟实现atoi，把字符串转换成整型的一个函数


//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次，编写一个函数找出这两个只出现一次的数字
//void Find(int arr[], int sz, int* px, int* py)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//7^9=111^1001=1110=14
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1 == 1)
//		{
//			pos = i;//找出只出现过一次的两个数字：二进制第i位不同
//			break;
//		}
//	}
//	//然后根据第i位不同，分成两个组
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//			num1 ^= arr[i];
//		else
//			num2 ^= arr[i];
//	}
//	*px = num1;
//	*py = num2;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,7,9,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Find(arr, sz, &x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int n = 15;
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	while (1)
//	{
//		if (n == b)
//		{
//			printf("0\n");
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) > abs(b - n))
//			{
//				printf("%d\n", abs(b - n));
//			}
//			else
//			{
//				printf("%d\n", abs(a - n));
//			}
//			break;
//		}
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}