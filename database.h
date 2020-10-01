#pragma once

#include <map>
#include "date.h"

class Database {
public:
	void AddEvent(const Date& date, const string& event){
		data[date] = event;
	}
	bool DeleteEvent(const Date& date, const string& event){
		data.erase(date);
		return true;
	}
	int DeleteDate(const Date& date);

	// ???	Find(const Date& date) const;

	void Print() const{
		for(auto const& [key, val] : data){
			cout << key.GetDay() << "/"
				 << key.GetMonth() << "/"
				 << key.GetYear() << "/"
				 << " " << val << endl;
		}
	}
private:
	map<Date, string> data;
};

