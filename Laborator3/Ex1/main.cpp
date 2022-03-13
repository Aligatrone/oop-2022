#include "Math.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	Math test;
	int operatie;
	scanf("%d", &operatie);
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	double x, y, z;
	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);
	char sir1[128], sir2[128];
	scanf("%s", sir1);
	scanf("%s", sir2);
	switch (operatie)
	{
		case 1:
			printf("%d", test.Add(a, b));
			break;
		case 2:
			printf("%d", test.Add(a, b, c));
			break;
		case 3:
			printf("%d", test.Mul(a, b));
			break;
		case 4:
			printf("%d", test.Mul(a, b, c));
			break;
		case 5:
			printf("%d", test.Add(x, y));
			break;
		case 6:
			printf("%d", test.Add(x, y, z));
			break;
		case 7:
			printf("%d", test.Mul(x, y));
			break;
		case 8:
			printf("%d", test.Mul(x, y, z));
			break;
		case 9:
			printf("%d", test.Add(4, a, b, c, d));
			break;
		case 10:
			printf("%s", test.Add(sir1, sir2);
			break;
	}
	return 0;
}