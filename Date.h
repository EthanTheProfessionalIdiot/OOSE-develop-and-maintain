#ifndef DATE_H
#define DATE_H

class Date {

private:
	int month;
	int day;
	int year;

public:
	int getMonth();

	void setMonth(int month);

	int getDay();

	void setDay(int day);

	int getYear();

	void setYear(int year);
};

#endif
