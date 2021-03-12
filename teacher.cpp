#include "teacher.h"

Teacher::Teacher(std::string n, std::string sn, unsigned s,unsigned y,  std::string sub) :
          Worker(n, sn, s, y)
	 ,subject(sub){}

   std::string Teacher::getProfession(){return "Teacher of " + subject; };
