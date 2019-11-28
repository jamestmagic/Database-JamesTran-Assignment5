#include <iostream> //preprocessor directive
#include <fstream>
#include "Faculty.h"

using namespace std;

int facultyID;
// string name;
// string level;
string dept;
GenStack<int> adviseeIDs;

Faculty::Faculty(){ //default constructor
  facultyID = 0;
  // name = "";
  // level = "";
  dept = "";
}


Faculty::~Faculty(){ //destructor

}

int Faculty::getID(){ //accessor for facultyID
  return facultyID;
}
