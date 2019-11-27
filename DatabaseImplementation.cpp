#include <iostream> //preprocessor directive
#include <fstream>
#include "DatabaseImplementation.h"

using namespace std;

bool exitMenu;
int choiceNum;
DatabaseImplementation::DatabaseImplementation(){ //default constructor
  exitMenu = false;
  choiceNum = 0;
}

DatabaseImplementation::~DatabaseImplementation(){ //destructor

}

void DatabaseImplementation::menu(){
  cout << "Enter the number of your choice." << endl;
  cout <<"1. Print all students and their information.(sorted by ascending id #)" << endl;
  cout <<"2. Print all faculty and their information.(sorted by ascending id #)" << endl;
  cout <<"3. Display a student's information.(Requires ID#)" << endl;
  cout <<"4. Display a faculty member's information.(Requires ID#)" << endl;
  cout <<"5. Given a student’s id, print the name and info of their faculty advisor." << endl;
  cout <<"6. Given a faculty id, print ALL the names and info of his/her advisees." << endl;
  cout <<"7. Add a new student." << endl;
  cout <<"8. Delete a student.(Requires ID#)" << endl;
  cout <<"9. Add a new faculty member." << endl;
  cout <<"10. Delete a faculty member given the id." << endl;
  cout <<"11. Change a student’s advisor given the student id and the new faculty ID." << endl;
  cout <<"12. Remove an advisee from a faculty member given the ID." << endl;
  cout <<"13. Rollback" << endl;
  cout <<"14. Exit" << endl;
  cin >> choiceNum;
}
