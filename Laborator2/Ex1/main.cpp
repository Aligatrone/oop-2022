#include <stdio.h>
#include "NumberList.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	NumberList x;
	int a, n;
	scanf("%d", &n);
	x.Init();
	for (int i = 0; i <= n-1; i++) {
		scanf("%d", &a);
		x.Add(a);
	}
	x.Sort();
	x.Print();
	return 0;
}