#include <stdio.h>
//#include <math.h>

int num(unsigned long long int input)//这是一个求数字有多少位的函数
{
	unsigned long long int temp;
	int i=0;
	temp = input;
	while (temp != 0)
	{
		temp = temp/10;
		i++;
	}
	return i;
}

unsigned long long int int_pow(unsigned long long int input,int expon)//十进制下把输入右移expon
{
	unsigned long long int k;
	k = input;
	while (expon > 0)
	{
		k /= 10;
		expon--;
	}
	return k;
}

int main()
{
	unsigned long long int a = 1, n = 0,k;
	int exponent;
	// a, b, c;
	for (int i = 1; i <= 1000; i++)
	{
		n++;
		a = a << 1;
		exponent = num(a) - num(n);
		k = int_pow(a,exponent);
		if (k == n) printf("%llu\n", n);
		else printf("\r正在计算中...(%llu)", n);
	}
	return 0;
}