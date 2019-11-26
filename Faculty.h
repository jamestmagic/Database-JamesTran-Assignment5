#include <iostream> //preprocessor directive
#include "GenStack.h"
#include <fstream>

using namespace std;

class Faculty{
  public:
    Faculty();
    ~Faculty();
    int facultyID;
    string name;
    string level;
    string dept;
    GenStack<int> adviseeIDs;
};
