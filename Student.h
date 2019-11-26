#include <iostream> //preprocessor directive
#include <fstream>

using namespace std;

class Student{
  public:
    Student();
    ~Student();
    int studentID;
    string name;
    string level;
    string major;
    double gpa;
    int advisorID;

};
