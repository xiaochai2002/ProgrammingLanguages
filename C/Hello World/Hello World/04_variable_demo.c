#include<stdio.h>

int main()
{
	//������С������ȷС�����6λ��
	float f = 3.14F;
	printf("%f\n", f);

	//˫����С������ȷС�������15λ��
	double d = 1.78;
	printf("%.2lf\n", d);

	//�߾���С������ȷ��С�������18-19λ��
	long double ld = 3.1415926L;
	printf("%.2lf\n", ld);

	printf("%zu", sizeof(f));
	printf("%zu", sizeof(d));
	printf("%zu", sizeof(ld));
	return 0;
}