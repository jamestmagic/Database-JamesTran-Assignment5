#include <iostream>
#include "BST.h"
//#include "Student.h"
#include "Faculty.h"
using namespace std;

class DatabaseImplementation{
  public:
    DatabaseImplementation();
    ~DatabaseImplementation();
    void menu(); //interface for utilizing database
    bool exitMenu;
    int choiceNum;
};
