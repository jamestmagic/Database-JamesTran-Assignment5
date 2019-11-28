#include <iostream>

using namespace std;

class DatabaseImplementation{
  public:
    DatabaseImplementation(); //default constructor
    ~DatabaseImplementation(); //destructor
    void menu(); //interface for utilizing database
    bool exitMenu; //if the user chose to exit
    int choiceNum; //user choice
    int getChoiceNum(); //returns the user choice
    void checkForReference(); //checks if the files for the BSTs exist in current directory
};
