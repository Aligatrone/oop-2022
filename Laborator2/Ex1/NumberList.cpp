#include <stdio.h>
#include "NumberList.h"
#define _CRT_SECURE_NO_WARNINGS

void NumberList::Init() {
	count = 0;
}

bool NumberList::Add(int x) {
	if (count >= 10)
		return false;
	else {
		numbers[count] = x;
		count++;
	}
}

void NumberList::Sort() {
	int c;
	for(int i = 0; i < count-1; i++)
		for(int j = 0; j < count-i-1; j++)
			if (numbers[j] > numbers[j + 1]) {
				c = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = c;
			}
}

void NumberList::Print() {
	for (int i = 0; i <= count-1; i++)
		printf("%d ", numbers[i]);
}
