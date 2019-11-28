#include <iostream> //preprocessor directive
#include "GenStack.h"
#include <fstream>

using namespace std;

class Faculty{
  public:
    Faculty();//default constructor
    //Faculty(int fID, string n, string l, string d, GenStack<int> aID);
    ~Faculty(); //destructor

    //fields
    int facultyID;
    string name;
    string level;
    string dept;
    GenStack<int> adviseeIDs;
    
    int getID();
};
