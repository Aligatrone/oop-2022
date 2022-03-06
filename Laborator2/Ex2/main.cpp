#include <stdio.h>
#include <string.h>
#include "Student.h"
#include "GlobalFunctions.h"
#define _CRT_SECURE_NO_WARNINGS

void Set(Student Student_c) {
	char name[128];
	double gradeM, gradeE, gradeH;
	scanf("%127s", name);
	Student_c.setName(name);
	scanf("%lf", &gradeM);
	Student_c.setMathematics(gradeM);
	scanf("%lf", &gradeE);
	Student_c.setEnglish(gradeE);
	scanf("%lf", &gradeH);
	Student_c.setHistory(gradeH);
}

void Get(Student Student_c) {
	printf("%s\n", Student_c.getName());
	printf("%lf\n", Student_c.getMathematics());
	printf("%lf\n", Student_c.getEnglish());
	printf("%lf\n", Student_c.getHistory());
	printf("%lf\n", Student_c.getAverage());
}

void Compare(Student Student1_c, Student Student2_c) {
	printf("%d\n", CompareName(Student1_c, Student2_c));
	printf("%d\n", CompareMathematics(Student1_c, Student2_c));
	printf("%d\n", CompareEnglish(Student1_c, Student2_c));
	printf("%d\n", CompareHistory(Student1_c, Student2_c));
	printf("%d\n", CompareAverage(Student1_c, Student2_c));
}

int main() {
	Student Student1, Student2;
	Set(Student1);
	Set(Student2);
	Get(Student1);
	Get(Student2);
	Compare(Student1, Student2);
	return 0;
}