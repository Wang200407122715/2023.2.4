#include<stdio.h>
//쳲���������  1 1 2 3 5 8 13 ......   ��n��Ԫ�ص�ֵ=��n-1��Ԫ�ص�ֵ+��n-2��Ԫ�ص�ֵ
int fun(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fun(n - 1) + fun(n - 2);
	}
}
int main()
{
	printf("%d\n",fun(15));
	return 0;
}