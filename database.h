#pragma once

#include <map>
#include <string>
#include "date.h"

class Database {
public:
	void AddEvent(const Date& date, const std::string& event){
		data[date] = event;
	}
	bool DeleteEvent(const Date& date, const std::string& event){
		data[date] = "";
		return true;
	}
	int DeleteDate(const Date& date){
		data.erase(date);
		return 0;
	}

	// ???	Find(const Date& date) const;

	void Print() const{
		for(auto const& [key, val] : data){
				std::cout << key.GetDay() << "/"
				 << key.GetMonth() << "/"
				 << key.GetYear() << "/"
				 << " " << val << std::endl;
		}
	}
private:
	std::map<Date, std::string> data;
};

