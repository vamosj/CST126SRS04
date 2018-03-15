// CST126SRS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

	void addWoman()
	{
		std::string* ptrName = new std::string;
		*ptrName = name_;

		std::string* ptrBirthdate = new std::string;
		*ptrBirthdate = birthYear_;

		std::string* ptrFact = new std::string;
		*ptrFact = fact_;
	}



};

int main()
{
	CSWoman Woman();
	
	
	


    return 0;
}

