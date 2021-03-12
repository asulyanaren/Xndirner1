#pragma once
#include "worker.h"

class Teacher: public Worker{
     public:
	     Teacher(std::string n, std::string sn, unsigned s, unsigned y, std::string sub);
	     virtual ~Teacher() {}
	     virtual std::string getProfession();
	     virtual unsigned getSalary(){return 1.2 * salary;}
     private:
	     std::string subject;

};
