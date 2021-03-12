#pragma once
#include <string>

class Worker{
	public:
		Worker(std::string n, std::string sn, unsigned s, unsigned y);
		virtual ~Worker(){}
		virtual unsigned getSalary(){return salary;}
		virtual unsigned  getYearsOfExperience(){return yearsOfExperience;}
		virtual std::string getProfession() = 0;

	protected:
		std::string name;
		std::string surname;
		unsigned salary;
		unsigned yearsOfExperience;
   };

