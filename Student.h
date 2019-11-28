#include <iostream> //preprocessor directive
#include <fstream>

using namespace std;

class Student{
  public:
    Student(); //default constructor
    Student(int sID, string n, string l, string m, double g, int aID); //overloaded constructor
    ~Student(); //destructor

    //Fields
    int studentID;
    string name;
    string level;
    string major;
    double gpa;
    int advisorID;

    int getID(); //accessor for studentID
    int getAdvisorID(); //accessor for studentID
    void setAdvisorID(int newID); //mutator for advisorID
};
