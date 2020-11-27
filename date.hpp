#pragma once

#include <vector>

class Date{
public:
	int GetYear() const{
		return year;
	};
	int GetMonth() const{
		return month;
	};
	int GetDay() const{
		return day;
	};
	Date(int day_value, int month_value, int year_value){
		year = year_value;
		month = month_value;
		day = day_value;
	}
private:
	int year;
	int month;
	int day;
};


bool operator<(const Date& lhs, const Date& rhs){
	std::vector<int> date_one;
	date_one.push_back(lhs.GetYear());
	date_one.push_back(lhs.GetMonth());
	date_one.push_back(lhs.GetDay());
	std::vector<int> date_two;
	date_one.push_back(lhs.GetYear());
	date_one.push_back(lhs.GetMonth());
	date_one.push_back(lhs.GetDay());
	return date_one < date_two;
}

