#include <iostream> //preprocessor directive
#include <fstream>

using namespace std;

class Student{
  public:
    Student();
    Student(int sID, string n, string l, string m, double g, int aID);
    ~Student();
    int studentID;
    string name;
    string level;
    string major;
    double gpa;
    int advisorID;
    int getID();
    int getAdvisorID();
    void setAdvisorID();


};
