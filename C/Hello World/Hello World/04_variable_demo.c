#include<stdio.h>

int main()
{
	//单精度小数（精确小数点后6位）
	float f = 3.14F;
	printf("%f\n", f);

	//双精度小数（精确小数点后面15位）
	double d = 1.78;
	printf("%.2lf\n", d);

	//高精度小数（精确到小数点后面18-19位）
	long double ld = 3.1415926L;
	printf("%.2lf\n", ld);

	printf("%zu", sizeof(f));
	printf("%zu", sizeof(d));
	printf("%zu", sizeof(ld));
	return 0;
}