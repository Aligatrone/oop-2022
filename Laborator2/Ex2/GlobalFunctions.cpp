#include <stdio.h>
#include <string.h>
#include "Student.h"
#include "GlobalFunctions.h"
#define _CRT_SECURE_NO_WARNINGS

int CompareName(Student Student_1, Student Student_2) {
	if (strcmp(Student_1.getName(), Student_2.getName()) > 0)
		return 1;
	else if (strcmp(Student_1.getName(), Student_2.getName()) < 0)
		return -1;
	else
		return 0;
}

int CompareMathematics(Student Student_1, Student Student_2) {
	if (Student_1.getMathematics() > Student_2.getMathematics())
		return 1;
	else if (Student_1.getMathematics() < Student_2.getMathematics())
		return -1;
	else
		return 0;
}

int CompareEnglish(Student Student_1, Student Student_2) {
	if (Student_1.getEnglish() > Student_2.getEnglish())
		return 1;
	else if (Student_1.getEnglish() < Student_2.getEnglish())
		return -1;
	else
		return 0;
}

int CompareHistory(Student Student_1, Student Student_2) {
	if (Student_1.getHistory() > Student_2.getHistory())
		return 1;
	else if (Student_1.getHistory() < Student_2.getHistory())
		return -1;
	else
		return 0;
}

int CompareAverage(Student Student_1, Student Student_2) {
	if (Student_1.getAverage() > Student_2.getAverage())
		return 1;
	else if (Student_1.getAverage() < Student_2.getAverage())
		return -1;
	else
		return 0;
}
