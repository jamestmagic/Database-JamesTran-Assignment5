#include <iostream> //preprocessor directive
#include <fstream>
#include "Student.h"

using namespace std;


int studentID;
string name;
string level;
string major;
double gpa;
int advisorID;

Student::Student(){ //default constructor
  studentID = 0;
  name = "";
  level = "";
  major = "";
  gpa = 0;
  advisorID = 0;
}

Student::Student(int sID, string n, string l, string m, double g, int aID){ //destructor
  studentID = sID;
  name = n;
  level = l;
  major = m;
  gpa = g;
  advisorID = aID;
}

Student::~Student(){
  
}

int Student::getID(){
  return studentID;
}

int Student::getAdvisorID(){
  return advisorID;
}
