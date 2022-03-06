#pragma once

class Student {
	char name[128];
	double mathematics;
	double english;
	double history;
public:
	void setName(const char* name);
	const char* getName() const;
	void setMathematics(double matematics_c);
	double getMathematics() const;
	void setEnglish(double english_c);
	double getEnglish() const;
	void setHistory(double history_c);
	double getHistory() const;
	double getAverage() const;
};