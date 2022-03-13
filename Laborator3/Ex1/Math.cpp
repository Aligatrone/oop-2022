#include "Math.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int Math::Add(int nr1, int nr2) {
	return nr1 + nr2;
}

int Math::Add(int nr1, int nr2, int nr3) {
	return nr1 + nr2 + nr3;
}

int Math::Add(double nr1, double nr2) {
	return nr1 + nr2;
}

int Math::Add(double nr1, double nr2, double nr3) {
	return nr1 + nr2 + nr3;
}

int Math::Mul(int nr1, int nr2) {
	return nr1 * nr2;
}

int Math::Mul(int nr1, int nr2, int nr3) {
	return nr1 * nr2 * nr3;
}

int Math::Mul(double nr1, double nr2) {
	return nr1 * nr2;
}

int Math::Mul(double nr1, double nr2, double nr3) {
	return nr1 * nr2 * nr3;
}

int Math::Add(int count, ...) {
	int S = 0;
	va_list ap;
	va_start(ap, count);
	for (int i = 0; i < count; i++) {
		S += va_arg(ap, int);
	}
	va_end(ap);
	return S;
}

char* Math::Add(const char* str1, const char* str2) {
	if(str1 ==nullptr || str2==nullptr)
		return nullptr;
	char* add=(char*) malloc (strlen(str1)+strlen(str2)+1);
	memcpy(add, str1, strlen(str1));
	memcpy(add + strlen(str1), str2, strlen(str2) + 1);
	return add;
}
