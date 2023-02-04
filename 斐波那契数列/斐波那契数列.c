#include<stdio.h>
//斐波那契数列  1 1 2 3 5 8 13 ......   第n个元素的值=第n-1个元素的值+第n-2个元素的值
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