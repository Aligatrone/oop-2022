#include <stdio.h>
#include <string.h>
#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS

void Student::setName(const char* name_c) {
	strcpy_s(name, name_c);
}

const char* Student::getName() const {
	return name;
}

void Student::setMathematics(double matematics_c) {
	mathematics = matematics_c;
}

double Student::getMathematics() const {
	return mathematics;
}

void Student::setEnglish(double english_c) {
	english = english_c;
}

double Student::getEnglish() const {
	return english;
}

void Student::setHistory(double history_c) {
	history = history_c;
}

double Student::getHistory() const {
	return history;
}

double Student::getAverage() const {
	return (mathematics + english + history) / 3;
}
